#include <tree_sitter/parser.h>

enum TokenType {
  NAME_MARKER,
};

void *tree_sitter_logstash_external_scanner_create() { return NULL; }
void tree_sitter_logstash_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_logstash_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_logstash_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_logstash_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  lexer->result_symbol = NAME_MARKER;

  lexer->mark_end(lexer);

  for (;;) {
      if (lexer->lookahead == '{') return true;
      if (lexer->lookahead == '=') return true;
      if (!iswspace(lexer->lookahead)) return false;
      lexer->advance(lexer, true);
  }

  return false;
}
