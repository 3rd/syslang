#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/alloc.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

typedef enum {
  END_OF_FILE,
  END_OF_LINE,
  BREAKOUT,
  INDENT,
  DEDENT,
  TASK_MARKER_DEFAULT,
  TASK_MARKER_ACTIVE,
  TASK_MARKER_DONE,
  TASK_MARKER_CANCELLED,
  LIST_ITEM_MARKER,
  BOLD_START,
  BOLD_END,
  ITALIC_START,
  ITALIC_END,
  UNDERLINE_START,
  UNDERLINE_END,
  INLINE_CODE_START,
  INLINE_CODE_END,
  IMAGE_START,
  IMAGE_ALT,
  IMAGE_SEPARATOR,
  IMAGE_URL,
  IMAGE_END,
  INTERNAL_LINK_START,
  INTERNAL_LINK_TARGET,
  INTERNAL_LINK_END,
  LABEL_LINE
} TokenType;

static bool DEBUG = false;

static void debug(const char *format, ...) {
  if (!DEBUG) return;
  va_list args;
  va_start(args, format);
  char message[1024 * 10];
  vsnprintf(message, sizeof(message), format, args);
  va_end(args);
  const char *filename = strrchr(__FILE__, '/');
  if (filename)
    filename++;
  else
    filename = __FILE__;
  printf("%s:%d %s\n", filename, __LINE__, message);
}

#define IS_UPPER(c) ((c >= 'A') && (c <= 'Z'))
#define IS_LOWER(c) ((c >= 'a') && (c <= 'z'))
#define IS_NUMBER(c) ((c >= '0') && (c <= '9'))
#define IS_ALNUM(c) (IS_UPPER(c) || IS_LOWER(c) || IS_NUMBER(c))

typedef struct {
  size_t previous_indent;
  size_t dedent;
} Scanner;

static void set_previous_indent(Scanner *scanner, const char *where, size_t indent) {
  scanner->previous_indent = indent;
}
static void set_dedent(Scanner *scanner, const char *where, size_t value) { scanner->dedent = value; }

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_task_markers(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (lexer->lookahead != '[') {
    return false;
  }
  advance(lexer);
  if (valid_symbols[TASK_MARKER_DEFAULT] && lexer->lookahead == ' ') {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);
      lexer->result_symbol = TASK_MARKER_DEFAULT;
      lexer->mark_end(lexer);
      debug("  => TASK_MARKER_DEFAULT");
      return true;
    }
  }
  if (valid_symbols[TASK_MARKER_ACTIVE] && lexer->lookahead == '-') {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);
      lexer->result_symbol = TASK_MARKER_ACTIVE;
      lexer->mark_end(lexer);
      debug("  => TASK_MARKER_ACTIVE");
      return true;
    }
  }
  if (valid_symbols[TASK_MARKER_DONE] && lexer->lookahead == 'x') {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);
      lexer->result_symbol = TASK_MARKER_DONE;
      lexer->mark_end(lexer);
      debug("  => TASK_MARKER_DONE");
      return true;
    }
  }
  if (valid_symbols[TASK_MARKER_CANCELLED] && lexer->lookahead == '_') {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);
      lexer->result_symbol = TASK_MARKER_CANCELLED;
      lexer->mark_end(lexer);
      debug("  => TASK_MARKER_CANCELLED");
      return true;
    }
  }
  return false;
}

static bool scan_list_item_markers(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (lexer->lookahead != '-') {
    return false;
  }
  advance(lexer);
  if (valid_symbols[LIST_ITEM_MARKER] && lexer->lookahead == ' ') {
    lexer->mark_end(lexer);
    advance(lexer);
    lexer->result_symbol = LIST_ITEM_MARKER;
    debug("  => LIST_ITEM_MARKER");
    return true;
  }
  return false;
}

static bool scan_inline_modifier(
    Scanner *scanner,
    TSLexer *lexer,
    const bool *valid_symbols,
    char c,
    TokenType start,
    TokenType end
) {
  if (lexer->lookahead == c && valid_symbols[start]) {
    advance(lexer);
    if (lexer->lookahead == c || iswspace(lexer->lookahead)) {
      return false;
    }
    lexer->mark_end(lexer);
    while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != c) {
      advance(lexer);
    }
    if (lexer->lookahead == c) {
      advance(lexer);
      lexer->result_symbol = start;
      debug("  => INLINE MODIFIER START %c", c);
      return true;
    }
  }
  if (lexer->lookahead == c && valid_symbols[end]) {
    advance(lexer);
    lexer->mark_end(lexer);
    lexer->result_symbol = end;
    debug("  => INLINE MODIFIER END %c", c);
    return true;
  }
  return false;
}

static bool scan_italic_modifier(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (lexer->lookahead == '/' && valid_symbols[ITALIC_START]) {
    uint32_t col = lexer->get_column(lexer);

    advance(lexer);

    if (lexer->lookahead == '/' || iswspace(lexer->lookahead)) {
      return false;
    }

    lexer->mark_end(lexer);

    int slash_count = 0;
    bool found_non_slash = false;

    while (lexer->lookahead && lexer->lookahead != '\n') {
      if (lexer->lookahead == '/') {
        slash_count++;
        advance(lexer);

        if (iswspace(lexer->lookahead) || lexer->lookahead == '\0' || lexer->lookahead == '\n' ||
            lexer->lookahead == ',' || lexer->lookahead == '.' || lexer->lookahead == '!' || lexer->lookahead == '?' ||
            lexer->lookahead == ';' || lexer->lookahead == ':' || lexer->lookahead == ')' || lexer->lookahead == ']' ||
            lexer->lookahead == '}') {
          if (found_non_slash) {
            lexer->result_symbol = ITALIC_START;
            debug("  => ITALIC START");
            return true;
          }
        } else if (!iswspace(lexer->lookahead) && lexer->lookahead != '\0' && lexer->lookahead != '\n') {
          if (slash_count > 0) {
            return false;
          }
        }
      } else {
        found_non_slash = true;
        advance(lexer);
      }
    }

    return false;
  }

  if (lexer->lookahead == '/' && valid_symbols[ITALIC_END]) {
    advance(lexer);
    lexer->mark_end(lexer);
    lexer->result_symbol = ITALIC_END;
    debug("  => ITALIC END");
    return true;
  }

  return false;
}

static bool scan_image(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[IMAGE_START]) {
    if (lexer->lookahead != '!') {
      return false;
    }
    advance(lexer);
    if (lexer->lookahead != '[') {
      return false;
    }
    advance(lexer);
    lexer->mark_end(lexer);
    while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != ']') {
      advance(lexer);
    }
    if (lexer->lookahead != ']') {
      return false;
    }
    advance(lexer);
    if (lexer->lookahead != '(') {
      return false;
    }
    advance(lexer);
    while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != ')') {
      advance(lexer);
    }
    if (lexer->lookahead != ')') {
      return false;
    }
    lexer->result_symbol = IMAGE_START;
    return true;
  }

  if (valid_symbols[IMAGE_ALT]) {
    while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != ']') {
      advance(lexer);
    }
    if (lexer->lookahead != ']') {
      return false;
    }
    lexer->result_symbol = IMAGE_ALT;
    return true;
  }

  if (valid_symbols[IMAGE_SEPARATOR]) {
    if (lexer->lookahead != ']') {
      return false;
    }
    advance(lexer);
    if (lexer->lookahead != '(') {
      return false;
    }
    advance(lexer);
    lexer->result_symbol = IMAGE_SEPARATOR;
    return true;
  }

  if (valid_symbols[IMAGE_URL]) {
    while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != ')') {
      advance(lexer);
    }
    if (lexer->lookahead != ')') {
      return false;
    }
    lexer->result_symbol = IMAGE_URL;
    return true;
  }

  if (valid_symbols[IMAGE_END]) {
    if (lexer->lookahead != ')') {
      return false;
    }
    advance(lexer);
    lexer->result_symbol = IMAGE_END;
    return true;
  }

  return false;
}

static bool scan_internal_links(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[INTERNAL_LINK_START]) {
    if (lexer->lookahead == '[') {
      advance(lexer);
      lexer->mark_end(lexer);
      lexer->result_symbol = INTERNAL_LINK_START;
      return true;
    }
  }

  if (valid_symbols[INTERNAL_LINK_TARGET]) {
    while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != ']') {
      advance(lexer);
    }
    if (lexer->lookahead == ']') {
      lexer->mark_end(lexer);
      lexer->result_symbol = INTERNAL_LINK_TARGET;
      return true;
    }
    return false;
  }

  if (valid_symbols[INTERNAL_LINK_END]) {
    if (lexer->lookahead == ']') {
      advance(lexer);
      if (lexer->lookahead == ']') {
        advance(lexer);
        lexer->mark_end(lexer);
        lexer->result_symbol = INTERNAL_LINK_END;
        return true;
      }
      return false;
    }
  }

  return false;
}

static bool scan_label_line(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  debug("fmm: %b %c", valid_symbols[LABEL_LINE], lexer->lookahead);
  debug("check: %b", IS_ALNUM(lexer->lookahead));

  if (!valid_symbols[LABEL_LINE]) return false;

  if (!IS_ALNUM(lexer->lookahead)) return false;

  while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != ':') {
    advance(lexer);
  }

  if (lexer->lookahead == ':') {
    debug("label line");
    advance(lexer);
    if (lexer->lookahead == '\n') {
      lexer->mark_end(lexer);
      advance(lexer);
      debug("label line end");
      lexer->result_symbol = LABEL_LINE;
      return true;
    }
  }

  return false;
}

static bool is_in_recovery(const bool *valid_symbols) {
  return (
      valid_symbols[END_OF_FILE] && valid_symbols[BREAKOUT] && valid_symbols[INDENT] && valid_symbols[DEDENT] &&
      valid_symbols[TASK_MARKER_DEFAULT] && valid_symbols[TASK_MARKER_ACTIVE] && valid_symbols[TASK_MARKER_DONE] &&
      valid_symbols[TASK_MARKER_CANCELLED] && valid_symbols[BOLD_END] && valid_symbols[ITALIC_END] &&
      valid_symbols[UNDERLINE_END] && valid_symbols[INLINE_CODE_END] && valid_symbols[IMAGE_END] &&
      valid_symbols[INTERNAL_LINK_END]
  );
}

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (!scanner || !lexer || !valid_symbols) {
    return false;
  }

  uint32_t start_column = lexer->get_column(lexer);
  bool is_eof = (lexer->eof(lexer) || !lexer->lookahead);
  size_t prev_indent = scanner->previous_indent;

  if (is_in_recovery(valid_symbols)) {
    debug("  => in recovery");
    return false;
  }

  if (is_eof) {
    lexer->result_symbol = END_OF_FILE;
    return true;
  }

  if (valid_symbols[END_OF_LINE] && lexer->lookahead == '\n') {
    lexer->mark_end(lexer);
    advance(lexer);
    lexer->result_symbol = END_OF_LINE;
    return true;
  }

  if (valid_symbols[DEDENT] && scanner->dedent > 0) {
    set_dedent(scanner, "dedent (rep proc)", scanner->dedent - 1);
    lexer->result_symbol = DEDENT;
    debug("    ==> DEDENT (rep)");
    return true;
  }

  set_dedent(scanner, "dedent (reset)", 0);

  debug(
      "* scan() -> start_column=%u prev_indent=%zu lookahead='%c'",
      start_column,
      scanner->previous_indent,
      lexer->lookahead
  );

  if (start_column == 0) {
    size_t indent = 0;

    lexer->mark_end(lexer);

    size_t spaces = 0;
    size_t tabs = 0;
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      if (lexer->lookahead == ' ')
        spaces++;
      else
        tabs++;
      skip(lexer);
    }

    if (spaces > 0) {
      indent = spaces / 2;
    } else if (tabs > 0) {
      indent = tabs;
    }

    debug("  indent: %zu previous_indent: %zu lookahead: '%c'", indent, scanner->previous_indent, lexer->lookahead);
    debug(
        "  valid_symbols: INDENT=%d DEDENT=%d BREAKOUT=%d",
        valid_symbols[INDENT],
        valid_symbols[DEDENT],
        valid_symbols[BREAKOUT]
    );

    set_previous_indent(scanner, "scan()", indent);

    if (valid_symbols[INDENT] && indent > prev_indent) {
      lexer->result_symbol = INDENT;
      debug("    => INDENT");
      return true;
    } else if (valid_symbols[DEDENT] && indent < prev_indent) {
      lexer->result_symbol = DEDENT;
      if (prev_indent > indent) {
        set_dedent(scanner, "scan()", prev_indent - indent - 1);
      } else {
        set_dedent(scanner, "scan()", 0);
      }
      debug("    ==> DEDENT");
      return true;
    } else if (valid_symbols[BREAKOUT] && indent == 0 && lexer->lookahead != '\n') {
      lexer->result_symbol = BREAKOUT;
      debug("    => BREAKOUT");
      return true;
    }
  }

  if (scan_task_markers(scanner, lexer, valid_symbols)) return true;
  if (start_column == 0 && scan_list_item_markers(scanner, lexer, valid_symbols)) return true;
  if (start_column == 0 && scan_label_line(scanner, lexer, valid_symbols)) return true;
  if (scan_image(scanner, lexer, valid_symbols)) return true;
  if (scan_internal_links(scanner, lexer, valid_symbols)) return true;

  while (iswspace(lexer->lookahead)) {
    skip(lexer);
  }

  if (scan_inline_modifier(scanner, lexer, valid_symbols, '*', BOLD_START, BOLD_END)) return true;
  if (scan_italic_modifier(scanner, lexer, valid_symbols)) return true;
  if (scan_inline_modifier(scanner, lexer, valid_symbols, '_', UNDERLINE_START, UNDERLINE_END)) return true;
  if (scan_inline_modifier(scanner, lexer, valid_symbols, '`', INLINE_CODE_START, INLINE_CODE_END)) return true;

  return false;
}

void *tree_sitter_syslang_external_scanner_create() {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  scanner->previous_indent = 0;
  scanner->dedent = 0;
  return scanner;
}

void tree_sitter_syslang_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  ts_free(scanner);
}

bool tree_sitter_syslang_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
  return scan(scanner, lexer, valid_symbols);
}

unsigned tree_sitter_syslang_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = (Scanner *)payload;
  size_t i = 0;
  buffer[i++] = scanner->previous_indent;
  buffer[i++] = scanner->dedent;
  debug("  ~~> serialize indent -> %zu", scanner->previous_indent);
  debug("  ~~> serialize dedent -> %zu", scanner->dedent);
  return i;
}

void tree_sitter_syslang_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  if (length == 0) return;
  size_t i = 0;
  set_previous_indent(scanner, "deserialize()", (size_t)buffer[i++]);
  set_dedent(scanner, "deserialize()", (size_t)buffer[i++]);
}
