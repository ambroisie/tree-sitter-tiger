#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

enum {
  sym_identifier = 1,
  sym_nil_literal = 2,
  sym_integer_literal = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_string_literal_token1 = 5,
  sym_escape_sequence = 6,
  anon_sym_DASH = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  anon_sym_PLUS = 10,
  anon_sym_GT_EQ = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_EQ = 13,
  anon_sym_LT_GT = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_AMP = 17,
  anon_sym_PIPE = 18,
  anon_sym_LPAREN = 19,
  anon_sym_SEMI = 20,
  anon_sym_RPAREN = 21,
  anon_sym_LBRACK = 22,
  anon_sym_RBRACK = 23,
  anon_sym_of = 24,
  anon_sym_LBRACE = 25,
  anon_sym_COMMA = 26,
  anon_sym_RBRACE = 27,
  sym_source_file = 28,
  sym__expr = 29,
  sym_string_literal = 30,
  sym_unary_expression = 31,
  sym_binary_expression = 32,
  sym_sequence_expression = 33,
  sym_array_expression = 34,
  sym_record_expression = 35,
  aux_sym_string_literal_repeat1 = 36,
  aux_sym_sequence_expression_repeat1 = 37,
  aux_sym_record_expression_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_nil_literal] = "nil_literal",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DASH] = "operator",
  [anon_sym_STAR] = "operator",
  [anon_sym_SLASH] = "operator",
  [anon_sym_PLUS] = "operator",
  [anon_sym_GT_EQ] = "operator",
  [anon_sym_LT_EQ] = "operator",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "operator",
  [anon_sym_LT] = "operator",
  [anon_sym_GT] = "operator",
  [anon_sym_AMP] = "operator",
  [anon_sym_PIPE] = "operator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_SEMI] = ";",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_of] = "of",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__expr] = "_expr",
  [sym_string_literal] = "string_literal",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_sequence_expression] = "sequence_expression",
  [sym_array_expression] = "array_expression",
  [sym_record_expression] = "record_expression",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_sequence_expression_repeat1] = "sequence_expression_repeat1",
  [aux_sym_record_expression_repeat1] = "record_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_nil_literal] = sym_nil_literal,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_DASH,
  [anon_sym_GT_EQ] = anon_sym_DASH,
  [anon_sym_LT_EQ] = anon_sym_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_DASH,
  [anon_sym_LT] = anon_sym_DASH,
  [anon_sym_GT] = anon_sym_DASH,
  [anon_sym_AMP] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__expr] = sym__expr,
  [sym_string_literal] = sym_string_literal,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_sequence_expression] = sym_sequence_expression,
  [sym_array_expression] = sym_array_expression,
  [sym_record_expression] = sym_record_expression,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_sequence_expression_repeat1] = aux_sym_sequence_expression_repeat1,
  [aux_sym_record_expression_repeat1] = aux_sym_record_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_record_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_expression = 1,
  field_field = 2,
  field_init = 3,
  field_left = 4,
  field_operator = 5,
  field_right = 6,
  field_size = 7,
  field_type = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_field] = "field",
  [field_init] = "init",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_size] = "size",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 5},
  [7] = {.index = 17, .length = 4},
  [8] = {.index = 21, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 1},
    {field_operator, 0},
  [2] =
    {field_type, 0},
  [3] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [6] =
    {field_init, 5},
    {field_size, 2},
    {field_type, 0},
  [9] =
    {field_field, 2},
    {field_init, 4},
    {field_type, 0},
  [12] =
    {field_field, 2},
    {field_field, 5, .inherited = true},
    {field_init, 4},
    {field_init, 5, .inherited = true},
    {field_type, 0},
  [17] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
    {field_init, 0, .inherited = true},
    {field_init, 1, .inherited = true},
  [21] =
    {field_field, 1},
    {field_init, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [1] = anon_sym_DASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(4);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '&') ADVANCE(26);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'n') ADVANCE(1);
      if (lookahead == 'o') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_nil_literal);
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_nil_literal] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__expr] = STATE(30),
    [sym_string_literal] = STATE(30),
    [sym_unary_expression] = STATE(30),
    [sym_binary_expression] = STATE(30),
    [sym_sequence_expression] = STATE(30),
    [sym_array_expression] = STATE(30),
    [sym_record_expression] = STATE(30),
    [sym_identifier] = ACTIONS(3),
    [sym_nil_literal] = ACTIONS(5),
    [sym_integer_literal] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [23] = 2,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [46] = 2,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [69] = 2,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [92] = 7,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [125] = 2,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [148] = 2,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [171] = 6,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [202] = 5,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [231] = 4,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 12,
      ts_builtin_sym_end,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [258] = 7,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [291] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [314] = 2,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [337] = 3,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 14,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [362] = 2,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [385] = 9,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      aux_sym_sequence_expression_repeat1,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [419] = 9,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_record_expression_repeat1,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [453] = 7,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [482] = 7,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [511] = 7,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(17), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [540] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(15), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [566] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(10), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [592] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(9), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [618] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(11), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [644] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(12), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [670] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(20), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [696] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(14), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [722] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(19), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [748] = 7,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [776] = 7,
    ACTIONS(39), 1,
      anon_sym_AMP,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [804] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(31), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [830] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(6), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [856] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(18), 7,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
      sym_record_expression,
  [882] = 3,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(109), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [893] = 3,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(113), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [904] = 3,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(117), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [915] = 3,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      aux_sym_sequence_expression_repeat1,
  [925] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_record_expression_repeat1,
  [935] = 3,
    ACTIONS(65), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_sequence_expression_repeat1,
  [945] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      aux_sym_record_expression_repeat1,
  [955] = 2,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
  [962] = 2,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
  [969] = 1,
    ACTIONS(140), 1,
      anon_sym_EQ,
  [973] = 1,
    ACTIONS(142), 1,
      anon_sym_of,
  [977] = 1,
    ACTIONS(144), 1,
      sym_identifier,
  [981] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
  [985] = 1,
    ACTIONS(148), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 202,
  [SMALL_STATE(11)] = 231,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 291,
  [SMALL_STATE(14)] = 314,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 362,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 419,
  [SMALL_STATE(19)] = 453,
  [SMALL_STATE(20)] = 482,
  [SMALL_STATE(21)] = 511,
  [SMALL_STATE(22)] = 540,
  [SMALL_STATE(23)] = 566,
  [SMALL_STATE(24)] = 592,
  [SMALL_STATE(25)] = 618,
  [SMALL_STATE(26)] = 644,
  [SMALL_STATE(27)] = 670,
  [SMALL_STATE(28)] = 696,
  [SMALL_STATE(29)] = 722,
  [SMALL_STATE(30)] = 748,
  [SMALL_STATE(31)] = 776,
  [SMALL_STATE(32)] = 804,
  [SMALL_STATE(33)] = 830,
  [SMALL_STATE(34)] = 856,
  [SMALL_STATE(35)] = 882,
  [SMALL_STATE(36)] = 893,
  [SMALL_STATE(37)] = 904,
  [SMALL_STATE(38)] = 915,
  [SMALL_STATE(39)] = 925,
  [SMALL_STATE(40)] = 935,
  [SMALL_STATE(41)] = 945,
  [SMALL_STATE(42)] = 955,
  [SMALL_STATE(43)] = 962,
  [SMALL_STATE(44)] = 969,
  [SMALL_STATE(45)] = 973,
  [SMALL_STATE(46)] = 977,
  [SMALL_STATE(47)] = 981,
  [SMALL_STATE(48)] = 985,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_expression, 3, .production_id = 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_expression, 3, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_expression, 7, .production_id = 6),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_expression, 7, .production_id = 6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_expression, 6, .production_id = 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_expression, 6, .production_id = 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 6, .production_id = 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_expression_repeat1, 4, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(37),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2), SHIFT_REPEAT(29),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_expression_repeat1, 2, .production_id = 7), SHIFT_REPEAT(46),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_expression_repeat1, 2, .production_id = 7),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tiger(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
