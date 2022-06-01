#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

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
  sym_source_file = 25,
  sym__expr = 26,
  sym_string_literal = 27,
  sym_unary_expression = 28,
  sym_binary_expression = 29,
  sym_sequence_expression = 30,
  sym_array_expression = 31,
  aux_sym_string_literal_repeat1 = 32,
  aux_sym_sequence_expression_repeat1 = 33,
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
  [anon_sym_EQ] = "operator",
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
  [sym_source_file] = "source_file",
  [sym__expr] = "_expr",
  [sym_string_literal] = "string_literal",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_sequence_expression] = "sequence_expression",
  [sym_array_expression] = "array_expression",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_sequence_expression_repeat1] = "sequence_expression_repeat1",
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
  [anon_sym_EQ] = anon_sym_DASH,
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
  [sym_source_file] = sym_source_file,
  [sym__expr] = sym__expr,
  [sym_string_literal] = sym_string_literal,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_sequence_expression] = sym_sequence_expression,
  [sym_array_expression] = sym_array_expression,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_sequence_expression_repeat1] = aux_sym_sequence_expression_repeat1,
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
    .named = true,
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
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_expression = 1,
  field_init = 2,
  field_left = 3,
  field_operator = 4,
  field_right = 5,
  field_size = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_init] = "init",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_size] = "size",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [5] =
    {field_init, 5},
    {field_size, 2},
    {field_type, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '|') ADVANCE(27);
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
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '|') ADVANCE(27);
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
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym__expr] = STATE(17),
    [sym_string_literal] = STATE(17),
    [sym_unary_expression] = STATE(17),
    [sym_binary_expression] = STATE(17),
    [sym_sequence_expression] = STATE(17),
    [sym_array_expression] = STATE(17),
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
    ACTIONS(13), 14,
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
  [21] = 7,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [52] = 2,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 14,
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
  [73] = 6,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [102] = 2,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 14,
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
  [123] = 5,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [150] = 4,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 10,
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
  [175] = 7,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [206] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 14,
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
  [227] = 2,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 14,
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
  [248] = 3,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 12,
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
  [271] = 2,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 14,
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
  [292] = 9,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_sequence_expression_repeat1,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [326] = 7,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [355] = 7,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(14), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [383] = 7,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [411] = 7,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [439] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(5), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [464] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(15), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [489] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(7), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [514] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(8), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [539] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(11), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [564] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(12), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [589] = 6,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 2,
      sym_nil_literal,
      sym_integer_literal,
    STATE(18), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [614] = 6,
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
    STATE(9), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [639] = 6,
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
    STATE(3), 6,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
      sym_array_expression,
  [664] = 3,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(87), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [675] = 3,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(92), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [686] = 3,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(96), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [697] = 3,
    ACTIONS(53), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_sequence_expression_repeat1,
  [707] = 3,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      aux_sym_sequence_expression_repeat1,
  [717] = 1,
    ACTIONS(103), 1,
      anon_sym_of,
  [721] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [725] = 1,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 206,
  [SMALL_STATE(11)] = 227,
  [SMALL_STATE(12)] = 248,
  [SMALL_STATE(13)] = 271,
  [SMALL_STATE(14)] = 292,
  [SMALL_STATE(15)] = 326,
  [SMALL_STATE(16)] = 355,
  [SMALL_STATE(17)] = 383,
  [SMALL_STATE(18)] = 411,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 464,
  [SMALL_STATE(21)] = 489,
  [SMALL_STATE(22)] = 514,
  [SMALL_STATE(23)] = 539,
  [SMALL_STATE(24)] = 564,
  [SMALL_STATE(25)] = 589,
  [SMALL_STATE(26)] = 614,
  [SMALL_STATE(27)] = 639,
  [SMALL_STATE(28)] = 664,
  [SMALL_STATE(29)] = 675,
  [SMALL_STATE(30)] = 686,
  [SMALL_STATE(31)] = 697,
  [SMALL_STATE(32)] = 707,
  [SMALL_STATE(33)] = 717,
  [SMALL_STATE(34)] = 721,
  [SMALL_STATE(35)] = 725,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_expression, 6, .production_id = 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(28),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2), SHIFT_REPEAT(20),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
