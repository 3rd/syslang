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
  LABEL_LINE,
  RANGE_SEP_DATE,
  RANGE_SEP_DATETIME,
  SECTION_MARKER,
  INLINE_LABEL
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
  // Indent level of the current line as computed by scan()'s indentation count
  // (spaces/2, or one level per tab). Stashed so scan_section_marker can record
  // the section's true level instead of get_column/2, which miscounts tabs.
  size_t line_indent;
} Scanner;

static void set_previous_indent(Scanner *scanner, const char *where, size_t indent) {
  scanner->previous_indent = indent;
}
static void set_dedent(Scanner *scanner, const char *where, size_t value) { scanner->dedent = value; }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline bool scan_task_markers(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (lexer->lookahead != '[') return false;

  advance(lexer);
  int32_t next = lexer->lookahead;

  // early exit
  if (next == ' ' && valid_symbols[TASK_MARKER_DEFAULT]) {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);
      if (lexer->lookahead == ' ') {
        lexer->result_symbol = TASK_MARKER_DEFAULT;
        lexer->mark_end(lexer);
        debug("  => TASK_MARKER_DEFAULT");
        return true;
      }
    }
  } else if (next == '-' && valid_symbols[TASK_MARKER_ACTIVE]) {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);
      if (lexer->lookahead == ' ') {
        lexer->result_symbol = TASK_MARKER_ACTIVE;
        lexer->mark_end(lexer);
        debug("  => TASK_MARKER_ACTIVE");
        return true;
      }
    }
  } else if (next == 'x' && valid_symbols[TASK_MARKER_DONE]) {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);
      if (lexer->lookahead == ' ') {
        lexer->result_symbol = TASK_MARKER_DONE;
        lexer->mark_end(lexer);
        debug("  => TASK_MARKER_DONE");
        return true;
      }
    }
  } else if (next == '_' && valid_symbols[TASK_MARKER_CANCELLED]) {
    advance(lexer);
    if (lexer->lookahead == ']') {
      advance(lexer);
      if (lexer->lookahead == ' ') {
        lexer->result_symbol = TASK_MARKER_CANCELLED;
        lexer->mark_end(lexer);
        debug("  => TASK_MARKER_CANCELLED");
        return true;
      }
    }
  }
  return false;
}

static inline bool scan_list_item_markers(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
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

static inline bool scan_inline_modifier(
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

static inline bool scan_italic_modifier(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
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
            lexer->lookahead == '}' || lexer->lookahead == '_' || lexer->lookahead == '*' || lexer->lookahead == '`' ||
            lexer->lookahead == '\'' || lexer->lookahead == '"') {
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

static inline bool scan_image(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
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

static inline bool scan_internal_links(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[INTERNAL_LINK_START]) {
    if (lexer->lookahead == '[') {
      advance(lexer);
      lexer->mark_end(lexer);
      // Only open a link if a well-formed close exists on this line: the target
      // holds no ']', then ']]' follows. Lookahead advances past mark_end (pure
      // lookahead, discarded on the true return). Without this, an unclosed '[['
      // or an array literal like '[[1,2],[3,4]]' commits INTERNAL_LINK_START and
      // then errors when the close never arrives.
      while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != ']') {
        advance(lexer);
      }
      if (lexer->lookahead != ']') return false;
      advance(lexer);
      if (lexer->lookahead != ']') return false;
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

static inline bool is_label_char(int32_t c) {
  return IS_ALNUM(c) || c == '_' || c == '-' || c == '/';
}

// Inline-modifier / link start chars that mark a line-start "word:" as an
// INLINE_LABEL (see below). '/' is included but guarded at the emit site: it
// only counts when the slash could open an italic (not a "//" as in "http://"),
// so a URL stays one external_link while "key:/italic/" and "key:/usr/bin" split.
static inline bool is_inline_modifier_start(int32_t c) {
  return c == '*' || c == '_' || c == '`' || c == '[' || c == '/';
}

// One prefix scan resolves two line-start label shapes so neither poisons the
// other by leaving the lexer advanced on a failed attempt:
//   - LABEL_LINE: any run up to ':' then end of line ("also label:" allows
//     spaces). Consumes the trailing newline like before.
//   - INLINE_LABEL: a pure label run "word:" immediately followed by an inline
//     modifier or link ("key:*b*", "key:[[t]]"). The internal label token loses
//     to the greedy text token here, so the scanner supplies the boundary. It is
//     restricted to this exact shape so ':' stays plain text everywhere else
//     (mid-line "word: value" must not fragment). Aliased to `label` in grammar.
static inline bool scan_label(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols, bool at_line_start) {
  // LABEL_LINE is a whole-line construct, so it only applies at the start of a
  // line. INLINE_LABEL applies at the start of any text_line's inline content,
  // which includes the position right after a task or list marker ("[ ] key:*b*",
  // "- key:*b*"); it must not be column-gated.
  bool want_line = valid_symbols[LABEL_LINE] && at_line_start;
  bool want_inline = valid_symbols[INLINE_LABEL];
  if (!want_line && !want_inline) return false;
  if (!IS_ALNUM(lexer->lookahead)) return false;

  bool all_label_chars = true;
  while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != ':') {
    if (!is_label_char(lexer->lookahead)) all_label_chars = false;
    advance(lexer);
  }

  if (lexer->lookahead != ':') return false;
  advance(lexer);

  if (lexer->lookahead == '\n') {
    if (!want_line) return false;
    lexer->mark_end(lexer);
    advance(lexer);
    lexer->result_symbol = LABEL_LINE;
    return true;
  }

  if (want_inline && all_label_chars && is_inline_modifier_start(lexer->lookahead)) {
    if (lexer->lookahead == '/') {
      // Token is "word:" (ends before the slash). Peek past the slash: only an
      // italic opener (single '/' + a non-slash, non-space) marks a label. A
      // "//" is a URL/path double-slash ("http://"), so bail and let the longer
      // external_link win; the false return resets to the text_line start.
      lexer->mark_end(lexer);
      advance(lexer);
      if (lexer->lookahead == '/' || iswspace(lexer->lookahead) || !lexer->lookahead ||
          lexer->lookahead == '\n') {
        return false;
      }
      lexer->result_symbol = INLINE_LABEL;
      return true;
    }
    lexer->mark_end(lexer);
    lexer->result_symbol = INLINE_LABEL;
    return true;
  }

  return false;
}

// A range separator dash only commits when a matching operand follows it, so a
// stray "date - prose" or "datetime - bare-date" degrades to inline text/tokens
// instead of erroring on the dash. The token itself is just the '-'; surrounding
// spaces stay as extras. Everything after mark_end is pure lookahead, discarded
// on the true return and reset by tree-sitter on the false return.
static inline bool scan_range_dash(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (!valid_symbols[RANGE_SEP_DATE] && !valid_symbols[RANGE_SEP_DATETIME]) return false;
  if (lexer->lookahead != '-') return false;

  advance(lexer);
  lexer->mark_end(lexer);

  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') advance(lexer);

  size_t digits = 0;
  while (IS_NUMBER(lexer->lookahead)) {
    digits++;
    advance(lexer);
  }

  // Time tail (\d\d:) completes a time or datetime range.
  if (digits == 2 && lexer->lookahead == ':') {
    if (valid_symbols[RANGE_SEP_DATETIME]) {
      lexer->result_symbol = RANGE_SEP_DATETIME;
      return true;
    }
    return false;
  }

  // Date tail (\d\d\d\d[-./]).
  if (digits == 4 && (lexer->lookahead == '-' || lexer->lookahead == '.' || lexer->lookahead == '/')) {
    // daterange: a bare date is a complete second operand.
    if (valid_symbols[RANGE_SEP_DATE]) {
      lexer->result_symbol = RANGE_SEP_DATE;
      return true;
    }
    // datetimerange: the operand must be a full datetime, so the date has to be
    // followed by a time. A bare date must not complete the range (Fix 7).
    if (valid_symbols[RANGE_SEP_DATETIME]) {
      advance(lexer); // separator after the year
      if (!IS_NUMBER(lexer->lookahead)) return false;
      advance(lexer);
      if (!IS_NUMBER(lexer->lookahead)) return false;
      advance(lexer);
      if (lexer->lookahead != '-' && lexer->lookahead != '.' && lexer->lookahead != '/') return false;
      advance(lexer);
      if (!IS_NUMBER(lexer->lookahead)) return false;
      advance(lexer);
      if (!IS_NUMBER(lexer->lookahead)) return false;
      advance(lexer);
      if (lexer->lookahead != ' ' && lexer->lookahead != '\t') return false;
      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') advance(lexer);
      if (!IS_NUMBER(lexer->lookahead)) return false;
      advance(lexer);
      if (!IS_NUMBER(lexer->lookahead)) return false;
      advance(lexer);
      if (lexer->lookahead != ':') return false;
      lexer->result_symbol = RANGE_SEP_DATETIME;
      return true;
    }
  }

  return false;
}

// section_marker is external so that emitting it records the section's own
// indent level as the scanner baseline. In outline bodies INDENT is not a valid
// symbol, so a section header line produces no other token there and tree-sitter
// would otherwise roll back the same-level indent tracking, leaving the section's
// child baseline at its own level and swallowing same-indent siblings.
static inline bool scan_section_marker(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (!valid_symbols[SECTION_MARKER]) return false;
  if (lexer->lookahead != '>') return false;

  advance(lexer);
  // A section marker requires a following space; without it (">nospace") the
  // line degrades to text like "*nospace"/"|nospace". Returning false after the
  // '>' advance resets to the line start (scan() returns false overall), so no
  // later external commits a token from the advanced position.
  if (lexer->lookahead != ' ') return false;
  lexer->mark_end(lexer);
  lexer->result_symbol = SECTION_MARKER;
  // Use the level scan() measured for this line (tab-aware) rather than
  // get_column/2, which counts each tab as half a level and mis-bases the
  // section's children under tab indentation.
  set_previous_indent(scanner, "section marker", scanner->line_indent);
  return true;
}

static inline bool is_in_recovery(const bool *valid_symbols) {
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

    // indentation counting
    int32_t ch = lexer->lookahead;
    if (ch == ' ' || ch == '\t') {
      size_t spaces = 0, tabs = 0;
      do {
        if (ch == ' ')
          spaces++;
        else
          tabs++;
        skip(lexer);
        ch = lexer->lookahead;
      } while (ch == ' ' || ch == '\t');

      indent = spaces > 0 ? spaces / 2 : tabs;
    }

    // Record the line's level so scan_section_marker (later in this same scan
    // call) can persist the correct baseline across the false-return rollback.
    scanner->line_indent = indent;

    debug("  indent: %zu previous_indent: %zu lookahead: '%c'", indent, scanner->previous_indent, lexer->lookahead);
    debug(
        "  valid_symbols: INDENT=%d DEDENT=%d BREAKOUT=%d",
        valid_symbols[INDENT],
        valid_symbols[DEDENT],
        valid_symbols[BREAKOUT]
    );

    // Blank lines (empty or whitespace-only) are indentation-transparent. Without
    // this, a blank line inside an indented block computes indent 0, emits a DEDENT,
    // and ejects the block's remaining still-indented children to the document level.
    // Bail before touching scanner state and let EOL/extras consume the newline; the
    // enclosing block stays open because previous_indent is left unchanged.
    if (lexer->lookahead == '\n' || lexer->eof(lexer) || !lexer->lookahead) {
      return false;
    }

    if (valid_symbols[INDENT] && indent > prev_indent) {
      // Clamp an over-indented jump (e.g. level 0 -> 2 in one step) to a single new
      // nesting level. One INDENT opens exactly one grammar block regardless of how
      // many columns were skipped, so a later shallower-but-still-indented line stays
      // inside this block instead of dedenting out of it.
      set_previous_indent(scanner, "scan()", prev_indent + 1);
      lexer->result_symbol = INDENT;
      debug("    => INDENT");
      return true;
    } else if (valid_symbols[DEDENT] && indent < prev_indent) {
      set_previous_indent(scanner, "scan()", indent);
      set_dedent(scanner, "scan()", prev_indent - indent - 1);
      lexer->result_symbol = DEDENT;
      debug("    ==> DEDENT");
      return true;
    } else if (valid_symbols[BREAKOUT] && indent == 0 && lexer->lookahead != '\n') {
      set_previous_indent(scanner, "scan()", indent);
      lexer->result_symbol = BREAKOUT;
      debug("    => BREAKOUT");
      return true;
    }

    // Same level, or indent tokens are not valid in this context (e.g. outline
    // bodies): track the current column so contiguous nesting keeps working.
    set_previous_indent(scanner, "scan()", indent);
  }

  if (scan_task_markers(scanner, lexer, valid_symbols)) return true;
  if (start_column == 0 && scan_list_item_markers(scanner, lexer, valid_symbols)) return true;
  if (start_column == 0 && scan_section_marker(scanner, lexer, valid_symbols)) return true;
  if (scan_image(scanner, lexer, valid_symbols)) return true;
  if (scan_internal_links(scanner, lexer, valid_symbols)) return true;

  while (iswspace(lexer->lookahead)) {
    skip(lexer);
  }

  if (scan_inline_modifier(scanner, lexer, valid_symbols, '*', BOLD_START, BOLD_END)) return true;
  if (scan_italic_modifier(scanner, lexer, valid_symbols)) return true;
  if (scan_inline_modifier(scanner, lexer, valid_symbols, '_', UNDERLINE_START, UNDERLINE_END)) return true;
  if (scan_inline_modifier(scanner, lexer, valid_symbols, '`', INLINE_CODE_START, INLINE_CODE_END)) return true;

  if (scan_range_dash(scanner, lexer, valid_symbols)) return true;

  // Runs last: scan_label advances the lexer past the 'word:' prefix while
  // classifying the line and returns false when it is neither a bare label line
  // nor an inline label (e.g. plain "word: value"). A false return only
  // auto-resets the lexer at the end of scan(); any external scan attempted
  // after it would otherwise commit a token from the advanced position and
  // swallow the label prefix.
  if (scan_label(scanner, lexer, valid_symbols, start_column == 0)) return true;

  return false;
}

void *tree_sitter_syslang_external_scanner_create() {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  scanner->previous_indent = 0;
  scanner->dedent = 0;
  scanner->line_indent = 0;
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
  buffer[i++] = scanner->line_indent;
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
  if ((unsigned)i < length) scanner->line_indent = (size_t)buffer[i++];
}
