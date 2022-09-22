#include <cwctype>
#include <string>
#include <tree_sitter/parser.h>
#include <vector>

namespace {

using std::string;
using std::vector;

enum TokenType {
  EOF_TOKEN,
};

struct Scanner {
  bool has_leading_whitespace;

  Scanner() : has_leading_whitespace(false) {}

  void reset() {}

  enum ScanContentResult { Error, End };

  unsigned serialize(char *buffer) {
    unsigned i = 0;

    return i;
  }

  void deserialize(const char *buffer, unsigned length) {
    has_leading_whitespace = false;

    if (length == 0) {
      return;
    }
  }

  void skip(TSLexer *lexer) {
    has_leading_whitespace = true;
    lexer->advance(lexer, true);
  }

  void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

  bool lookahead_is_line_end(TSLexer *lexer) {
    if (lexer->lookahead == '\n') {
      return true;
    } else if (lexer->lookahead == '\r') {
      skip(lexer);
      if (lexer->lookahead == '\n') {
        return true;
      }
    }

    return false;
  }

  bool scan_whitespace(TSLexer *lexer) {
    for (;;) {
      while (iswspace(lexer->lookahead)) {
        advance(lexer);
      }

      if (lexer->lookahead == '/') {
        advance(lexer);

        if (lexer->lookahead == '/') {
          advance(lexer);
          while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
            advance(lexer);
          }
        } else {
          return false;
        }
      } else {
        return true;
      }
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    has_leading_whitespace = false;

    lexer->mark_end(lexer);

    if (!scan_whitespace(lexer)) {
      return false;
    }

    if (valid_symbols[EOF_TOKEN] && lexer->eof(lexer)) {
      lexer->result_symbol = EOF_TOKEN;
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
