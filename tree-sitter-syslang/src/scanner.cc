#include <cstdio>
#include <cwctype>
#include <string>
#include <tree_sitter/parser.h>
#include <vector>

namespace {

using std::string;

enum TokenType {
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
  NONE
};

bool debug = false;

struct Scanner {
  size_t previous_indent = 0;
  size_t dedent = 0;

  enum ScanContentResult { Error, End };

  Scanner() {
    if (debug) printf("Scanner::Scanner\n");
    deserialize(NULL, 0);
  }

  unsigned serialize(char *buffer) {
    size_t i = 0;
    buffer[i++] = previous_indent;
    buffer[i++] = dedent;
    if (debug) printf("  ~~> serialize indent -> %zu\n", previous_indent);
    if (debug) printf("  ~~> serialize dedent -> %zu\n", dedent);
    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    if (length == 0) return;
    size_t i = 0;
    set_previous_indent(const_cast<char *>("deserialize()"), buffer[i++]);
    set_dedent(const_cast<char *>("deserialize()"), buffer[i++]);
  }

  void reset() {}
  void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
  void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

  void set_previous_indent(const char *where, size_t indent) {
    if (debug) printf("  ~~> set indent from '%s' with value: %zu\n", where, indent);
    previous_indent = indent;
  }

  void set_dedent(const char *where, size_t value) {
    if (debug) printf("  ~~> set dedent from '%s' with value: %zu\n", where, value);
    dedent = value;
  }

  bool scan_task_markers(TSLexer *lexer, const bool *valid_symbols) {
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
        if (debug) printf("  => TASK_MARKER_DEFAULT\n");
        return true;
      }
    }
    if (valid_symbols[TASK_MARKER_ACTIVE] && lexer->lookahead == '-') {
      advance(lexer);
      if (lexer->lookahead == ']') {
        advance(lexer);
        lexer->result_symbol = TASK_MARKER_ACTIVE;
        lexer->mark_end(lexer);
        if (debug) printf("  => TASK_MARKER_ACTIVE\n");
        return true;
      }
    }
    if (valid_symbols[TASK_MARKER_DONE] && lexer->lookahead == 'x') {
      advance(lexer);
      if (lexer->lookahead == ']') {
        advance(lexer);
        lexer->result_symbol = TASK_MARKER_DONE;
        lexer->mark_end(lexer);
        if (debug) printf("  => TASK_MARKER_DONE\n");
        return true;
      }
    }
    if (valid_symbols[TASK_MARKER_CANCELLED] && lexer->lookahead == '_') {
      advance(lexer);
      if (lexer->lookahead == ']') {
        advance(lexer);
        lexer->result_symbol = TASK_MARKER_CANCELLED;
        lexer->mark_end(lexer);
        if (debug) printf("  => TASK_MARKER_CANCELLED\n");
        return true;
      }
    }
    return false;
  }

  bool scan_list_item_markers(TSLexer *lexer, const bool *valid_symbols) {
    if (lexer->lookahead != '-') {
      return false;
    }
    advance(lexer);
    if (valid_symbols[LIST_ITEM_MARKER] && lexer->lookahead == ' ') {
      lexer->mark_end(lexer);
      advance(lexer);
      lexer->result_symbol = LIST_ITEM_MARKER;
      if (debug) printf("  => LIST_ITEM_MARKER\n");
      return true;
    }
    return false;
  }

  bool scan_inline_modifier(TSLexer *lexer, const bool *valid_symbols, char c, TokenType start, TokenType end) {
    // start
    if (lexer->lookahead == c && valid_symbols[start]) {
      // printf(" - scan_inline_modifier start %c\n", c);
      advance(lexer);
      // printf(" - lookahead %c", lexer->lookahead);
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
        if (debug) printf("  => INLINE MODIFIER START %c\n", c);
        return true;
      }
    }
    // end
    if (lexer->lookahead == c && valid_symbols[end]) {
      advance(lexer);
      lexer->mark_end(lexer);
      lexer->result_symbol = end;
      if (debug) printf("  => INLINE MODIFIER END %c\n", c);
      return true;
    }
    return false;
  }

  bool scan_image(TSLexer *lexer, const bool *valid_symbols) {
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

  // [[internal link]]
  bool scan_internal_links(TSLexer *lexer, const bool *valid_symbols) {

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

  // label line:
  bool scan_label_line(TSLexer *lexer, const bool *valid_symbols) {
    if (!valid_symbols[LABEL_LINE]) {
      return false;
    }
    if (!isalnum(lexer->lookahead)) {
      return false;
    }

    while (lexer->lookahead && lexer->lookahead != '\n' && lexer->lookahead != ':') {
      advance(lexer);
    }

    if (lexer->lookahead == ':') {
      advance(lexer);
      if (lexer->lookahead != '\n') {
        return false;
      }
      lexer->mark_end(lexer);
      advance(lexer);
      lexer->result_symbol = LABEL_LINE;
      return true;
    }

    return false;
  }

  // https://github.com/tree-sitter/tree-sitter/pull/1783
  bool is_in_recovery(const bool *valid_symbols) {
    return (
        valid_symbols[END_OF_FILE] && valid_symbols[BREAKOUT] && valid_symbols[INDENT] && valid_symbols[DEDENT] &&
        valid_symbols[TASK_MARKER_DEFAULT] && valid_symbols[TASK_MARKER_ACTIVE] && valid_symbols[TASK_MARKER_DONE] &&
        valid_symbols[TASK_MARKER_CANCELLED] && valid_symbols[BOLD_END] && valid_symbols[ITALIC_END] &&
        valid_symbols[UNDERLINE_END] && valid_symbols[INLINE_CODE_END] && valid_symbols[IMAGE_END] &&
        valid_symbols[INTERNAL_LINK_END]
    );
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    uint32_t start_column = lexer->get_column(lexer);
    bool is_eof = (lexer->eof(lexer) || !lexer->lookahead);
    size_t prev_indent = previous_indent;

    if (is_in_recovery(valid_symbols)) {
      if (debug) printf("  => in recovery\n");
      return false;
    }

    // end of file
    if (is_eof) {
      lexer->result_symbol = END_OF_FILE;
      // if (debug) printf("  => END_OF_FILE\n");
      return true;
    }

    // end of line
    if (valid_symbols[END_OF_LINE] && lexer->lookahead == '\n') {
      lexer->mark_end(lexer);
      advance(lexer);
      lexer->result_symbol = END_OF_LINE;
      // if (debug) printf("  => END_OF_LINE\n");
      return true;
    }

    // ongoing dedent
    if (valid_symbols[DEDENT] && dedent > 0) {
      set_dedent(const_cast<char *>("dedent (rep proc)"), dedent - 1);
      lexer->result_symbol = DEDENT;
      if (debug) printf("    ==> DEDENT (rep)\n");
      return true;
    }

    // reset dedent
    set_dedent(const_cast<char *>("dedent (reset)"), 0);

    if (debug) {
      printf(
          "* scan() -> start_column=%u prev_indent=%zu lookahead='%c'\n",
          start_column,
          previous_indent,
          lexer->lookahead
      );
    }

    // line start
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

      if (debug) {
        printf("  indent: %zu previous_indent: %zu lookahead: '%c'\n", indent, previous_indent, lexer->lookahead);
        printf(
            "  valid_symbols: INDENT=%d DEDENT=%d BREAKOUT=%d\n",
            valid_symbols[INDENT],
            valid_symbols[DEDENT],
            valid_symbols[BREAKOUT]
        );
      }

      set_previous_indent(const_cast<char *>("scan()"), indent);

      // indent / dedent
      if (valid_symbols[INDENT] && indent > prev_indent) {
        lexer->result_symbol = INDENT;
        if (debug) printf("    => INDENT\n");
        return true;
      } else if (valid_symbols[DEDENT] && indent < prev_indent) {
        lexer->result_symbol = DEDENT;
        set_dedent(const_cast<char *>("scan()"), prev_indent - indent - 1);
        if (debug) printf("    ==> DEDENT\n");
        return true;
      } else if (valid_symbols[BREAKOUT] && indent == 0 && lexer->lookahead != '\n') {
        lexer->result_symbol = BREAKOUT;
        if (debug) printf("    => BREAKOUT\n");
        return true;
      }
    }

    // task markers -- TODO: should also check for start_column == 0 but it's tied to the internal links
    if (scan_task_markers(lexer, valid_symbols)) {
      return true;
    }

    // internal links
    if (scan_internal_links(lexer, valid_symbols)) {
      return true;
    }

    // list item markers
    if (start_column == 0 && scan_list_item_markers(lexer, valid_symbols)) {
      return true;
    }

    // label line
    if (start_column == 0 && scan_label_line(lexer, valid_symbols)) {
      return true;
    }

    // images
    if (scan_image(lexer, valid_symbols)) {
      return true;
    }

    // strip leading whitespace
    while (iswspace(lexer->lookahead)) {
      skip(lexer);
    }

    // printf("> loop col: %d char: %c\n", start_column,
    // lexer->lookahead);

    // emphasis
    if (scan_inline_modifier(lexer, valid_symbols, '*', BOLD_START, BOLD_END)) {
      return true;
    }
    if (scan_inline_modifier(lexer, valid_symbols, '/', ITALIC_START, ITALIC_END)) {
      return true;
    }
    if (scan_inline_modifier(lexer, valid_symbols, '_', UNDERLINE_START, UNDERLINE_END)) {
      return true;
    }
    if (scan_inline_modifier(lexer, valid_symbols, '`', INLINE_CODE_START, INLINE_CODE_END)) {
      return true;
    }

    return false;
  }
};

} // namespace

extern "C" {

void *tree_sitter_syslang_external_scanner_create() { return new Scanner(); }

bool tree_sitter_syslang_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_syslang_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_syslang_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_syslang_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}
}
