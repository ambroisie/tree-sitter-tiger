#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_nil = 1,
  sym_integer_literal = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_string_literal_token1 = 4,
  sym_escape_sequence = 5,
  anon_sym_DASH = 6,
  anon_sym_STAR = 7,
  anon_sym_SLASH = 8,
  anon_sym_PLUS = 9,
  anon_sym_GT_EQ = 10,
  anon_sym_LT_EQ = 11,
  anon_sym_EQ = 12,
  anon_sym_LT_GT = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_AMP = 16,
  anon_sym_PIPE = 17,
  anon_sym_LPAREN = 18,
  anon_sym_SEMI = 19,
  anon_sym_RPAREN = 20,
  sym_source_file = 21,
  sym__expr = 22,
  sym_string_literal = 23,
  sym_unary_expression = 24,
  sym_binary_expression = 25,
  sym_sequence_expression = 26,
  aux_sym_string_literal_repeat1 = 27,
  aux_sym_sequence_expression_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_nil] = "nil",
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
  [sym_source_file] = "source_file",
  [sym__expr] = "_expr",
  [sym_string_literal] = "string_literal",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_sequence_expression] = "sequence_expression",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_sequence_expression_repeat1] = "sequence_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_nil] = anon_sym_nil,
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
  [sym_source_file] = sym_source_file,
  [sym__expr] = sym__expr,
  [sym_string_literal] = sym_string_literal,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_sequence_expression] = sym_sequence_expression,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_sequence_expression_repeat1] = aux_sym_sequence_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
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
  field_left = 2,
  field_operator = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(5);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym__expr] = STATE(15),
    [sym_string_literal] = STATE(15),
    [sym_unary_expression] = STATE(15),
    [sym_binary_expression] = STATE(15),
    [sym_sequence_expression] = STATE(15),
    [anon_sym_nil] = ACTIONS(3),
    [sym_integer_literal] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_LT_GT] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(33),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(37),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_AMP] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
  },
  [9] = {
    [aux_sym_sequence_expression_repeat1] = STATE(27),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_LT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(43),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_AMP] = ACTIONS(11),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(45),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_GT_EQ] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(45),
    [anon_sym_EQ] = ACTIONS(45),
    [anon_sym_LT_GT] = ACTIONS(45),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_RPAREN] = ACTIONS(45),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_DASH] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(49),
    [anon_sym_SLASH] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_EQ] = ACTIONS(49),
    [anon_sym_LT_GT] = ACTIONS(49),
    [anon_sym_LT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(13), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [29] = 7,
    ACTIONS(27), 1,
      anon_sym_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 4,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
  [57] = 6,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 2,
      anon_sym_nil,
      sym_integer_literal,
    STATE(9), 5,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
  [81] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 2,
      anon_sym_nil,
      sym_integer_literal,
    STATE(10), 5,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
  [102] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 2,
      anon_sym_nil,
      sym_integer_literal,
    STATE(14), 5,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
  [123] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 2,
      anon_sym_nil,
      sym_integer_literal,
    STATE(4), 5,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
  [144] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 2,
      anon_sym_nil,
      sym_integer_literal,
    STATE(6), 5,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
  [165] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 2,
      anon_sym_nil,
      sym_integer_literal,
    STATE(11), 5,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
  [186] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 2,
      anon_sym_nil,
      sym_integer_literal,
    STATE(2), 5,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
  [207] = 5,
    ACTIONS(5), 1,
      anon_sym_DQUOTE,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 2,
      anon_sym_nil,
      sym_integer_literal,
    STATE(7), 5,
      sym__expr,
      sym_string_literal,
      sym_unary_expression,
      sym_binary_expression,
      sym_sequence_expression,
  [228] = 3,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(77), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [239] = 3,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(82), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [250] = 3,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(86), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [261] = 3,
    ACTIONS(41), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_sequence_expression_repeat1,
  [271] = 3,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      aux_sym_sequence_expression_repeat1,
  [281] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 29,
  [SMALL_STATE(16)] = 57,
  [SMALL_STATE(17)] = 81,
  [SMALL_STATE(18)] = 102,
  [SMALL_STATE(19)] = 123,
  [SMALL_STATE(20)] = 144,
  [SMALL_STATE(21)] = 165,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 207,
  [SMALL_STATE(24)] = 228,
  [SMALL_STATE(25)] = 239,
  [SMALL_STATE(26)] = 250,
  [SMALL_STATE(27)] = 261,
  [SMALL_STATE(28)] = 271,
  [SMALL_STATE(29)] = 281,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sequence_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(24),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_expression_repeat1, 2), SHIFT_REPEAT(18),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
