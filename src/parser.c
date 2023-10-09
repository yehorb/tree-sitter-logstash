#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_input = 4,
  anon_sym_filter = 5,
  anon_sym_output = 6,
  sym_name = 7,
  sym_config = 8,
  sym_plugin_section = 9,
  sym_plugin_type = 10,
  sym_plugin = 11,
  aux_sym_config_repeat1 = 12,
  aux_sym_plugin_section_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_input] = "input",
  [anon_sym_filter] = "filter",
  [anon_sym_output] = "output",
  [sym_name] = "name",
  [sym_config] = "config",
  [sym_plugin_section] = "plugin_section",
  [sym_plugin_type] = "plugin_type",
  [sym_plugin] = "plugin",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_plugin_section_repeat1] = "plugin_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_output] = anon_sym_output,
  [sym_name] = sym_name,
  [sym_config] = sym_config,
  [sym_plugin_section] = sym_plugin_section,
  [sym_plugin_type] = sym_plugin_type,
  [sym_plugin] = sym_plugin,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_plugin_section_repeat1] = aux_sym_plugin_section_repeat1,
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
  [sym_name] = {
    .visible = true,
    .named = true,
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
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plugin_section_repeat1] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == '{') ADVANCE(19);
      if (lookahead == '}') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '}') ADVANCE(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
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
    [sym_name] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(11),
    [sym_plugin_section] = STATE(2),
    [sym_plugin_type] = STATE(12),
    [aux_sym_config_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(5),
    [anon_sym_filter] = ACTIONS(5),
    [anon_sym_output] = ACTIONS(5),
  },
  [2] = {
    [sym_plugin_section] = STATE(3),
    [sym_plugin_type] = STATE(12),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(5),
    [anon_sym_filter] = ACTIONS(5),
    [anon_sym_output] = ACTIONS(5),
  },
  [3] = {
    [sym_plugin_section] = STATE(3),
    [sym_plugin_type] = STATE(12),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(11),
    [anon_sym_filter] = ACTIONS(11),
    [anon_sym_output] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      anon_sym_RBRACE,
    ACTIONS(16), 1,
      sym_name,
    STATE(6), 2,
      sym_plugin,
      aux_sym_plugin_section_repeat1,
  [14] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [24] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(16), 1,
      sym_name,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    STATE(8), 2,
      sym_plugin,
      aux_sym_plugin_section_repeat1,
  [38] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [48] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      sym_name,
    STATE(8), 2,
      sym_plugin,
      aux_sym_plugin_section_repeat1,
  [62] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_RBRACE,
      sym_name,
  [70] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
  [77] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [84] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
  [91] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
  [98] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 38,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 62,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 77,
  [SMALL_STATE(12)] = 84,
  [SMALL_STATE(13)] = 91,
  [SMALL_STATE(14)] = 98,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_section, 3),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_section, 4),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plugin_section_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plugin_section_repeat1, 2), SHIFT_REPEAT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_type, 1),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
