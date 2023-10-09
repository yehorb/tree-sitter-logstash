#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_input = 4,
  anon_sym_filter = 5,
  anon_sym_output = 6,
  sym_config = 7,
  sym_plugin_section = 8,
  sym_plugin_type = 9,
  aux_sym_config_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_input] = "input",
  [anon_sym_filter] = "filter",
  [anon_sym_output] = "output",
  [sym_config] = "config",
  [sym_plugin_section] = "plugin_section",
  [sym_plugin_type] = "plugin_type",
  [aux_sym_config_repeat1] = "config_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_output] = anon_sym_output,
  [sym_config] = sym_config,
  [sym_plugin_section] = sym_plugin_section,
  [sym_plugin_type] = sym_plugin_type,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_section] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(6),
    [sym_plugin_section] = STATE(2),
    [sym_plugin_type] = STATE(7),
    [aux_sym_config_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(5),
    [anon_sym_filter] = ACTIONS(5),
    [anon_sym_output] = ACTIONS(5),
  },
  [2] = {
    [sym_plugin_section] = STATE(3),
    [sym_plugin_type] = STATE(7),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(5),
    [anon_sym_filter] = ACTIONS(5),
    [anon_sym_output] = ACTIONS(5),
  },
  [3] = {
    [sym_plugin_section] = STATE(3),
    [sym_plugin_type] = STATE(7),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(11),
    [anon_sym_filter] = ACTIONS(11),
    [anon_sym_output] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [10] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      anon_sym_LBRACE,
  [17] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
  [24] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      anon_sym_LBRACE,
  [31] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 17,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 31,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(5),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_section, 3),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_type, 1),
  [18] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_logstash(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
