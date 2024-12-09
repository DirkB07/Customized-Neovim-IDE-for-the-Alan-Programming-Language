#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_source = 1,
  anon_sym_function = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_to = 5,
  anon_sym_COMMA = 6,
  anon_sym_begin = 7,
  anon_sym_end = 8,
  anon_sym_boolean = 9,
  anon_sym_integer = 10,
  anon_sym_array = 11,
  anon_sym_SEMI = 12,
  anon_sym_relax = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_COLON_EQ = 16,
  anon_sym_call = 17,
  anon_sym_if = 18,
  anon_sym_then = 19,
  anon_sym_elsif = 20,
  anon_sym_else = 21,
  anon_sym_get = 22,
  anon_sym_leave = 23,
  anon_sym_put = 24,
  anon_sym_while = 25,
  anon_sym_do = 26,
  anon_sym_DASH = 27,
  anon_sym_not = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  anon_sym_EQ = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_LT = 35,
  anon_sym_LT_GT = 36,
  anon_sym_PLUS = 37,
  anon_sym_or = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_rem = 41,
  anon_sym_and = 42,
  anon_sym_DOT = 43,
  sym_identifier = 44,
  sym_number = 45,
  sym_comment = 46,
  sym_string = 47,
  sym_source_file = 48,
  sym_funcdef = 49,
  sym_param_list = 50,
  sym_body = 51,
  sym_type = 52,
  sym_vardef = 53,
  sym_statements = 54,
  sym_statement = 55,
  sym_assign = 56,
  sym_call = 57,
  sym_if_stmt = 58,
  sym_input = 59,
  sym_leave = 60,
  sym_output = 61,
  sym_while_stmt = 62,
  sym_expression = 63,
  sym_binary_expression = 64,
  sym_unary_expression = 65,
  sym_primary_expression = 66,
  sym_expression_list = 67,
  sym_relop = 68,
  sym_addop = 69,
  sym_mulop = 70,
  sym_output_expr_list = 71,
  sym_output_expr = 72,
  aux_sym_source_file_repeat1 = 73,
  aux_sym_param_list_repeat1 = 74,
  aux_sym_body_repeat1 = 75,
  aux_sym_vardef_repeat1 = 76,
  aux_sym_statements_repeat1 = 77,
  aux_sym_if_stmt_repeat1 = 78,
  aux_sym_expression_list_repeat1 = 79,
  aux_sym_output_expr_list_repeat1 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_source] = "source",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_to] = "to",
  [anon_sym_COMMA] = ",",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_boolean] = "boolean",
  [anon_sym_integer] = "integer",
  [anon_sym_array] = "array",
  [anon_sym_SEMI] = ";",
  [anon_sym_relax] = "relax",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_call] = "call",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_elsif] = "elsif",
  [anon_sym_else] = "else",
  [anon_sym_get] = "get",
  [anon_sym_leave] = "leave",
  [anon_sym_put] = "put",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_DASH] = "-",
  [anon_sym_not] = "not",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_EQ] = "=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_PLUS] = "+",
  [anon_sym_or] = "or",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_rem] = "rem",
  [anon_sym_and] = "and",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_source_file] = "source_file",
  [sym_funcdef] = "funcdef",
  [sym_param_list] = "param_list",
  [sym_body] = "body",
  [sym_type] = "type",
  [sym_vardef] = "vardef",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_assign] = "assign",
  [sym_call] = "call",
  [sym_if_stmt] = "if_stmt",
  [sym_input] = "input",
  [sym_leave] = "leave",
  [sym_output] = "output",
  [sym_while_stmt] = "while_stmt",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_expression_list] = "expression_list",
  [sym_relop] = "relop",
  [sym_addop] = "addop",
  [sym_mulop] = "mulop",
  [sym_output_expr_list] = "output_expr_list",
  [sym_output_expr] = "output_expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_vardef_repeat1] = "vardef_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_if_stmt_repeat1] = "if_stmt_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_output_expr_list_repeat1] = "output_expr_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_source] = anon_sym_source,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_relax] = anon_sym_relax,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_elsif] = anon_sym_elsif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_leave] = anon_sym_leave,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_rem] = anon_sym_rem,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_source_file] = sym_source_file,
  [sym_funcdef] = sym_funcdef,
  [sym_param_list] = sym_param_list,
  [sym_body] = sym_body,
  [sym_type] = sym_type,
  [sym_vardef] = sym_vardef,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_assign] = sym_assign,
  [sym_call] = sym_call,
  [sym_if_stmt] = sym_if_stmt,
  [sym_input] = sym_input,
  [sym_leave] = sym_leave,
  [sym_output] = sym_output,
  [sym_while_stmt] = sym_while_stmt,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_relop] = sym_relop,
  [sym_addop] = sym_addop,
  [sym_mulop] = sym_mulop,
  [sym_output_expr_list] = sym_output_expr_list,
  [sym_output_expr] = sym_output_expr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_vardef_repeat1] = aux_sym_vardef_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_if_stmt_repeat1] = aux_sym_if_stmt_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_output_expr_list_repeat1] = aux_sym_output_expr_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
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
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relax] = {
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
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elsif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_leave] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_funcdef] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_vardef] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_leave] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_while_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_relop] = {
    .visible = true,
    .named = true,
  },
  [sym_addop] = {
    .visible = true,
    .named = true,
  },
  [sym_mulop] = {
    .visible = true,
    .named = true,
  },
  [sym_output_expr_list] = {
    .visible = true,
    .named = true,
  },
  [sym_output_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vardef_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_output_expr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_left = 1,
  field_operand = 2,
  field_operator = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operand, 1},
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
  [31] = 30,
  [32] = 32,
  [33] = 29,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
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
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 62,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 64,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 61,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 105,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
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
  [134] = 130,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      ADVANCE_MAP(
        '(', 83,
        ')', 84,
        '*', 135,
        '+', 133,
        ',', 86,
        '-', 120,
        '.', 139,
        '/', 136,
        ':', 5,
        ';', 96,
        '<', 131,
        '=', 127,
        '>', 129,
        '[', 99,
        ']', 100,
        'a', 50,
        'b', 20,
        'c', 6,
        'd', 56,
        'e', 43,
        'f', 10,
        'g', 21,
        'i', 34,
        'l', 29,
        'n', 59,
        'o', 61,
        'p', 73,
        'r', 22,
        's', 57,
        't', 39,
        'w', 38,
        '{', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '{') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '(', 83,
        '-', 120,
        ';', 96,
        'e', 165,
        'f', 145,
        'n', 175,
        't', 177,
        '{', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '(', 83,
        '-', 120,
        ';', 96,
        'e', 172,
        'f', 145,
        'n', 175,
        't', 177,
        '{', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '{') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == '{') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        'b', 173,
        'c', 140,
        'g', 147,
        'i', 158,
        'l', 155,
        'p', 186,
        'r', 156,
        'w', 162,
        '{', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        'c', 140,
        'g', 147,
        'i', 159,
        'l', 155,
        'p', 186,
        'r', 156,
        'w', 162,
        '{', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(162);
      if (lookahead == '{') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 75:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 76:
      if (lookahead == 'x') ADVANCE(97);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 78:
      if (lookahead == '{') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 79:
      if (lookahead == '}') ADVANCE(193);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_source);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_relax);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_relax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_elsif);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_elsif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_get);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_leave);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_leave);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_put);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_rem);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
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
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 2, .external_lex_state = 1},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 1, .external_lex_state = 1},
  [33] = {.lex_state = 3, .external_lex_state = 1},
  [34] = {.lex_state = 1, .external_lex_state = 1},
  [35] = {.lex_state = 4, .external_lex_state = 1},
  [36] = {.lex_state = 1, .external_lex_state = 1},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 4, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 1},
  [40] = {.lex_state = 1, .external_lex_state = 1},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 1, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 1, .external_lex_state = 1},
  [45] = {.lex_state = 1, .external_lex_state = 1},
  [46] = {.lex_state = 1, .external_lex_state = 1},
  [47] = {.lex_state = 1, .external_lex_state = 1},
  [48] = {.lex_state = 1, .external_lex_state = 1},
  [49] = {.lex_state = 1, .external_lex_state = 1},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 1, .external_lex_state = 1},
  [53] = {.lex_state = 1, .external_lex_state = 1},
  [54] = {.lex_state = 1, .external_lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 78},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 78},
  [120] = {.lex_state = 78},
  [121] = {.lex_state = 78},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 78},
  [126] = {.lex_state = 78},
  [127] = {.lex_state = 78},
  [128] = {.lex_state = 78},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 78},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_source] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_relax] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_elsif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_leave] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_rem] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(131),
    [anon_sym_source] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(7), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_then,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_do,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
      anon_sym_DOT,
  [36] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 2,
      anon_sym_GT,
      anon_sym_LT,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(11), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_then,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_do,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
      anon_sym_DOT,
  [72] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(15), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_then,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_do,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
      anon_sym_DOT,
  [103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(19), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_then,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_do,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
      anon_sym_DOT,
  [134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(23), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_then,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_do,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
      anon_sym_DOT,
  [165] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_relax,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_get,
    ACTIONS(37), 1,
      anon_sym_leave,
    ACTIONS(39), 1,
      anon_sym_put,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(94), 1,
      sym_statement,
    STATE(113), 1,
      sym_statements,
    STATE(117), 1,
      sym_type,
    ACTIONS(27), 2,
      anon_sym_boolean,
      anon_sym_integer,
    STATE(8), 2,
      sym_vardef,
      aux_sym_body_repeat1,
    STATE(79), 7,
      sym_assign,
      sym_call,
      sym_if_stmt,
      sym_input,
      sym_leave,
      sym_output,
      sym_while_stmt,
  [219] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_relax,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_get,
    ACTIONS(37), 1,
      anon_sym_leave,
    ACTIONS(39), 1,
      anon_sym_put,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(94), 1,
      sym_statement,
    STATE(117), 1,
      sym_type,
    STATE(132), 1,
      sym_statements,
    ACTIONS(27), 2,
      anon_sym_boolean,
      anon_sym_integer,
    STATE(37), 2,
      sym_vardef,
      aux_sym_body_repeat1,
    STATE(79), 7,
      sym_assign,
      sym_call,
      sym_if_stmt,
      sym_input,
      sym_leave,
      sym_output,
      sym_while_stmt,
  [273] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
    ACTIONS(45), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_DOT,
  [310] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
    ACTIONS(55), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [346] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
    ACTIONS(57), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [382] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
    ACTIONS(59), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [418] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
    ACTIONS(61), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [454] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
    ACTIONS(63), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [490] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
  [529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(23), 16,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_PLUS,
      anon_sym_or,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
      anon_sym_DOT,
  [555] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
  [589] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_then,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
  [622] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_do,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
  [655] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
  [688] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_relax,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_put,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_leave,
    STATE(64), 1,
      sym_statement,
    STATE(76), 1,
      sym_statements,
    STATE(79), 7,
      sym_assign,
      sym_call,
      sym_if_stmt,
      sym_input,
      sym_leave,
      sym_output,
      sym_while_stmt,
  [731] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
  [764] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_relax,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_get,
    ACTIONS(37), 1,
      anon_sym_leave,
    ACTIONS(39), 1,
      anon_sym_put,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(94), 1,
      sym_statement,
    STATE(115), 1,
      sym_statements,
    STATE(79), 7,
      sym_assign,
      sym_call,
      sym_if_stmt,
      sym_input,
      sym_leave,
      sym_output,
      sym_while_stmt,
  [807] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_relax,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_get,
    ACTIONS(37), 1,
      anon_sym_leave,
    ACTIONS(39), 1,
      anon_sym_put,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(94), 1,
      sym_statement,
    STATE(114), 1,
      sym_statements,
    STATE(79), 7,
      sym_assign,
      sym_call,
      sym_if_stmt,
      sym_input,
      sym_leave,
      sym_output,
      sym_while_stmt,
  [850] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_then,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
  [883] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    ACTIONS(51), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
    STATE(42), 3,
      sym_relop,
      sym_addop,
      sym_mulop,
    ACTIONS(49), 4,
      anon_sym_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_rem,
      anon_sym_and,
  [916] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_relax,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_get,
    ACTIONS(37), 1,
      anon_sym_leave,
    ACTIONS(39), 1,
      anon_sym_put,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(94), 1,
      sym_statement,
    STATE(124), 1,
      sym_statements,
    STATE(79), 7,
      sym_assign,
      sym_call,
      sym_if_stmt,
      sym_input,
      sym_leave,
      sym_output,
      sym_while_stmt,
  [959] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_relax,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_put,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_leave,
    STATE(64), 1,
      sym_statement,
    STATE(97), 1,
      sym_statements,
    STATE(79), 7,
      sym_assign,
      sym_call,
      sym_if_stmt,
      sym_input,
      sym_leave,
      sym_output,
      sym_while_stmt,
  [1002] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(87), 3,
      anon_sym_end,
      anon_sym_elsif,
      anon_sym_else,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1040] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_get,
    ACTIONS(39), 1,
      anon_sym_put,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_leave,
    STATE(70), 1,
      sym_statement,
    STATE(79), 7,
      sym_assign,
      sym_call,
      sym_if_stmt,
      sym_input,
      sym_leave,
      sym_output,
      sym_while_stmt,
  [1077] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_get,
    ACTIONS(37), 1,
      anon_sym_leave,
    ACTIONS(39), 1,
      anon_sym_put,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(70), 1,
      sym_statement,
    STATE(79), 7,
      sym_assign,
      sym_call,
      sym_if_stmt,
      sym_input,
      sym_leave,
      sym_output,
      sym_while_stmt,
  [1114] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_number,
    ACTIONS(99), 1,
      sym_string,
    STATE(9), 1,
      sym_expression,
    STATE(55), 1,
      sym_output_expr,
    STATE(77), 1,
      sym_output_expr_list,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1152] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_end,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1188] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_expression,
    STATE(112), 1,
      sym_expression_list,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1224] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    ACTIONS(103), 1,
      anon_sym_array,
    STATE(13), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1257] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    ACTIONS(97), 1,
      sym_number,
    ACTIONS(99), 1,
      sym_string,
    STATE(9), 1,
      sym_expression,
    STATE(65), 1,
      sym_output_expr,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1292] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym_type,
    ACTIONS(105), 2,
      anon_sym_boolean,
      anon_sym_integer,
    STATE(37), 2,
      sym_vardef,
      aux_sym_body_repeat1,
    ACTIONS(108), 8,
      anon_sym_relax,
      anon_sym_call,
      anon_sym_if,
      anon_sym_get,
      anon_sym_leave,
      anon_sym_put,
      anon_sym_while,
      sym_identifier,
  [1317] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    ACTIONS(110), 1,
      anon_sym_array,
    STATE(11), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(14), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1380] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(18), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1410] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(22), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1440] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(3), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1470] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(19), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1500] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(20), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1530] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(2), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1560] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(10), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1590] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(17), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1620] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(26), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1650] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(25), 1,
      sym_expression,
    ACTIONS(97), 2,
      sym_string,
      sym_number,
    ACTIONS(95), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    STATE(5), 3,
      sym_binary_expression,
      sym_unary_expression,
      sym_primary_expression,
  [1680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 10,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_relax,
      anon_sym_call,
      anon_sym_if,
      anon_sym_get,
      anon_sym_leave,
      anon_sym_put,
      anon_sym_while,
      sym_identifier,
  [1696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 10,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_relax,
      anon_sym_call,
      anon_sym_if,
      anon_sym_get,
      anon_sym_leave,
      anon_sym_put,
      anon_sym_while,
      sym_identifier,
  [1712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 4,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_number,
    ACTIONS(118), 4,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 4,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_number,
    ACTIONS(122), 4,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 4,
      sym_string,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_number,
    ACTIONS(126), 4,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_output_expr_list_repeat1,
    ACTIONS(128), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [1776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_output_expr_list_repeat1,
    ACTIONS(132), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [1792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_output_expr_list_repeat1,
    ACTIONS(137), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [1808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_function,
    ACTIONS(141), 1,
      anon_sym_begin,
    STATE(118), 1,
      sym_body,
    STATE(78), 2,
      sym_funcdef,
      aux_sym_source_file_repeat1,
  [1825] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_function,
    ACTIONS(141), 1,
      anon_sym_begin,
    STATE(122), 1,
      sym_body,
    STATE(58), 2,
      sym_funcdef,
      aux_sym_source_file_repeat1,
  [1842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [1855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      aux_sym_statements_repeat1,
    ACTIONS(147), 3,
      anon_sym_end,
      anon_sym_elsif,
      anon_sym_else,
  [1870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      aux_sym_statements_repeat1,
    ACTIONS(151), 3,
      anon_sym_end,
      anon_sym_elsif,
      anon_sym_else,
  [1885] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      sym_type,
    STATE(129), 1,
      sym_param_list,
    ACTIONS(158), 2,
      anon_sym_boolean,
      anon_sym_integer,
  [1902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      aux_sym_statements_repeat1,
    ACTIONS(160), 3,
      anon_sym_end,
      anon_sym_elsif,
      anon_sym_else,
  [1917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
      anon_sym_DOT,
  [1928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [1938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [1948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_end,
    ACTIONS(168), 1,
      anon_sym_elsif,
    ACTIONS(170), 1,
      anon_sym_else,
    STATE(74), 1,
      aux_sym_if_stmt_repeat1,
  [1964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [1974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [1994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [2004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [2014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_elsif,
    STATE(74), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(180), 2,
      anon_sym_end,
      anon_sym_else,
  [2028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [2038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_elsif,
    ACTIONS(187), 1,
      anon_sym_end,
    ACTIONS(189), 1,
      anon_sym_else,
    STATE(68), 1,
      aux_sym_if_stmt_repeat1,
  [2054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [2064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_function,
    ACTIONS(196), 1,
      anon_sym_begin,
    STATE(78), 2,
      sym_funcdef,
      aux_sym_source_file_repeat1,
  [2078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [2088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_elsif,
      anon_sym_else,
  [2098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_begin,
  [2107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_expression_list_repeat1,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      anon_sym_function,
      anon_sym_begin,
  [2129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(104), 1,
      sym_type,
    ACTIONS(209), 2,
      anon_sym_boolean,
      anon_sym_integer,
  [2140] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_end,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_statements_repeat1,
  [2153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_end,
      anon_sym_elsif,
      anon_sym_else,
  [2162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_param_list_repeat1,
  [2175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_begin,
    ACTIONS(219), 1,
      anon_sym_to,
    STATE(103), 1,
      sym_body,
  [2188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_param_list_repeat1,
  [2201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_vardef_repeat1,
  [2214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(101), 1,
      sym_type,
    ACTIONS(209), 2,
      anon_sym_boolean,
      anon_sym_integer,
  [2225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(121), 1,
      sym_type,
    ACTIONS(158), 2,
      anon_sym_boolean,
      anon_sym_integer,
  [2236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_param_list_repeat1,
  [2249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_end,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_statements_repeat1,
  [2262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_expression_list_repeat1,
  [2275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_vardef_repeat1,
  [2288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_end,
      anon_sym_elsif,
      anon_sym_else,
  [2297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_begin,
    ACTIONS(242), 1,
      anon_sym_to,
    STATE(106), 1,
      sym_body,
  [2310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_end,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_statements_repeat1,
  [2323] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_vardef_repeat1,
  [2336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_begin,
    STATE(109), 1,
      sym_body,
  [2346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      anon_sym_COLON_EQ,
  [2356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_function,
      anon_sym_begin,
  [2364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_begin,
    STATE(107), 1,
      sym_body,
  [2374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_begin,
    ACTIONS(254), 1,
      anon_sym_array,
  [2384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_function,
      anon_sym_begin,
  [2392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_function,
      anon_sym_begin,
  [2400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_function,
      anon_sym_begin,
  [2416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_array,
    ACTIONS(266), 1,
      sym_identifier,
  [2434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [2441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_end,
  [2448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_end,
  [2455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_end,
  [2462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
  [2469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_identifier,
  [2476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
  [2483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_identifier,
  [2490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_identifier,
  [2497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_identifier,
  [2504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
  [2511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COLON_EQ,
  [2518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_end,
  [2525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_identifier,
  [2532] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_identifier,
  [2539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_identifier,
  [2546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_identifier,
  [2553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
  [2560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_begin,
  [2567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
  [2574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_end,
  [2581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
  [2588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 103,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 219,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 310,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 418,
  [SMALL_STATE(14)] = 454,
  [SMALL_STATE(15)] = 490,
  [SMALL_STATE(16)] = 529,
  [SMALL_STATE(17)] = 555,
  [SMALL_STATE(18)] = 589,
  [SMALL_STATE(19)] = 622,
  [SMALL_STATE(20)] = 655,
  [SMALL_STATE(21)] = 688,
  [SMALL_STATE(22)] = 731,
  [SMALL_STATE(23)] = 764,
  [SMALL_STATE(24)] = 807,
  [SMALL_STATE(25)] = 850,
  [SMALL_STATE(26)] = 883,
  [SMALL_STATE(27)] = 916,
  [SMALL_STATE(28)] = 959,
  [SMALL_STATE(29)] = 1002,
  [SMALL_STATE(30)] = 1040,
  [SMALL_STATE(31)] = 1077,
  [SMALL_STATE(32)] = 1114,
  [SMALL_STATE(33)] = 1152,
  [SMALL_STATE(34)] = 1188,
  [SMALL_STATE(35)] = 1224,
  [SMALL_STATE(36)] = 1257,
  [SMALL_STATE(37)] = 1292,
  [SMALL_STATE(38)] = 1317,
  [SMALL_STATE(39)] = 1350,
  [SMALL_STATE(40)] = 1380,
  [SMALL_STATE(41)] = 1410,
  [SMALL_STATE(42)] = 1440,
  [SMALL_STATE(43)] = 1470,
  [SMALL_STATE(44)] = 1500,
  [SMALL_STATE(45)] = 1530,
  [SMALL_STATE(46)] = 1560,
  [SMALL_STATE(47)] = 1590,
  [SMALL_STATE(48)] = 1620,
  [SMALL_STATE(49)] = 1650,
  [SMALL_STATE(50)] = 1680,
  [SMALL_STATE(51)] = 1696,
  [SMALL_STATE(52)] = 1712,
  [SMALL_STATE(53)] = 1728,
  [SMALL_STATE(54)] = 1744,
  [SMALL_STATE(55)] = 1760,
  [SMALL_STATE(56)] = 1776,
  [SMALL_STATE(57)] = 1792,
  [SMALL_STATE(58)] = 1808,
  [SMALL_STATE(59)] = 1825,
  [SMALL_STATE(60)] = 1842,
  [SMALL_STATE(61)] = 1855,
  [SMALL_STATE(62)] = 1870,
  [SMALL_STATE(63)] = 1885,
  [SMALL_STATE(64)] = 1902,
  [SMALL_STATE(65)] = 1917,
  [SMALL_STATE(66)] = 1928,
  [SMALL_STATE(67)] = 1938,
  [SMALL_STATE(68)] = 1948,
  [SMALL_STATE(69)] = 1964,
  [SMALL_STATE(70)] = 1974,
  [SMALL_STATE(71)] = 1984,
  [SMALL_STATE(72)] = 1994,
  [SMALL_STATE(73)] = 2004,
  [SMALL_STATE(74)] = 2014,
  [SMALL_STATE(75)] = 2028,
  [SMALL_STATE(76)] = 2038,
  [SMALL_STATE(77)] = 2054,
  [SMALL_STATE(78)] = 2064,
  [SMALL_STATE(79)] = 2078,
  [SMALL_STATE(80)] = 2088,
  [SMALL_STATE(81)] = 2098,
  [SMALL_STATE(82)] = 2107,
  [SMALL_STATE(83)] = 2120,
  [SMALL_STATE(84)] = 2129,
  [SMALL_STATE(85)] = 2140,
  [SMALL_STATE(86)] = 2153,
  [SMALL_STATE(87)] = 2162,
  [SMALL_STATE(88)] = 2175,
  [SMALL_STATE(89)] = 2188,
  [SMALL_STATE(90)] = 2201,
  [SMALL_STATE(91)] = 2214,
  [SMALL_STATE(92)] = 2225,
  [SMALL_STATE(93)] = 2236,
  [SMALL_STATE(94)] = 2249,
  [SMALL_STATE(95)] = 2262,
  [SMALL_STATE(96)] = 2275,
  [SMALL_STATE(97)] = 2288,
  [SMALL_STATE(98)] = 2297,
  [SMALL_STATE(99)] = 2310,
  [SMALL_STATE(100)] = 2323,
  [SMALL_STATE(101)] = 2336,
  [SMALL_STATE(102)] = 2346,
  [SMALL_STATE(103)] = 2356,
  [SMALL_STATE(104)] = 2364,
  [SMALL_STATE(105)] = 2374,
  [SMALL_STATE(106)] = 2384,
  [SMALL_STATE(107)] = 2392,
  [SMALL_STATE(108)] = 2400,
  [SMALL_STATE(109)] = 2408,
  [SMALL_STATE(110)] = 2416,
  [SMALL_STATE(111)] = 2424,
  [SMALL_STATE(112)] = 2434,
  [SMALL_STATE(113)] = 2441,
  [SMALL_STATE(114)] = 2448,
  [SMALL_STATE(115)] = 2455,
  [SMALL_STATE(116)] = 2462,
  [SMALL_STATE(117)] = 2469,
  [SMALL_STATE(118)] = 2476,
  [SMALL_STATE(119)] = 2483,
  [SMALL_STATE(120)] = 2490,
  [SMALL_STATE(121)] = 2497,
  [SMALL_STATE(122)] = 2504,
  [SMALL_STATE(123)] = 2511,
  [SMALL_STATE(124)] = 2518,
  [SMALL_STATE(125)] = 2525,
  [SMALL_STATE(126)] = 2532,
  [SMALL_STATE(127)] = 2539,
  [SMALL_STATE(128)] = 2546,
  [SMALL_STATE(129)] = 2553,
  [SMALL_STATE(130)] = 2560,
  [SMALL_STATE(131)] = 2567,
  [SMALL_STATE(132)] = 2574,
  [SMALL_STATE(133)] = 2581,
  [SMALL_STATE(134)] = 2588,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_expr, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 7, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 6, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leave, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_leave, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leave, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vardef, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vardef, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mulop, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mulop, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relop, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relop, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addop, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addop, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_expr_list, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_expr_list_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_expr_list_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_expr_list, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 7, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 8, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 5, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 5, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 6, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_stmt, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, 0, 0),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vardef_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vardef_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 6, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 5, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 7, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcdef, 8, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_string = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_string] = sym_string,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_string] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_alan_external_scanner_create(void);
void tree_sitter_alan_external_scanner_destroy(void *);
bool tree_sitter_alan_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_alan_external_scanner_serialize(void *, char *);
void tree_sitter_alan_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_alan(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_alan_external_scanner_create,
      tree_sitter_alan_external_scanner_destroy,
      tree_sitter_alan_external_scanner_scan,
      tree_sitter_alan_external_scanner_serialize,
      tree_sitter_alan_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
