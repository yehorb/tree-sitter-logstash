#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 1
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
  aux_sym_name_token1 = 7,
  anon_sym_EQ_GT = 8,
  sym_bareword = 9,
  sym__name_marker = 10,
  sym_config = 11,
  sym_plugin_section = 12,
  sym_plugin_type = 13,
  sym_plugin = 14,
  sym_name = 15,
  sym_attribute = 16,
  sym__value = 17,
  aux_sym_config_repeat1 = 18,
  aux_sym_plugin_section_repeat1 = 19,
  aux_sym_plugin_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_input] = "input",
  [anon_sym_filter] = "filter",
  [anon_sym_output] = "output",
  [aux_sym_name_token1] = "name_token1",
  [anon_sym_EQ_GT] = "=>",
  [sym_bareword] = "bareword",
  [sym__name_marker] = "_name_marker",
  [sym_config] = "config",
  [sym_plugin_section] = "plugin_section",
  [sym_plugin_type] = "plugin_type",
  [sym_plugin] = "plugin",
  [sym_name] = "name",
  [sym_attribute] = "attribute",
  [sym__value] = "_value",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_plugin_section_repeat1] = "plugin_section_repeat1",
  [aux_sym_plugin_repeat1] = "plugin_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_output] = anon_sym_output,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_bareword] = sym_bareword,
  [sym__name_marker] = sym__name_marker,
  [sym_config] = sym_config,
  [sym_plugin_section] = sym_plugin_section,
  [sym_plugin_type] = sym_plugin_type,
  [sym_plugin] = sym_plugin,
  [sym_name] = sym_name,
  [sym_attribute] = sym_attribute,
  [sym__value] = sym__value,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_plugin_section_repeat1] = aux_sym_plugin_section_repeat1,
  [aux_sym_plugin_repeat1] = aux_sym_plugin_repeat1,
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
  [aux_sym_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_bareword] = {
    .visible = true,
    .named = true,
  },
  [sym__name_marker] = {
    .visible = false,
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
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
  [aux_sym_plugin_repeat1] = {
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '=') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '}') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_filter);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 't') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 't') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 't') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
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
    [aux_sym_name_token1] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_bareword] = ACTIONS(1),
    [sym__name_marker] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(17),
    [sym_plugin_section] = STATE(3),
    [sym_plugin_type] = STATE(18),
    [aux_sym_config_repeat1] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(5),
    [anon_sym_filter] = ACTIONS(5),
    [anon_sym_output] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_plugin_type,
    STATE(2), 2,
      sym_plugin_section,
      aux_sym_config_repeat1,
    ACTIONS(9), 3,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [19] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(12), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_plugin_type,
    STATE(2), 2,
      sym_plugin_section,
      aux_sym_config_repeat1,
    ACTIONS(5), 3,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [38] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(14), 1,
      anon_sym_RBRACE,
    ACTIONS(16), 1,
      aux_sym_name_token1,
    STATE(20), 1,
      sym_name,
    STATE(4), 2,
      sym_plugin,
      aux_sym_plugin_section_repeat1,
  [55] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      aux_sym_name_token1,
    STATE(20), 1,
      sym_name,
    STATE(6), 2,
      sym_plugin,
      aux_sym_plugin_section_repeat1,
  [72] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_name_token1,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_name,
    STATE(4), 2,
      sym_plugin,
      aux_sym_plugin_section_repeat1,
  [89] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_name_token1,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_name,
    STATE(8), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_name_token1,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      sym_name,
    STATE(10), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      aux_sym_name_token1,
    ACTIONS(29), 1,
      sym_bareword,
    STATE(20), 1,
      sym_name,
    STATE(16), 2,
      sym_plugin,
      sym__value,
  [140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      aux_sym_name_token1,
    STATE(22), 1,
      sym_name,
    STATE(10), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 2,
      anon_sym_RBRACE,
      aux_sym_name_token1,
  [193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_RBRACE,
      aux_sym_name_token1,
  [201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      anon_sym_RBRACE,
      aux_sym_name_token1,
  [209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
  [223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym__name_marker,
  [230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
  [244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 157,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 177,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 193,
  [SMALL_STATE(16)] = 201,
  [SMALL_STATE(17)] = 209,
  [SMALL_STATE(18)] = 216,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 230,
  [SMALL_STATE(21)] = 237,
  [SMALL_STATE(22)] = 244,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(21),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plugin_section_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plugin_section_repeat1, 2), SHIFT_REPEAT(19),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plugin_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plugin_repeat1, 2), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_section, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_section, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_type, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__name_marker = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__name_marker] = sym__name_marker,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__name_marker] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_logstash_external_scanner_create(void);
void tree_sitter_logstash_external_scanner_destroy(void *);
bool tree_sitter_logstash_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_logstash_external_scanner_serialize(void *, char *);
void tree_sitter_logstash_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_logstash_external_scanner_create,
      tree_sitter_logstash_external_scanner_destroy,
      tree_sitter_logstash_external_scanner_scan,
      tree_sitter_logstash_external_scanner_serialize,
      tree_sitter_logstash_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
