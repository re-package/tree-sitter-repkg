#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_EQ = 1,
  anon_sym_import = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_PERCENT = 5,
  sym__identifier_without_ver = 6,
  anon_sym_AT = 7,
  sym_text = 8,
  sym_number = 9,
  aux_sym_string_token1 = 10,
  aux_sym_string_token2 = 11,
  sym_wildcard = 12,
  anon_sym_LF = 13,
  anon_sym_CR = 14,
  anon_sym_LF_CR = 15,
  anon_sym_ = 16,
  sym__left_square_bracket = 17,
  sym__right_square_bracket = 18,
  sym__left_curly_brace = 19,
  sym__right_curly_brace = 20,
  sym__comma = 21,
  sym__dot = 22,
  sym__single_quotation_mark = 23,
  sym__double_quotation_mark = 24,
  sym_comment = 25,
  sym_source_file = 26,
  sym__body = 27,
  sym_body = 28,
  sym__expr = 29,
  sym_variable_def = 30,
  sym_import_expr = 31,
  sym_namespace = 32,
  sym_command = 33,
  sym__path = 34,
  sym_identifier = 35,
  sym_nested_identifier = 36,
  sym_variable = 37,
  sym_identifier_without_ver = 38,
  sym__identifier_with_ver = 39,
  sym__primitive = 40,
  sym_string = 41,
  sym_array = 42,
  sym__newline = 43,
  aux_sym__body_repeat1 = 44,
  aux_sym_command_repeat1 = 45,
  aux_sym_string_repeat1 = 46,
  aux_sym_string_repeat2 = 47,
  aux_sym_array_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_import] = "import",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PERCENT] = "%",
  [sym__identifier_without_ver] = "_identifier_without_ver",
  [anon_sym_AT] = "@",
  [sym_text] = "text",
  [sym_number] = "number",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_wildcard] = "wildcard",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_LF_CR] = "\n\r",
  [anon_sym_] = " ",
  [sym__left_square_bracket] = "_left_square_bracket",
  [sym__right_square_bracket] = "_right_square_bracket",
  [sym__left_curly_brace] = "_left_curly_brace",
  [sym__right_curly_brace] = "_right_curly_brace",
  [sym__comma] = "_comma",
  [sym__dot] = "_dot",
  [sym__single_quotation_mark] = "_single_quotation_mark",
  [sym__double_quotation_mark] = "_double_quotation_mark",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__body] = "_body",
  [sym_body] = "body",
  [sym__expr] = "_expr",
  [sym_variable_def] = "variable_def",
  [sym_import_expr] = "import_expr",
  [sym_namespace] = "namespace",
  [sym_command] = "command",
  [sym__path] = "_path",
  [sym_identifier] = "identifier",
  [sym_nested_identifier] = "nested_identifier",
  [sym_variable] = "variable",
  [sym_identifier_without_ver] = "identifier_without_ver",
  [sym__identifier_with_ver] = "_identifier_with_ver",
  [sym__primitive] = "_primitive",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym__newline] = "_newline",
  [aux_sym__body_repeat1] = "_body_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym__identifier_without_ver] = sym__identifier_without_ver,
  [anon_sym_AT] = anon_sym_AT,
  [sym_text] = sym_text,
  [sym_number] = sym_number,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_wildcard] = sym_wildcard,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF_CR] = anon_sym_LF_CR,
  [anon_sym_] = anon_sym_,
  [sym__left_square_bracket] = sym__left_square_bracket,
  [sym__right_square_bracket] = sym__right_square_bracket,
  [sym__left_curly_brace] = sym__left_curly_brace,
  [sym__right_curly_brace] = sym__right_curly_brace,
  [sym__comma] = sym__comma,
  [sym__dot] = sym__dot,
  [sym__single_quotation_mark] = sym__single_quotation_mark,
  [sym__double_quotation_mark] = sym__double_quotation_mark,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__body] = sym__body,
  [sym_body] = sym_body,
  [sym__expr] = sym__expr,
  [sym_variable_def] = sym_variable_def,
  [sym_import_expr] = sym_import_expr,
  [sym_namespace] = sym_namespace,
  [sym_command] = sym_command,
  [sym__path] = sym__path,
  [sym_identifier] = sym_identifier,
  [sym_nested_identifier] = sym_nested_identifier,
  [sym_variable] = sym_variable,
  [sym_identifier_without_ver] = sym_identifier_without_ver,
  [sym__identifier_with_ver] = sym__identifier_with_ver,
  [sym__primitive] = sym__primitive,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym__newline] = sym__newline,
  [aux_sym__body_repeat1] = aux_sym__body_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier_without_ver] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__left_square_bracket] = {
    .visible = false,
    .named = true,
  },
  [sym__right_square_bracket] = {
    .visible = false,
    .named = true,
  },
  [sym__left_curly_brace] = {
    .visible = false,
    .named = true,
  },
  [sym__right_curly_brace] = {
    .visible = false,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym__single_quotation_mark] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quotation_mark] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__body] = {
    .visible = false,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_def] = {
    .visible = true,
    .named = true,
  },
  [sym_import_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_without_ver] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_with_ver] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive] = {
    .visible = false,
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
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_body = 2,
  field_id = 3,
  field_name = 4,
  field_path = 5,
  field_program = 6,
  field_val = 7,
  field_var = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
  [field_id] = "id",
  [field_name] = "name",
  [field_path] = "path",
  [field_program] = "program",
  [field_val] = "val",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_program, 0},
  [1] =
    {field_args, 1},
    {field_program, 0},
  [3] =
    {field_var, 1},
  [4] =
    {field_name, 2},
    {field_path, 0},
  [6] =
    {field_id, 0},
    {field_val, 2},
  [8] =
    {field_body, 2},
    {field_id, 0},
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
  [19] = 13,
  [20] = 20,
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 9,
  [25] = 25,
  [26] = 10,
  [27] = 27,
  [28] = 17,
  [29] = 18,
  [30] = 18,
  [31] = 27,
  [32] = 20,
  [33] = 15,
  [34] = 13,
  [35] = 13,
  [36] = 20,
  [37] = 37,
  [38] = 15,
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
  [49] = 23,
  [50] = 50,
  [51] = 25,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 55,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 68,
  [69] = 69,
  [70] = 63,
  [71] = 65,
  [72] = 65,
  [73] = 73,
};

static inline bool anon_sym__character_set_1(int32_t c) {
  return (c < 8192
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < 5760
        ? c == 160
        : c <= 5760)))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static inline bool anon_sym__character_set_2(int32_t c) {
  return (c < 8192
    ? (c < 160
      ? (c < ' '
        ? c == '\t'
        : c <= ' ')
      : (c <= 160 || c == 5760))
    : (c <= 8203 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8288)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (anon_sym__character_set_1(lookahead)) SKIP(0)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '/') ADVANCE(13);
      if (anon_sym__character_set_2(lookahead)) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '/') ADVANCE(47);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(48);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(37);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(38);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(39);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (anon_sym__character_set_1(lookahead)) SKIP(11)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '/') ADVANCE(50);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(51);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(15);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(15);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(47);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(50);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(32);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(33);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(34);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(32);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(33);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(34);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__left_square_bracket);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__right_square_bracket);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__left_curly_brace);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__left_curly_brace);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__right_curly_brace);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__dot);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__single_quotation_mark);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__double_quotation_mark);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
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
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym__identifier_without_ver] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_wildcard] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__left_square_bracket] = ACTIONS(1),
    [sym__right_square_bracket] = ACTIONS(1),
    [sym__left_curly_brace] = ACTIONS(1),
    [sym__right_curly_brace] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym__single_quotation_mark] = ACTIONS(1),
    [sym__double_quotation_mark] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(69),
    [sym__body] = STATE(73),
    [sym__expr] = STATE(3),
    [sym_variable_def] = STATE(3),
    [sym_import_expr] = STATE(3),
    [sym_namespace] = STATE(3),
    [sym_command] = STATE(42),
    [sym__path] = STATE(9),
    [sym_identifier] = STATE(14),
    [sym_nested_identifier] = STATE(9),
    [sym_identifier_without_ver] = STATE(66),
    [sym__identifier_with_ver] = STATE(15),
    [anon_sym_import] = ACTIONS(5),
    [sym__identifier_without_ver] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(14), 1,
      sym__identifier_without_ver,
    STATE(14), 1,
      sym_identifier,
    STATE(15), 1,
      sym__identifier_with_ver,
    STATE(42), 1,
      sym_command,
    STATE(66), 1,
      sym_identifier_without_ver,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    STATE(9), 2,
      sym__path,
      sym_nested_identifier,
    STATE(2), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [37] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_identifier,
    STATE(15), 1,
      sym__identifier_with_ver,
    STATE(42), 1,
      sym_command,
    STATE(66), 1,
      sym_identifier_without_ver,
    STATE(9), 2,
      sym__path,
      sym_nested_identifier,
    STATE(6), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [73] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(19), 1,
      sym__right_curly_brace,
    STATE(14), 1,
      sym_identifier,
    STATE(15), 1,
      sym__identifier_with_ver,
    STATE(42), 1,
      sym_command,
    STATE(66), 1,
      sym_identifier_without_ver,
    STATE(9), 2,
      sym__path,
      sym_nested_identifier,
    STATE(2), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [109] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(21), 1,
      sym__right_curly_brace,
    STATE(14), 1,
      sym_identifier,
    STATE(15), 1,
      sym__identifier_with_ver,
    STATE(42), 1,
      sym_command,
    STATE(66), 1,
      sym_identifier_without_ver,
    STATE(9), 2,
      sym__path,
      sym_nested_identifier,
    STATE(4), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [145] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_identifier,
    STATE(15), 1,
      sym__identifier_with_ver,
    STATE(42), 1,
      sym_command,
    STATE(66), 1,
      sym_identifier_without_ver,
    STATE(9), 2,
      sym__path,
      sym_nested_identifier,
    STATE(2), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [181] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    STATE(14), 1,
      sym_identifier,
    STATE(15), 1,
      sym__identifier_with_ver,
    STATE(42), 1,
      sym_command,
    STATE(66), 1,
      sym_identifier_without_ver,
    STATE(68), 1,
      sym_body,
    STATE(9), 2,
      sym__path,
      sym_nested_identifier,
    STATE(5), 4,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
  [216] = 4,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(27), 9,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_curly_brace,
      sym__dot,
  [237] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_PERCENT,
    ACTIONS(37), 1,
      sym_text,
    ACTIONS(41), 1,
      sym__dot,
    STATE(10), 2,
      sym_variable,
      aux_sym_command_repeat1,
    ACTIONS(39), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [263] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_PERCENT,
    ACTIONS(43), 1,
      sym_text,
    STATE(17), 2,
      sym_variable,
      aux_sym_command_repeat1,
    ACTIONS(45), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [286] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_number,
    ACTIONS(50), 1,
      sym__left_square_bracket,
    ACTIONS(53), 1,
      sym__right_square_bracket,
    ACTIONS(55), 1,
      sym__single_quotation_mark,
    ACTIONS(58), 1,
      sym__double_quotation_mark,
    STATE(11), 1,
      aux_sym_array_repeat1,
    STATE(64), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [313] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(63), 1,
      sym__left_square_bracket,
    ACTIONS(65), 1,
      sym__right_square_bracket,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    STATE(11), 1,
      aux_sym_array_repeat1,
    STATE(64), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [340] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(71), 9,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_curly_brace,
      sym__dot,
  [355] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym__left_curly_brace,
    ACTIONS(73), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [372] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(27), 9,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_curly_brace,
      sym__dot,
  [387] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(63), 1,
      sym__left_square_bracket,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    ACTIONS(77), 1,
      sym__right_square_bracket,
    STATE(12), 1,
      aux_sym_array_repeat1,
    STATE(64), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [414] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_PERCENT,
    ACTIONS(85), 1,
      sym_text,
    STATE(17), 2,
      sym_variable,
      aux_sym_command_repeat1,
    ACTIONS(88), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [437] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_AT,
    ACTIONS(27), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [454] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(71), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [468] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(92), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [482] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(27), 8,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__dot,
  [496] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym__left_square_bracket,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    ACTIONS(94), 1,
      sym_number,
    STATE(46), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [517] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(96), 7,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [530] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_PERCENT,
    ACTIONS(102), 1,
      sym_text,
    ACTIONS(104), 1,
      sym__dot,
    STATE(26), 2,
      sym_variable,
      aux_sym_command_repeat1,
  [553] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(106), 7,
      anon_sym_LPAREN,
      anon_sym_PERCENT,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [566] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(100), 1,
      anon_sym_PERCENT,
    ACTIONS(108), 1,
      sym_text,
    STATE(28), 2,
      sym_variable,
      aux_sym_command_repeat1,
  [586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__identifier_without_ver,
    STATE(33), 1,
      sym__identifier_with_ver,
    STATE(63), 1,
      sym_command,
    STATE(24), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [604] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_PERCENT,
    ACTIONS(118), 1,
      sym_text,
    STATE(28), 2,
      sym_variable,
      aux_sym_command_repeat1,
  [624] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_AT,
    ACTIONS(27), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
      sym__dot,
  [638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_AT,
    ACTIONS(27), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [654] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__identifier_without_ver,
    STATE(33), 1,
      sym__identifier_with_ver,
    STATE(70), 1,
      sym_command,
    STATE(24), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [685] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(27), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
      sym__dot,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [709] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(71), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
      sym__dot,
  [720] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(92), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
      sym__dot,
  [731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym__dot,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(133), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym__identifier_without_ver,
    STATE(38), 1,
      sym__identifier_with_ver,
    STATE(37), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [800] = 3,
    ACTIONS(31), 1,
      sym_comment,
    STATE(50), 1,
      sym__newline,
    ACTIONS(147), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 5,
      sym_number,
      sym__left_square_bracket,
      sym__right_square_bracket,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
  [837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(159), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(163), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(167), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [886] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(96), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
  [896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(171), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [908] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(106), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PERCENT,
      sym_text,
  [918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym__identifier_without_ver,
    ACTIONS(173), 1,
      sym_wildcard,
    STATE(32), 1,
      sym_identifier,
    STATE(38), 1,
      sym__identifier_with_ver,
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 3,
      anon_sym_PERCENT,
      sym__identifier_without_ver,
      sym_number,
  [943] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym_string_token1,
    ACTIONS(179), 1,
      sym__double_quotation_mark,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__identifier_without_ver,
    STATE(33), 1,
      sym__identifier_with_ver,
    STATE(36), 1,
      sym_identifier,
  [969] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_string_token2,
    ACTIONS(184), 1,
      sym__single_quotation_mark,
    STATE(56), 1,
      aux_sym_string_repeat2,
  [982] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym_string_token1,
    ACTIONS(189), 1,
      sym__double_quotation_mark,
    STATE(57), 1,
      aux_sym_string_repeat1,
  [995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_PERCENT,
      sym__identifier_without_ver,
      sym_number,
  [1004] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(193), 1,
      aux_sym_string_token1,
    ACTIONS(195), 1,
      sym__double_quotation_mark,
    STATE(54), 1,
      aux_sym_string_repeat1,
  [1017] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__single_quotation_mark,
    ACTIONS(197), 1,
      aux_sym_string_token2,
    STATE(61), 1,
      aux_sym_string_repeat2,
  [1030] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym__single_quotation_mark,
    ACTIONS(199), 1,
      aux_sym_string_token2,
    STATE(56), 1,
      aux_sym_string_repeat2,
  [1043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__identifier_without_ver,
    STATE(20), 1,
      sym_identifier,
    STATE(21), 1,
      sym__identifier_with_ver,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [1063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__comma,
  [1070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__identifier_without_ver,
  [1077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_EQ,
  [1084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__identifier_without_ver,
  [1091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym__right_curly_brace,
  [1098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [1105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
  [1112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__identifier_without_ver,
  [1119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__identifier_without_ver,
  [1126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 263,
  [SMALL_STATE(11)] = 286,
  [SMALL_STATE(12)] = 313,
  [SMALL_STATE(13)] = 340,
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 372,
  [SMALL_STATE(16)] = 387,
  [SMALL_STATE(17)] = 414,
  [SMALL_STATE(18)] = 437,
  [SMALL_STATE(19)] = 454,
  [SMALL_STATE(20)] = 468,
  [SMALL_STATE(21)] = 482,
  [SMALL_STATE(22)] = 496,
  [SMALL_STATE(23)] = 517,
  [SMALL_STATE(24)] = 530,
  [SMALL_STATE(25)] = 553,
  [SMALL_STATE(26)] = 566,
  [SMALL_STATE(27)] = 586,
  [SMALL_STATE(28)] = 604,
  [SMALL_STATE(29)] = 624,
  [SMALL_STATE(30)] = 638,
  [SMALL_STATE(31)] = 654,
  [SMALL_STATE(32)] = 672,
  [SMALL_STATE(33)] = 685,
  [SMALL_STATE(34)] = 696,
  [SMALL_STATE(35)] = 709,
  [SMALL_STATE(36)] = 720,
  [SMALL_STATE(37)] = 731,
  [SMALL_STATE(38)] = 746,
  [SMALL_STATE(39)] = 759,
  [SMALL_STATE(40)] = 774,
  [SMALL_STATE(41)] = 787,
  [SMALL_STATE(42)] = 800,
  [SMALL_STATE(43)] = 813,
  [SMALL_STATE(44)] = 826,
  [SMALL_STATE(45)] = 837,
  [SMALL_STATE(46)] = 850,
  [SMALL_STATE(47)] = 862,
  [SMALL_STATE(48)] = 874,
  [SMALL_STATE(49)] = 886,
  [SMALL_STATE(50)] = 896,
  [SMALL_STATE(51)] = 908,
  [SMALL_STATE(52)] = 918,
  [SMALL_STATE(53)] = 934,
  [SMALL_STATE(54)] = 943,
  [SMALL_STATE(55)] = 956,
  [SMALL_STATE(56)] = 969,
  [SMALL_STATE(57)] = 982,
  [SMALL_STATE(58)] = 995,
  [SMALL_STATE(59)] = 1004,
  [SMALL_STATE(60)] = 1017,
  [SMALL_STATE(61)] = 1030,
  [SMALL_STATE(62)] = 1043,
  [SMALL_STATE(63)] = 1056,
  [SMALL_STATE(64)] = 1063,
  [SMALL_STATE(65)] = 1070,
  [SMALL_STATE(66)] = 1077,
  [SMALL_STATE(67)] = 1084,
  [SMALL_STATE(68)] = 1091,
  [SMALL_STATE(69)] = 1098,
  [SMALL_STATE(70)] = 1105,
  [SMALL_STATE(71)] = 1112,
  [SMALL_STATE(72)] = 1119,
  [SMALL_STATE(73)] = 1126,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2), SHIFT_REPEAT(39),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2), SHIFT_REPEAT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_without_ver, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(64),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(60),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(59),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_with_ver, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(27),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(53),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_identifier, 3, .production_id = 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(31),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(58),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_identifier, 3, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_with_ver, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, .production_id = 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(56),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(57),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_repkg(void) {
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
