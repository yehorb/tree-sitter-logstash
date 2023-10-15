#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_input = 3,
  anon_sym_filter = 4,
  anon_sym_output = 5,
  aux_sym_name_token1 = 6,
  anon_sym_EQ_GT = 7,
  sym_bareword = 8,
  sym_double_quoted_string = 9,
  sym_single_quoted_string = 10,
  sym_regexp = 11,
  sym_number = 12,
  anon_sym_LBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACK = 15,
  anon_sym_if = 16,
  anon_sym_else = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_BANG = 20,
  anon_sym_in = 21,
  anon_sym_not = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_EQ_TILDE = 29,
  anon_sym_BANG_TILDE = 30,
  anon_sym_and = 31,
  anon_sym_or = 32,
  anon_sym_xor = 33,
  anon_sym_nand = 34,
  aux_sym_selector_element_token1 = 35,
  sym_comment = 36,
  sym_config = 37,
  sym_plugin_section = 38,
  sym_branch_or_plugin = 39,
  sym_plugin_type = 40,
  sym_plugin = 41,
  sym_name = 42,
  sym_attribute = 43,
  sym_value = 44,
  sym_array_value = 45,
  sym_string = 46,
  sym_array = 47,
  sym_hash = 48,
  sym_hashentry = 49,
  sym_branch = 50,
  sym_if = 51,
  sym_else_if = 52,
  sym_else = 53,
  sym_condition = 54,
  sym_expression = 55,
  sym_negative_expression = 56,
  sym_in_expression = 57,
  sym_not_in_expression = 58,
  sym_in_operator = 59,
  sym_not_in_operator = 60,
  sym_rvalue = 61,
  sym_method_call = 62,
  sym_method = 63,
  sym_compare_expression = 64,
  sym_compare_operator = 65,
  sym_regexp_expression = 66,
  sym_regexp_operator = 67,
  sym_boolean_operator = 68,
  sym_selector = 69,
  sym_selector_element = 70,
  aux_sym_config_repeat1 = 71,
  aux_sym_plugin_section_repeat1 = 72,
  aux_sym_plugin_repeat1 = 73,
  aux_sym_array_repeat1 = 74,
  aux_sym_hash_repeat1 = 75,
  aux_sym_branch_repeat1 = 76,
  aux_sym_condition_repeat1 = 77,
  aux_sym_method_call_repeat1 = 78,
  aux_sym_selector_repeat1 = 79,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_input] = "input",
  [anon_sym_filter] = "filter",
  [anon_sym_output] = "output",
  [aux_sym_name_token1] = "name_token1",
  [anon_sym_EQ_GT] = "=>",
  [sym_bareword] = "bareword",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_regexp] = "regexp",
  [sym_number] = "number",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_in] = "in",
  [anon_sym_not] = "not ",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_nand] = "nand",
  [aux_sym_selector_element_token1] = "selector_element_token1",
  [sym_comment] = "comment",
  [sym_config] = "config",
  [sym_plugin_section] = "plugin_section",
  [sym_branch_or_plugin] = "branch_or_plugin",
  [sym_plugin_type] = "plugin_type",
  [sym_plugin] = "plugin",
  [sym_name] = "name",
  [sym_attribute] = "attribute",
  [sym_value] = "value",
  [sym_array_value] = "array_value",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_hash] = "hash",
  [sym_hashentry] = "hashentry",
  [sym_branch] = "branch",
  [sym_if] = "if",
  [sym_else_if] = "else_if",
  [sym_else] = "else",
  [sym_condition] = "condition",
  [sym_expression] = "expression",
  [sym_negative_expression] = "negative_expression",
  [sym_in_expression] = "in_expression",
  [sym_not_in_expression] = "not_in_expression",
  [sym_in_operator] = "in_operator",
  [sym_not_in_operator] = "not_in_operator",
  [sym_rvalue] = "rvalue",
  [sym_method_call] = "method_call",
  [sym_method] = "method",
  [sym_compare_expression] = "compare_expression",
  [sym_compare_operator] = "compare_operator",
  [sym_regexp_expression] = "regexp_expression",
  [sym_regexp_operator] = "regexp_operator",
  [sym_boolean_operator] = "boolean_operator",
  [sym_selector] = "selector",
  [sym_selector_element] = "selector_element",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_plugin_section_repeat1] = "plugin_section_repeat1",
  [aux_sym_plugin_repeat1] = "plugin_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_hash_repeat1] = "hash_repeat1",
  [aux_sym_branch_repeat1] = "branch_repeat1",
  [aux_sym_condition_repeat1] = "condition_repeat1",
  [aux_sym_method_call_repeat1] = "method_call_repeat1",
  [aux_sym_selector_repeat1] = "selector_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_output] = anon_sym_output,
  [aux_sym_name_token1] = aux_sym_name_token1,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_bareword] = sym_bareword,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_regexp] = sym_regexp,
  [sym_number] = sym_number,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_nand] = anon_sym_nand,
  [aux_sym_selector_element_token1] = aux_sym_selector_element_token1,
  [sym_comment] = sym_comment,
  [sym_config] = sym_config,
  [sym_plugin_section] = sym_plugin_section,
  [sym_branch_or_plugin] = sym_branch_or_plugin,
  [sym_plugin_type] = sym_plugin_type,
  [sym_plugin] = sym_plugin,
  [sym_name] = sym_name,
  [sym_attribute] = sym_attribute,
  [sym_value] = sym_value,
  [sym_array_value] = sym_array_value,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_hash] = sym_hash,
  [sym_hashentry] = sym_hashentry,
  [sym_branch] = sym_branch,
  [sym_if] = sym_if,
  [sym_else_if] = sym_else_if,
  [sym_else] = sym_else,
  [sym_condition] = sym_condition,
  [sym_expression] = sym_expression,
  [sym_negative_expression] = sym_negative_expression,
  [sym_in_expression] = sym_in_expression,
  [sym_not_in_expression] = sym_not_in_expression,
  [sym_in_operator] = sym_in_operator,
  [sym_not_in_operator] = sym_not_in_operator,
  [sym_rvalue] = sym_rvalue,
  [sym_method_call] = sym_method_call,
  [sym_method] = sym_method,
  [sym_compare_expression] = sym_compare_expression,
  [sym_compare_operator] = sym_compare_operator,
  [sym_regexp_expression] = sym_regexp_expression,
  [sym_regexp_operator] = sym_regexp_operator,
  [sym_boolean_operator] = sym_boolean_operator,
  [sym_selector] = sym_selector,
  [sym_selector_element] = sym_selector_element,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_plugin_section_repeat1] = aux_sym_plugin_section_repeat1,
  [aux_sym_plugin_repeat1] = aux_sym_plugin_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_hash_repeat1] = aux_sym_hash_repeat1,
  [aux_sym_branch_repeat1] = aux_sym_branch_repeat1,
  [aux_sym_condition_repeat1] = aux_sym_condition_repeat1,
  [aux_sym_method_call_repeat1] = aux_sym_method_call_repeat1,
  [aux_sym_selector_repeat1] = aux_sym_selector_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nand] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_selector_element_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
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
  [sym_branch_or_plugin] = {
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
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_array_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_hashentry] = {
    .visible = true,
    .named = true,
  },
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_in_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_not_in_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_in_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_not_in_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_rvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_compare_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_compare_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_element] = {
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
  [aux_sym_plugin_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hash_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_branch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_method_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selector_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_attributes = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attributes] = "attributes",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_attributes, 2},
  [1] =
    {field_name, 0},
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 36,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 49,
  [53] = 49,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 57,
  [58] = 58,
  [59] = 55,
  [60] = 54,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 10,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 11,
  [81] = 81,
  [82] = 65,
  [83] = 83,
  [84] = 10,
  [85] = 85,
  [86] = 14,
  [87] = 83,
  [88] = 88,
  [89] = 89,
  [90] = 13,
  [91] = 91,
  [92] = 72,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 11,
  [98] = 13,
  [99] = 99,
  [100] = 81,
  [101] = 83,
  [102] = 102,
  [103] = 14,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 108,
  [110] = 108,
  [111] = 111,
  [112] = 112,
  [113] = 105,
  [114] = 114,
  [115] = 105,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 128,
  [138] = 128,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(30);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(30);
      if (lookahead == '{') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == ',') ADVANCE(82);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == '}') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == '}') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '{') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '~') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(94);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '~') ADVANCE(100);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48)
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_bareword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_double_quoted_string);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_double_quoted_string);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_single_quoted_string);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_single_quoted_string);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_regexp);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_regexp);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '~') ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_nand);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == ',' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(116);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '{') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (lookahead == '#') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_selector_element_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 48},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 48},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_double_quoted_string] = ACTIONS(1),
    [sym_single_quoted_string] = ACTIONS(1),
    [sym_regexp] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_nand] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(136),
    [sym_plugin_section] = STATE(58),
    [sym_plugin_type] = STATE(135),
    [aux_sym_config_repeat1] = STATE(58),
    [anon_sym_input] = ACTIONS(5),
    [anon_sym_filter] = ACTIONS(5),
    [anon_sym_output] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(9), 1,
      sym_rvalue,
    STATE(48), 1,
      sym_expression,
    STATE(129), 1,
      sym_method,
    STATE(132), 1,
      sym_condition,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
    STATE(66), 5,
      sym_negative_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_compare_expression,
      sym_regexp_expression,
  [53] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(9), 1,
      sym_rvalue,
    STATE(48), 1,
      sym_expression,
    STATE(126), 1,
      sym_condition,
    STATE(129), 1,
      sym_method,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
    STATE(66), 5,
      sym_negative_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_compare_expression,
      sym_regexp_expression,
  [106] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(9), 1,
      sym_rvalue,
    STATE(48), 1,
      sym_expression,
    STATE(129), 1,
      sym_method,
    STATE(133), 1,
      sym_condition,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
    STATE(66), 5,
      sym_negative_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_compare_expression,
      sym_regexp_expression,
  [159] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(9), 1,
      sym_rvalue,
    STATE(48), 1,
      sym_expression,
    STATE(129), 1,
      sym_method,
    STATE(131), 1,
      sym_condition,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
    STATE(66), 5,
      sym_negative_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_compare_expression,
      sym_regexp_expression,
  [212] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(9), 1,
      sym_rvalue,
    STATE(73), 1,
      sym_expression,
    STATE(129), 1,
      sym_method,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
    STATE(66), 5,
      sym_negative_expression,
      sym_in_expression,
      sym_not_in_expression,
      sym_compare_expression,
      sym_regexp_expression,
  [262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(24), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(7), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    ACTIONS(19), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [294] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(30), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(7), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    ACTIONS(26), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [326] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_in,
    ACTIONS(36), 1,
      anon_sym_not,
    STATE(21), 1,
      sym_in_operator,
    STATE(22), 1,
      sym_not_in_operator,
    STATE(23), 1,
      sym_compare_operator,
    STATE(99), 1,
      sym_regexp_operator,
    ACTIONS(40), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(42), 2,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(38), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(32), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(44), 17,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 16,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(56), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(60), 16,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(68), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(72), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(76), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [601] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym_rvalue,
    STATE(129), 1,
      sym_method,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
  [638] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(116), 1,
      sym_rvalue,
    STATE(129), 1,
      sym_method,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
  [672] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_rvalue,
    STATE(129), 1,
      sym_method,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
  [706] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_rvalue,
    STATE(129), 1,
      sym_method,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
  [740] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_bareword,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_rvalue,
    STATE(129), 1,
      sym_method,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(11), 2,
      sym_regexp,
      sym_number,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
    STATE(16), 4,
      sym_string,
      sym_array,
      sym_method_call,
      sym_selector,
  [774] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    STATE(72), 1,
      sym_string,
    STATE(89), 1,
      sym_value,
    STATE(138), 1,
      sym_name,
    ACTIONS(86), 2,
      sym_bareword,
      sym_number,
    ACTIONS(88), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(81), 3,
      sym_plugin,
      sym_array,
      sym_hash,
  [809] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_string,
    STATE(96), 1,
      sym_value,
    STATE(137), 1,
      sym_name,
    ACTIONS(94), 2,
      sym_bareword,
      sym_number,
    ACTIONS(96), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(100), 3,
      sym_plugin,
      sym_array,
      sym_hash,
  [844] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      anon_sym_if,
    STATE(41), 1,
      sym_if,
    STATE(117), 1,
      sym_string,
    STATE(128), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(30), 2,
      sym_branch_or_plugin,
      aux_sym_plugin_section_repeat1,
    STATE(95), 2,
      sym_plugin,
      sym_branch,
  [878] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_if,
    STATE(117), 1,
      sym_string,
    STATE(128), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(30), 2,
      sym_branch_or_plugin,
      aux_sym_plugin_section_repeat1,
    STATE(95), 2,
      sym_plugin,
      sym_branch,
  [912] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_if,
    STATE(117), 1,
      sym_string,
    STATE(128), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(26), 2,
      sym_branch_or_plugin,
      aux_sym_plugin_section_repeat1,
    STATE(95), 2,
      sym_plugin,
      sym_branch,
  [946] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_if,
    STATE(117), 1,
      sym_string,
    STATE(128), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(32), 2,
      sym_branch_or_plugin,
      aux_sym_plugin_section_repeat1,
    STATE(95), 2,
      sym_plugin,
      sym_branch,
  [980] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      aux_sym_name_token1,
    ACTIONS(118), 1,
      anon_sym_if,
    STATE(41), 1,
      sym_if,
    STATE(117), 1,
      sym_string,
    STATE(128), 1,
      sym_name,
    ACTIONS(115), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(30), 2,
      sym_branch_or_plugin,
      aux_sym_plugin_section_repeat1,
    STATE(95), 2,
      sym_plugin,
      sym_branch,
  [1014] = 9,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    ACTIONS(131), 1,
      aux_sym_selector_element_token1,
    ACTIONS(133), 1,
      sym_comment,
    STATE(110), 1,
      sym_array_value,
    ACTIONS(123), 2,
      sym_bareword,
      sym_number,
    ACTIONS(125), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(119), 3,
      sym_string,
      sym_array,
      sym_hash,
  [1046] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_if,
    STATE(117), 1,
      sym_string,
    STATE(128), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(30), 2,
      sym_branch_or_plugin,
      aux_sym_plugin_section_repeat1,
    STATE(95), 2,
      sym_plugin,
      sym_branch,
  [1080] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_if,
    STATE(117), 1,
      sym_string,
    STATE(128), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(30), 2,
      sym_branch_or_plugin,
      aux_sym_plugin_section_repeat1,
    STATE(95), 2,
      sym_plugin,
      sym_branch,
  [1114] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_if,
    STATE(117), 1,
      sym_string,
    STATE(128), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(33), 2,
      sym_branch_or_plugin,
      aux_sym_plugin_section_repeat1,
    STATE(95), 2,
      sym_plugin,
      sym_branch,
  [1148] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_name_token1,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_if,
    STATE(117), 1,
      sym_string,
    STATE(128), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(27), 2,
      sym_branch_or_plugin,
      aux_sym_plugin_section_repeat1,
    STATE(95), 2,
      sym_plugin,
      sym_branch,
  [1182] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_array_value,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(143), 2,
      sym_bareword,
      sym_number,
    STATE(119), 3,
      sym_string,
      sym_array,
      sym_hash,
  [1211] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      sym_array_value,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(143), 2,
      sym_bareword,
      sym_number,
    STATE(119), 3,
      sym_string,
      sym_array,
      sym_hash,
  [1240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_array_value,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(143), 2,
      sym_bareword,
      sym_number,
    STATE(119), 3,
      sym_string,
      sym_array,
      sym_hash,
  [1269] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(120), 1,
      sym_array_value,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(143), 2,
      sym_bareword,
      sym_number,
    STATE(119), 3,
      sym_string,
      sym_array,
      sym_hash,
  [1295] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_else,
    STATE(88), 1,
      sym_else,
    ACTIONS(155), 2,
      aux_sym_name_token1,
      anon_sym_if,
    STATE(47), 2,
      sym_else_if,
      aux_sym_branch_repeat1,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_else,
    STATE(94), 1,
      sym_else,
    ACTIONS(161), 2,
      aux_sym_name_token1,
      anon_sym_if,
    STATE(40), 2,
      sym_else_if,
      aux_sym_branch_repeat1,
    ACTIONS(159), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1341] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      aux_sym_name_token1,
    STATE(117), 1,
      sym_string,
    STATE(125), 1,
      sym_name,
    ACTIONS(168), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(42), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [1365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_boolean_operator,
    STATE(43), 1,
      aux_sym_condition_repeat1,
    ACTIONS(171), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
    ACTIONS(173), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym_string,
    ACTIONS(178), 2,
      sym_bareword,
      sym_number,
    ACTIONS(181), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(44), 2,
      sym_hashentry,
      aux_sym_hash_repeat1,
  [1407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 8,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_regexp,
      sym_number,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_BANG,
  [1421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_boolean_operator,
    STATE(43), 1,
      aux_sym_condition_repeat1,
    ACTIONS(186), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
    ACTIONS(188), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1441] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_else,
    ACTIONS(192), 2,
      aux_sym_name_token1,
      anon_sym_if,
    STATE(47), 2,
      sym_else_if,
      aux_sym_branch_repeat1,
    ACTIONS(190), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [1461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_boolean_operator,
    STATE(46), 1,
      aux_sym_condition_repeat1,
    ACTIONS(197), 2,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
    ACTIONS(188), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1481] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      aux_sym_name_token1,
    STATE(117), 1,
      sym_string,
    STATE(125), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(42), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [1505] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(205), 2,
      sym_bareword,
      sym_number,
    STATE(44), 2,
      sym_hashentry,
      aux_sym_hash_repeat1,
  [1527] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(205), 2,
      sym_bareword,
      sym_number,
    STATE(44), 2,
      sym_hashentry,
      aux_sym_hash_repeat1,
  [1549] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_name_token1,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_string,
    STATE(125), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(42), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [1573] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_name_token1,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_string,
    STATE(125), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(42), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [1597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(124), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(205), 2,
      sym_bareword,
      sym_number,
    STATE(51), 2,
      sym_hashentry,
      aux_sym_hash_repeat1,
  [1616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_name_token1,
    STATE(117), 1,
      sym_string,
    STATE(125), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(52), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [1637] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_name_token1,
    STATE(117), 1,
      sym_string,
    STATE(125), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(53), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [1658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_plugin_type,
    STATE(57), 2,
      sym_plugin_section,
      aux_sym_config_repeat1,
    ACTIONS(215), 3,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [1677] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_plugin_type,
    STATE(57), 2,
      sym_plugin_section,
      aux_sym_config_repeat1,
    ACTIONS(5), 3,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [1696] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym_name_token1,
    STATE(117), 1,
      sym_string,
    STATE(125), 1,
      sym_name,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(49), 2,
      sym_attribute,
      aux_sym_plugin_repeat1,
  [1717] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(124), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(205), 2,
      sym_bareword,
      sym_number,
    STATE(50), 2,
      sym_hashentry,
      aux_sym_hash_repeat1,
  [1736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 6,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_regexp,
      sym_number,
      anon_sym_LBRACK,
  [1784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 6,
      anon_sym_RBRACE,
      aux_sym_name_token1,
      sym_double_quoted_string,
      sym_single_quoted_string,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(232), 3,
      aux_sym_name_token1,
      anon_sym_if,
      anon_sym_else,
  [1822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(236), 3,
      aux_sym_name_token1,
      anon_sym_if,
      anon_sym_else,
  [1836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_number,
  [1860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(242), 3,
      aux_sym_name_token1,
      anon_sym_if,
      anon_sym_else,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 5,
      anon_sym_RBRACE,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_number,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 6,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_regexp,
      sym_number,
      anon_sym_LBRACK,
  [1912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 6,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_regexp,
      sym_number,
      anon_sym_LBRACK,
  [1924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(258), 3,
      aux_sym_name_token1,
      anon_sym_if,
      anon_sym_else,
  [1962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_nand,
  [1974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 5,
      anon_sym_RBRACE,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_number,
  [1985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 5,
      anon_sym_RBRACE,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_number,
  [1996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_RBRACE,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_number,
  [2007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      aux_sym_name_token1,
      anon_sym_if,
    ACTIONS(262), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      aux_sym_name_token1,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      aux_sym_name_token1,
      anon_sym_if,
    ACTIONS(266), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 5,
      anon_sym_RBRACE,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_number,
  [2055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
      anon_sym_RBRACE,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_number,
  [2066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      aux_sym_name_token1,
      anon_sym_if,
    ACTIONS(270), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 5,
      anon_sym_RBRACE,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_number,
  [2090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 5,
      anon_sym_RBRACE,
      sym_bareword,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_number,
  [2101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      aux_sym_name_token1,
      anon_sym_if,
    ACTIONS(276), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 4,
      anon_sym_RBRACE,
      aux_sym_name_token1,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_selector,
    STATE(8), 2,
      sym_selector_element,
      aux_sym_selector_repeat1,
  [2144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      aux_sym_name_token1,
      anon_sym_if,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      aux_sym_name_token1,
      anon_sym_if,
    ACTIONS(282), 3,
      anon_sym_RBRACE,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_RBRACE,
      aux_sym_name_token1,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 4,
      anon_sym_RBRACE,
      aux_sym_name_token1,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 4,
      anon_sym_RBRACE,
      aux_sym_name_token1,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_regexp,
    STATE(79), 1,
      sym_string,
    ACTIONS(9), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 4,
      anon_sym_RBRACE,
      aux_sym_name_token1,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      anon_sym_RBRACE,
      aux_sym_name_token1,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [2244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 4,
      anon_sym_RBRACE,
      aux_sym_name_token1,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [2264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_array_repeat1,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      sym_double_quoted_string,
      sym_single_quoted_string,
      sym_regexp,
  [2286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_method_call_repeat1,
  [2299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_array_repeat1,
  [2312] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_array_repeat1,
  [2325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_array_repeat1,
  [2338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_array_repeat1,
  [2351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_method_call_repeat1,
  [2364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_array_repeat1,
  [2377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_method_call_repeat1,
  [2390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_array_repeat1,
  [2403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
  [2419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      anon_sym_if,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
  [2452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
  [2459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_in,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_EQ_GT,
  [2473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_EQ_GT,
  [2480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [2487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
  [2494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
  [2508] = 2,
    ACTIONS(131), 1,
      aux_sym_selector_element_token1,
    ACTIONS(133), 1,
      sym_comment,
  [2515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [2522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
  [2529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
  [2536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_if,
  [2543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
  [2550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
  [2557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 53,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 326,
  [SMALL_STATE(10)] = 370,
  [SMALL_STATE(11)] = 397,
  [SMALL_STATE(12)] = 423,
  [SMALL_STATE(13)] = 449,
  [SMALL_STATE(14)] = 475,
  [SMALL_STATE(15)] = 501,
  [SMALL_STATE(16)] = 526,
  [SMALL_STATE(17)] = 551,
  [SMALL_STATE(18)] = 576,
  [SMALL_STATE(19)] = 601,
  [SMALL_STATE(20)] = 638,
  [SMALL_STATE(21)] = 672,
  [SMALL_STATE(22)] = 706,
  [SMALL_STATE(23)] = 740,
  [SMALL_STATE(24)] = 774,
  [SMALL_STATE(25)] = 809,
  [SMALL_STATE(26)] = 844,
  [SMALL_STATE(27)] = 878,
  [SMALL_STATE(28)] = 912,
  [SMALL_STATE(29)] = 946,
  [SMALL_STATE(30)] = 980,
  [SMALL_STATE(31)] = 1014,
  [SMALL_STATE(32)] = 1046,
  [SMALL_STATE(33)] = 1080,
  [SMALL_STATE(34)] = 1114,
  [SMALL_STATE(35)] = 1148,
  [SMALL_STATE(36)] = 1182,
  [SMALL_STATE(37)] = 1211,
  [SMALL_STATE(38)] = 1240,
  [SMALL_STATE(39)] = 1269,
  [SMALL_STATE(40)] = 1295,
  [SMALL_STATE(41)] = 1318,
  [SMALL_STATE(42)] = 1341,
  [SMALL_STATE(43)] = 1365,
  [SMALL_STATE(44)] = 1385,
  [SMALL_STATE(45)] = 1407,
  [SMALL_STATE(46)] = 1421,
  [SMALL_STATE(47)] = 1441,
  [SMALL_STATE(48)] = 1461,
  [SMALL_STATE(49)] = 1481,
  [SMALL_STATE(50)] = 1505,
  [SMALL_STATE(51)] = 1527,
  [SMALL_STATE(52)] = 1549,
  [SMALL_STATE(53)] = 1573,
  [SMALL_STATE(54)] = 1597,
  [SMALL_STATE(55)] = 1616,
  [SMALL_STATE(56)] = 1637,
  [SMALL_STATE(57)] = 1658,
  [SMALL_STATE(58)] = 1677,
  [SMALL_STATE(59)] = 1696,
  [SMALL_STATE(60)] = 1717,
  [SMALL_STATE(61)] = 1736,
  [SMALL_STATE(62)] = 1748,
  [SMALL_STATE(63)] = 1760,
  [SMALL_STATE(64)] = 1772,
  [SMALL_STATE(65)] = 1784,
  [SMALL_STATE(66)] = 1796,
  [SMALL_STATE(67)] = 1808,
  [SMALL_STATE(68)] = 1822,
  [SMALL_STATE(69)] = 1836,
  [SMALL_STATE(70)] = 1848,
  [SMALL_STATE(71)] = 1860,
  [SMALL_STATE(72)] = 1874,
  [SMALL_STATE(73)] = 1888,
  [SMALL_STATE(74)] = 1900,
  [SMALL_STATE(75)] = 1912,
  [SMALL_STATE(76)] = 1924,
  [SMALL_STATE(77)] = 1936,
  [SMALL_STATE(78)] = 1948,
  [SMALL_STATE(79)] = 1962,
  [SMALL_STATE(80)] = 1974,
  [SMALL_STATE(81)] = 1985,
  [SMALL_STATE(82)] = 1996,
  [SMALL_STATE(83)] = 2007,
  [SMALL_STATE(84)] = 2020,
  [SMALL_STATE(85)] = 2031,
  [SMALL_STATE(86)] = 2044,
  [SMALL_STATE(87)] = 2055,
  [SMALL_STATE(88)] = 2066,
  [SMALL_STATE(89)] = 2079,
  [SMALL_STATE(90)] = 2090,
  [SMALL_STATE(91)] = 2101,
  [SMALL_STATE(92)] = 2114,
  [SMALL_STATE(93)] = 2127,
  [SMALL_STATE(94)] = 2144,
  [SMALL_STATE(95)] = 2157,
  [SMALL_STATE(96)] = 2170,
  [SMALL_STATE(97)] = 2180,
  [SMALL_STATE(98)] = 2190,
  [SMALL_STATE(99)] = 2200,
  [SMALL_STATE(100)] = 2214,
  [SMALL_STATE(101)] = 2224,
  [SMALL_STATE(102)] = 2234,
  [SMALL_STATE(103)] = 2244,
  [SMALL_STATE(104)] = 2254,
  [SMALL_STATE(105)] = 2264,
  [SMALL_STATE(106)] = 2277,
  [SMALL_STATE(107)] = 2286,
  [SMALL_STATE(108)] = 2299,
  [SMALL_STATE(109)] = 2312,
  [SMALL_STATE(110)] = 2325,
  [SMALL_STATE(111)] = 2338,
  [SMALL_STATE(112)] = 2351,
  [SMALL_STATE(113)] = 2364,
  [SMALL_STATE(114)] = 2377,
  [SMALL_STATE(115)] = 2390,
  [SMALL_STATE(116)] = 2403,
  [SMALL_STATE(117)] = 2411,
  [SMALL_STATE(118)] = 2419,
  [SMALL_STATE(119)] = 2429,
  [SMALL_STATE(120)] = 2437,
  [SMALL_STATE(121)] = 2445,
  [SMALL_STATE(122)] = 2452,
  [SMALL_STATE(123)] = 2459,
  [SMALL_STATE(124)] = 2466,
  [SMALL_STATE(125)] = 2473,
  [SMALL_STATE(126)] = 2480,
  [SMALL_STATE(127)] = 2487,
  [SMALL_STATE(128)] = 2494,
  [SMALL_STATE(129)] = 2501,
  [SMALL_STATE(130)] = 2508,
  [SMALL_STATE(131)] = 2515,
  [SMALL_STATE(132)] = 2522,
  [SMALL_STATE(133)] = 2529,
  [SMALL_STATE(134)] = 2536,
  [SMALL_STATE(135)] = 2543,
  [SMALL_STATE(136)] = 2550,
  [SMALL_STATE(137)] = 2557,
  [SMALL_STATE(138)] = 2564,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selector_repeat1, 2), SHIFT_REPEAT(130),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_selector_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_element, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_element, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rvalue, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rvalue, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 5),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 5),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plugin_section_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_plugin_section_repeat1, 2), SHIFT_REPEAT(117),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plugin_section_repeat1, 2), SHIFT_REPEAT(10),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_plugin_section_repeat1, 2), SHIFT_REPEAT(4),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plugin_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plugin_repeat1, 2), SHIFT_REPEAT(117),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plugin_repeat1, 2), SHIFT_REPEAT(10),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2), SHIFT_REPEAT(45),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(124),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hash_repeat1, 2), SHIFT_REPEAT(10),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operator, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_branch_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_branch_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_branch_repeat1, 2), SHIFT_REPEAT(134),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(122),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_expression, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_expression, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare_operator, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if, 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_expression, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_operator, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in_operator, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_expression, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not_in_expression, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regexp_expression, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 4, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashentry, 3, .production_id = 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 4),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_or_plugin, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_or_plugin, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_section, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_section, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regexp_operator, 1),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_method_call_repeat1, 2), SHIFT_REPEAT(20),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_method_call_repeat1, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(39),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_value, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_type, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
