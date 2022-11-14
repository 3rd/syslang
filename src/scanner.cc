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
  INDENT,
  DEDENT,
  TASK_MARKER_DEFAULT,
  TASK_MARKER_ACTIVE,
  TASK_MARKER_DONE,
  TASK_MARKER_CANCELLED,
  LIST_ITEM_MARKER,
  NONE
};

bool debug = false;

struct Scanner {
  size_t previous_indent = 0;

  enum ScanContentResult { Error, End };

  Scanner() {
    if (debug)
      printf("Scanner::Scanner\n");
    // deserialize(NULL, 0);
  }

  unsigned serialize(char *buffer) {
    size_t i = 0;
    buffer[i++] = previous_indent;
    if (debug)
      printf("serialize: %d\n", previous_indent);
    return i;
  }
  void deserialize(const char *buffer, unsigned length) {
    if (length == 0)
      return;
    size_t i = 0;
    set_previous_indent("deserialize restore", buffer[i++]);
  }

  void reset() {}
  void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
  void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

  void set_previous_indent(char *where, size_t indent) {
    if (debug)
      printf("set_previous_indent: %s %d\n", where, indent);
    previous_indent = indent;
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
        if (debug)
          printf("-> TASK_MARKER_DEFAULT\n");
        return true;
      }
    }
    if (valid_symbols[TASK_MARKER_ACTIVE] && lexer->lookahead == '-') {
      advance(lexer);
      if (lexer->lookahead == ']') {
        advance(lexer);
        lexer->result_symbol = TASK_MARKER_ACTIVE;
        lexer->mark_end(lexer);
        if (debug)
          printf("-> TASK_MARKER_ACTIVE\n");
        return true;
      }
    }
    if (valid_symbols[TASK_MARKER_DONE] && lexer->lookahead == 'x') {
      advance(lexer);
      if (lexer->lookahead == ']') {
        advance(lexer);
        lexer->result_symbol = TASK_MARKER_DONE;
        lexer->mark_end(lexer);
        if (debug)
          printf("-> TASK_MARKER_DONE\n");
        return true;
      }
    }
    if (valid_symbols[TASK_MARKER_CANCELLED] && lexer->lookahead == '_') {
      advance(lexer);
      if (lexer->lookahead == ']') {
        advance(lexer);
        lexer->result_symbol = TASK_MARKER_CANCELLED;
        lexer->mark_end(lexer);
        if (debug)
          printf("-> TASK_MARKER_CANCELLED\n");
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
      if (debug)
        printf("-> LIST_ITEM_MARKER\n");
      return true;
    }
    return false;
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (debug)
      printf("\n\n");
    // end of file
    if (valid_symbols[END_OF_FILE] &&
        (lexer->eof(lexer) || !lexer->lookahead)) {
      lexer->result_symbol = END_OF_FILE;
      if (debug)
        printf("-> END_OF_FILE\n");
      return true;
    }

    // end of line
    if (valid_symbols[END_OF_LINE] && lexer->lookahead == '\n') {
      lexer->mark_end(lexer);
      advance(lexer);
      lexer->result_symbol = END_OF_LINE;
      if (debug)
        printf("-> END_OF_LINE\n");
      return true;
    }

    // line start
    uint32_t start_column = lexer->get_column(lexer);
    if (start_column == 0) {
      size_t indent = 0;

      lexer->mark_end(lexer);
      while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
        indent++;
        skip(lexer);
      }

      if (debug) {
        printf("indent: %d previous: %d lookahead: %c\n", indent,
               previous_indent, lexer->lookahead);
        printf("valid_symbols[INDENT]: %d valid_symbols[DEDENT]: %d\n",
               valid_symbols[INDENT], valid_symbols[DEDENT]);
      }

      // indent / dedent
      if (valid_symbols[INDENT] && indent > previous_indent) {
        set_previous_indent("INDENT", indent);
        lexer->result_symbol = INDENT;
        if (debug)
          printf("-> INDENT\n");
        return true;
      } else if (valid_symbols[DEDENT] && indent < previous_indent) {
        set_previous_indent("DEDENT", indent);
        lexer->result_symbol = DEDENT;
        if (debug)
          printf("-> DEDENT\n");
        return true;
      }
      set_previous_indent("default", indent);
    }

    // task markers
    if (scan_task_markers(lexer, valid_symbols)) {
      return true;
    }

    // list item markers
    if (scan_list_item_markers(lexer, valid_symbols)) {
      return true;
    }

    return false;
  }
};

} // namespace

extern "C" {

void *tree_sitter_syslang_external_scanner_create() { return new Scanner(); }

unsigned tree_sitter_syslang_external_scanner_serialize(void *payload,
                                                        char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_syslang_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_syslang_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

bool tree_sitter_syslang_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

void tree_sitter_syslang_external_scanner_reset(void *p) {}
}
