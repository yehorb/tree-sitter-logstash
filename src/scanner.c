#include <tree_sitter/parser.h>

enum TokenType {
  NAME_START,
};

void *tree_sitter_logstash_external_scanner_create() { return NULL; }
void tree_sitter_logstash_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_logstash_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_logstash_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

void skip(TSLexer *lexer) {
  lexer->advance(lexer, true);
}

bool tree_sitter_logstash_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  (void)payload;

  lexer->result_symbol = NAME_START;

  lexer->mark_end(lexer);

  bool found = false;

  printf("%s", "-----\n");

  printf("%s", "skipping whitespace\n");
  while (iswspace(lexer->lookahead)) {
    printf("%s", "•\n");
    skip(lexer);
    if (lexer->eof(lexer)) { found = false; goto end; }
  }

  printf("%s", "skipping chars\n");
  while (!iswspace(lexer->lookahead)) {
    printf("%c\n", lexer->lookahead);
    skip(lexer);
    if (lexer->eof(lexer)) { found = false; goto end; }
  }

  printf("%s", "looking for terminal char\n");
  for (;;) {
      if (lexer->lookahead == '{') { found = true; goto end; }
      if (lexer->lookahead == '=') { found = true; goto end; }
      if (!iswspace(lexer->lookahead)) { found = false; goto end; }
      printf("%c\n", lexer->lookahead);
      skip(lexer);
      if (lexer->eof(lexer)) { found = false; goto end; }
  }

end:
  printf("found = %d\n", found);
  printf("%s", "-----\n\n");

  return found;
}
