#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_EQ = 1,
  anon_sym_import = 2,
  sym__identifier_without_ver = 3,
  anon_sym_AT = 4,
  sym_text = 5,
  sym_number = 6,
  aux_sym_string_token1 = 7,
  aux_sym_string_token2 = 8,
  sym_wildcard = 9,
  anon_sym_LF = 10,
  anon_sym_CR = 11,
  anon_sym_LF_CR = 12,
  anon_sym_ = 13,
  sym__left_square_bracket = 14,
  sym__right_square_bracket = 15,
  sym__left_curly_brace = 16,
  sym__right_curly_brace = 17,
  sym__left_parantheses = 18,
  sym__right_parantheses = 19,
  sym__comma = 20,
  sym__dot = 21,
  sym__single_quotation_mark = 22,
  sym__double_quotation_mark = 23,
  sym__percent_sign = 24,
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
  sym_primitive = 40,
  sym__primitive = 41,
  sym_string = 42,
  sym_array = 43,
  sym__newline = 44,
  sym_percent_sign = 45,
  aux_sym__body_repeat1 = 46,
  aux_sym_command_repeat1 = 47,
  aux_sym_string_repeat1 = 48,
  aux_sym_string_repeat2 = 49,
  aux_sym_array_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_import] = "import",
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
  [sym__left_parantheses] = "_left_parantheses",
  [sym__right_parantheses] = "_right_parantheses",
  [sym__comma] = "_comma",
  [sym__dot] = "_dot",
  [sym__single_quotation_mark] = "_single_quotation_mark",
  [sym__double_quotation_mark] = "_double_quotation_mark",
  [sym__percent_sign] = "_percent_sign",
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
  [sym_primitive] = "primitive",
  [sym__primitive] = "_primitive",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym__newline] = "_newline",
  [sym_percent_sign] = "percent_sign",
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
  [sym__left_parantheses] = sym__left_parantheses,
  [sym__right_parantheses] = sym__right_parantheses,
  [sym__comma] = sym__comma,
  [sym__dot] = sym__dot,
  [sym__single_quotation_mark] = sym__single_quotation_mark,
  [sym__double_quotation_mark] = sym__double_quotation_mark,
  [sym__percent_sign] = sym__percent_sign,
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
  [sym_primitive] = sym_primitive,
  [sym__primitive] = sym__primitive,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym__newline] = sym__newline,
  [sym_percent_sign] = sym_percent_sign,
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
  [sym__left_parantheses] = {
    .visible = false,
    .named = true,
  },
  [sym__right_parantheses] = {
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
  [sym__percent_sign] = {
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
  [sym_primitive] = {
    .visible = true,
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
  [sym_percent_sign] = {
    .visible = true,
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
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_program, 0},
  [1] =
    {field_args, 1},
    {field_program, 0},
  [3] =
    {field_name, 2},
    {field_path, 0},
  [5] =
    {field_var, 1},
  [6] =
    {field_id, 0},
    {field_val, 2},
  [8] =
    {field_var, 1},
    {field_var, 2},
  [10] =
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
  [7] = 2,
  [8] = 3,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 4,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 14,
  [20] = 16,
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
  [31] = 18,
  [32] = 32,
  [33] = 14,
  [34] = 21,
  [35] = 32,
  [36] = 36,
  [37] = 36,
  [38] = 36,
  [39] = 16,
  [40] = 40,
  [41] = 32,
  [42] = 24,
  [43] = 27,
  [44] = 25,
  [45] = 30,
  [46] = 29,
  [47] = 28,
  [48] = 22,
  [49] = 23,
  [50] = 26,
  [51] = 51,
  [52] = 18,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 16,
  [57] = 57,
  [58] = 14,
  [59] = 24,
  [60] = 21,
  [61] = 22,
  [62] = 62,
  [63] = 27,
  [64] = 26,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 71,
  [73] = 73,
  [74] = 74,
  [75] = 73,
  [76] = 76,
  [77] = 77,
  [78] = 74,
  [79] = 76,
  [80] = 80,
  [81] = 81,
  [82] = 73,
  [83] = 81,
  [84] = 71,
  [85] = 76,
  [86] = 77,
  [87] = 87,
  [88] = 74,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 91,
  [94] = 89,
  [95] = 95,
  [96] = 96,
  [97] = 91,
  [98] = 91,
  [99] = 99,
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
      if (eof) ADVANCE(17);
      if (lookahead == 0) ADVANCE(64);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '[') ADVANCE(66);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (anon_sym__character_set_1(lookahead)) SKIP(0)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(64);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == '/') ADVANCE(14);
      if (anon_sym__character_set_2(lookahead)) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '{') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '{') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
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
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
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
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '/') ADVANCE(46);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(47);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(34);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(36);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
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
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(77);
      if (lookahead == '/') ADVANCE(49);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(50);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(14);
      if (anon_sym__character_set_1(lookahead)) SKIP(13)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '{') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '{') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
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
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(65);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
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
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
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
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
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
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '[') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
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
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '/') ADVANCE(38);
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
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(16);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(16);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(46);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(49);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(48);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(29);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(30);
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
          lookahead == 65279) ADVANCE(31);
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
          lookahead == 65279) ADVANCE(32);
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
          lookahead == 65279) ADVANCE(33);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(29);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(30);
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
          lookahead == 65279) ADVANCE(31);
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
          lookahead == 65279) ADVANCE(32);
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
          lookahead == 65279) ADVANCE(33);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__left_square_bracket);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__left_square_bracket);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
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
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__right_curly_brace);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__left_parantheses);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__right_parantheses);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__dot);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__single_quotation_mark);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__single_quotation_mark);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__double_quotation_mark);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__double_quotation_mark);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__percent_sign);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__percent_sign);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(84);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [sym__identifier_without_ver] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_wildcard] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__left_square_bracket] = ACTIONS(1),
    [sym__right_square_bracket] = ACTIONS(1),
    [sym__left_curly_brace] = ACTIONS(1),
    [sym__right_curly_brace] = ACTIONS(1),
    [sym__left_parantheses] = ACTIONS(1),
    [sym__right_parantheses] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
    [sym__dot] = ACTIONS(1),
    [sym__single_quotation_mark] = ACTIONS(1),
    [sym__double_quotation_mark] = ACTIONS(1),
    [sym__percent_sign] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(95),
    [sym__body] = STATE(92),
    [sym__expr] = STATE(9),
    [sym_variable_def] = STATE(9),
    [sym_import_expr] = STATE(9),
    [sym_namespace] = STATE(9),
    [sym_command] = STATE(65),
    [sym__path] = STATE(2),
    [sym_identifier] = STATE(15),
    [sym_nested_identifier] = STATE(2),
    [sym_identifier_without_ver] = STATE(90),
    [sym__identifier_with_ver] = STATE(16),
    [anon_sym_import] = ACTIONS(5),
    [sym__identifier_without_ver] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      sym__left_square_bracket,
    ACTIONS(17), 1,
      sym__left_parantheses,
    ACTIONS(19), 1,
      sym__dot,
    ACTIONS(21), 1,
      sym__single_quotation_mark,
    ACTIONS(23), 1,
      sym__double_quotation_mark,
    ACTIONS(25), 1,
      sym__percent_sign,
    ACTIONS(27), 1,
      sym_comment,
    STATE(4), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(23), 3,
      sym__primitive,
      sym_string,
      sym_array,
    ACTIONS(13), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [44] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(32), 1,
      sym_number,
    ACTIONS(37), 1,
      sym__left_square_bracket,
    ACTIONS(40), 1,
      sym__left_parantheses,
    ACTIONS(43), 1,
      sym__single_quotation_mark,
    ACTIONS(46), 1,
      sym__double_quotation_mark,
    ACTIONS(49), 1,
      sym__percent_sign,
    STATE(3), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(23), 3,
      sym__primitive,
      sym_string,
      sym_array,
    ACTIONS(35), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [85] = 11,
    ACTIONS(11), 1,
      sym_number,
    ACTIONS(15), 1,
      sym__left_square_bracket,
    ACTIONS(17), 1,
      sym__left_parantheses,
    ACTIONS(21), 1,
      sym__single_quotation_mark,
    ACTIONS(23), 1,
      sym__double_quotation_mark,
    ACTIONS(25), 1,
      sym__percent_sign,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_text,
    STATE(3), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(23), 3,
      sym__primitive,
      sym_string,
      sym_array,
    ACTIONS(54), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [126] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_EQ,
    ACTIONS(58), 1,
      anon_sym_AT,
    ACTIONS(60), 13,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_curly_brace,
      sym__left_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [151] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_import,
    ACTIONS(67), 1,
      sym__identifier_without_ver,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym__identifier_with_ver,
    STATE(65), 1,
      sym_command,
    STATE(90), 1,
      sym_identifier_without_ver,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(6), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [188] = 12,
    ACTIONS(13), 1,
      sym__right_parantheses,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_text,
    ACTIONS(72), 1,
      sym_number,
    ACTIONS(74), 1,
      sym__left_square_bracket,
    ACTIONS(76), 1,
      sym__left_parantheses,
    ACTIONS(78), 1,
      sym__dot,
    ACTIONS(80), 1,
      sym__single_quotation_mark,
    ACTIONS(82), 1,
      sym__double_quotation_mark,
    ACTIONS(84), 1,
      sym__percent_sign,
    STATE(13), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(49), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [229] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__right_parantheses,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(89), 1,
      sym_number,
    ACTIONS(92), 1,
      sym__left_square_bracket,
    ACTIONS(95), 1,
      sym__left_parantheses,
    ACTIONS(98), 1,
      sym__single_quotation_mark,
    ACTIONS(101), 1,
      sym__double_quotation_mark,
    ACTIONS(104), 1,
      sym__percent_sign,
    STATE(8), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(49), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [267] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym__identifier_with_ver,
    STATE(65), 1,
      sym_command,
    STATE(90), 1,
      sym_identifier_without_ver,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(12), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [303] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(109), 1,
      sym__right_curly_brace,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym__identifier_with_ver,
    STATE(65), 1,
      sym_command,
    STATE(90), 1,
      sym_identifier_without_ver,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(6), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [339] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(111), 1,
      sym__right_curly_brace,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym__identifier_with_ver,
    STATE(65), 1,
      sym_command,
    STATE(90), 1,
      sym_identifier_without_ver,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(10), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [375] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym__identifier_with_ver,
    STATE(65), 1,
      sym_command,
    STATE(90), 1,
      sym_identifier_without_ver,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(6), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [411] = 11,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(54), 1,
      sym__right_parantheses,
    ACTIONS(72), 1,
      sym_number,
    ACTIONS(74), 1,
      sym__left_square_bracket,
    ACTIONS(76), 1,
      sym__left_parantheses,
    ACTIONS(80), 1,
      sym__single_quotation_mark,
    ACTIONS(82), 1,
      sym__double_quotation_mark,
    ACTIONS(84), 1,
      sym__percent_sign,
    ACTIONS(115), 1,
      sym_text,
    STATE(8), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(49), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [449] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(117), 13,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_curly_brace,
      sym__left_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [468] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym__left_curly_brace,
    ACTIONS(119), 12,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [489] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(60), 13,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_curly_brace,
      sym__left_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [508] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym__identifier_with_ver,
    STATE(65), 1,
      sym_command,
    STATE(90), 1,
      sym_identifier_without_ver,
    STATE(99), 1,
      sym_body,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(11), 4,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
  [543] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(60), 12,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [564] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(117), 12,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [582] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(60), 12,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [600] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(125), 12,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [618] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(127), 11,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [635] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(129), 11,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [652] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(131), 11,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [669] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(133), 11,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [686] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(135), 11,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [703] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(137), 11,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [720] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(139), 11,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [737] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(141), 10,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [756] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(145), 11,
      sym_text,
      sym_number,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [773] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(60), 9,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [791] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(151), 1,
      sym__left_square_bracket,
    ACTIONS(153), 1,
      sym__right_square_bracket,
    ACTIONS(155), 1,
      sym__single_quotation_mark,
    ACTIONS(157), 1,
      sym__double_quotation_mark,
    STATE(37), 1,
      aux_sym_array_repeat1,
    STATE(96), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [818] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(117), 9,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [833] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(125), 9,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [848] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(151), 1,
      sym__left_square_bracket,
    ACTIONS(155), 1,
      sym__single_quotation_mark,
    ACTIONS(157), 1,
      sym__double_quotation_mark,
    ACTIONS(159), 1,
      sym__right_square_bracket,
    STATE(36), 1,
      aux_sym_array_repeat1,
    STATE(96), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [875] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(151), 1,
      sym__left_square_bracket,
    ACTIONS(155), 1,
      sym__single_quotation_mark,
    ACTIONS(157), 1,
      sym__double_quotation_mark,
    ACTIONS(161), 1,
      sym__right_square_bracket,
    STATE(40), 1,
      aux_sym_array_repeat1,
    STATE(96), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [902] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(151), 1,
      sym__left_square_bracket,
    ACTIONS(155), 1,
      sym__single_quotation_mark,
    ACTIONS(157), 1,
      sym__double_quotation_mark,
    ACTIONS(163), 1,
      sym__right_square_bracket,
    STATE(40), 1,
      aux_sym_array_repeat1,
    STATE(96), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [929] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(151), 1,
      sym__left_square_bracket,
    ACTIONS(155), 1,
      sym__single_quotation_mark,
    ACTIONS(157), 1,
      sym__double_quotation_mark,
    ACTIONS(165), 1,
      sym__right_square_bracket,
    STATE(40), 1,
      aux_sym_array_repeat1,
    STATE(96), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [956] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(60), 9,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [971] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_number,
    ACTIONS(170), 1,
      sym__left_square_bracket,
    ACTIONS(173), 1,
      sym__right_square_bracket,
    ACTIONS(175), 1,
      sym__single_quotation_mark,
    ACTIONS(178), 1,
      sym__double_quotation_mark,
    STATE(40), 1,
      aux_sym_array_repeat1,
    STATE(96), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [998] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(151), 1,
      sym__left_square_bracket,
    ACTIONS(155), 1,
      sym__single_quotation_mark,
    ACTIONS(157), 1,
      sym__double_quotation_mark,
    ACTIONS(181), 1,
      sym__right_square_bracket,
    STATE(38), 1,
      aux_sym_array_repeat1,
    STATE(96), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [1025] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(131), 8,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1039] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(137), 8,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1053] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(133), 8,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1067] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(145), 8,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1081] = 3,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_number,
    ACTIONS(141), 7,
      sym_text,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1097] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(139), 8,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1111] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(127), 8,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1125] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(129), 8,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1139] = 2,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(135), 8,
      sym_text,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__left_square_bracket,
    ACTIONS(155), 1,
      sym__single_quotation_mark,
    ACTIONS(157), 1,
      sym__double_quotation_mark,
    ACTIONS(185), 1,
      sym_number,
    STATE(70), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [1174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_AT,
    ACTIONS(60), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [1190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__identifier_without_ver,
    STATE(39), 1,
      sym__identifier_with_ver,
    STATE(94), 1,
      sym_command,
    STATE(7), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [1208] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__identifier_without_ver,
    STATE(39), 1,
      sym__identifier_with_ver,
    STATE(89), 1,
      sym_command,
    STATE(7), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [1226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym__dot,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(195), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [1254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym__identifier_without_ver,
    STATE(56), 1,
      sym__identifier_with_ver,
    STATE(55), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [1269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [1295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [1308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 5,
      sym_number,
      sym__left_square_bracket,
      sym__right_square_bracket,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
  [1332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [1345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [1358] = 3,
    ACTIONS(27), 1,
      sym_comment,
    STATE(69), 1,
      sym__newline,
    ACTIONS(213), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [1371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(217), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1383] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym__identifier_without_ver,
    ACTIONS(219), 1,
      sym_wildcard,
    STATE(56), 1,
      sym__identifier_with_ver,
    STATE(60), 1,
      sym_identifier,
  [1399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(223), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(227), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(231), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1435] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym_string_token2,
    ACTIONS(235), 1,
      sym__single_quotation_mark,
    STATE(74), 1,
      aux_sym_string_repeat2,
  [1448] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_string_token2,
    ACTIONS(239), 1,
      sym__single_quotation_mark,
    STATE(78), 1,
      aux_sym_string_repeat2,
  [1461] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_string_token1,
    ACTIONS(243), 1,
      sym__double_quotation_mark,
    STATE(80), 1,
      aux_sym_string_repeat1,
  [1474] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__single_quotation_mark,
    ACTIONS(245), 1,
      aux_sym_string_token2,
    STATE(87), 1,
      aux_sym_string_repeat2,
  [1487] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_string_token1,
    ACTIONS(247), 1,
      sym__double_quotation_mark,
    STATE(80), 1,
      aux_sym_string_repeat1,
  [1500] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym__double_quotation_mark,
    ACTIONS(249), 1,
      aux_sym_string_token1,
    STATE(73), 1,
      aux_sym_string_repeat1,
  [1513] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_text,
    ACTIONS(253), 1,
      sym__percent_sign,
    STATE(28), 1,
      sym_percent_sign,
  [1526] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_string_token2,
    ACTIONS(247), 1,
      sym__single_quotation_mark,
    STATE(87), 1,
      aux_sym_string_repeat2,
  [1539] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__double_quotation_mark,
    ACTIONS(255), 1,
      aux_sym_string_token1,
    STATE(75), 1,
      aux_sym_string_repeat1,
  [1552] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_string_token1,
    ACTIONS(260), 1,
      sym__double_quotation_mark,
    STATE(80), 1,
      aux_sym_string_repeat1,
  [1565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__identifier_without_ver,
    STATE(20), 1,
      sym__identifier_with_ver,
    STATE(21), 1,
      sym_identifier,
  [1578] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym_string_token1,
    ACTIONS(264), 1,
      sym__double_quotation_mark,
    STATE(80), 1,
      aux_sym_string_repeat1,
  [1591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__identifier_without_ver,
    STATE(34), 1,
      sym_identifier,
    STATE(39), 1,
      sym__identifier_with_ver,
  [1604] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym_string_token2,
    ACTIONS(268), 1,
      sym__single_quotation_mark,
    STATE(88), 1,
      aux_sym_string_repeat2,
  [1617] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__double_quotation_mark,
    ACTIONS(270), 1,
      aux_sym_string_token1,
    STATE(82), 1,
      aux_sym_string_repeat1,
  [1630] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_text,
    ACTIONS(274), 1,
      sym__percent_sign,
    STATE(47), 1,
      sym_percent_sign,
  [1643] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(276), 1,
      aux_sym_string_token2,
    ACTIONS(279), 1,
      sym__single_quotation_mark,
    STATE(87), 1,
      aux_sym_string_repeat2,
  [1656] = 4,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_string_token2,
    ACTIONS(264), 1,
      sym__single_quotation_mark,
    STATE(87), 1,
      aux_sym_string_repeat2,
  [1669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__right_parantheses,
  [1676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_EQ,
  [1683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym__identifier_without_ver,
  [1690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [1697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym__identifier_without_ver,
  [1704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym__right_parantheses,
  [1711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym__comma,
  [1725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym__identifier_without_ver,
  [1732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym__identifier_without_ver,
  [1739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__right_curly_brace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 85,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 229,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 303,
  [SMALL_STATE(11)] = 339,
  [SMALL_STATE(12)] = 375,
  [SMALL_STATE(13)] = 411,
  [SMALL_STATE(14)] = 449,
  [SMALL_STATE(15)] = 468,
  [SMALL_STATE(16)] = 489,
  [SMALL_STATE(17)] = 508,
  [SMALL_STATE(18)] = 543,
  [SMALL_STATE(19)] = 564,
  [SMALL_STATE(20)] = 582,
  [SMALL_STATE(21)] = 600,
  [SMALL_STATE(22)] = 618,
  [SMALL_STATE(23)] = 635,
  [SMALL_STATE(24)] = 652,
  [SMALL_STATE(25)] = 669,
  [SMALL_STATE(26)] = 686,
  [SMALL_STATE(27)] = 703,
  [SMALL_STATE(28)] = 720,
  [SMALL_STATE(29)] = 737,
  [SMALL_STATE(30)] = 756,
  [SMALL_STATE(31)] = 773,
  [SMALL_STATE(32)] = 791,
  [SMALL_STATE(33)] = 818,
  [SMALL_STATE(34)] = 833,
  [SMALL_STATE(35)] = 848,
  [SMALL_STATE(36)] = 875,
  [SMALL_STATE(37)] = 902,
  [SMALL_STATE(38)] = 929,
  [SMALL_STATE(39)] = 956,
  [SMALL_STATE(40)] = 971,
  [SMALL_STATE(41)] = 998,
  [SMALL_STATE(42)] = 1025,
  [SMALL_STATE(43)] = 1039,
  [SMALL_STATE(44)] = 1053,
  [SMALL_STATE(45)] = 1067,
  [SMALL_STATE(46)] = 1081,
  [SMALL_STATE(47)] = 1097,
  [SMALL_STATE(48)] = 1111,
  [SMALL_STATE(49)] = 1125,
  [SMALL_STATE(50)] = 1139,
  [SMALL_STATE(51)] = 1153,
  [SMALL_STATE(52)] = 1174,
  [SMALL_STATE(53)] = 1190,
  [SMALL_STATE(54)] = 1208,
  [SMALL_STATE(55)] = 1226,
  [SMALL_STATE(56)] = 1241,
  [SMALL_STATE(57)] = 1254,
  [SMALL_STATE(58)] = 1269,
  [SMALL_STATE(59)] = 1282,
  [SMALL_STATE(60)] = 1295,
  [SMALL_STATE(61)] = 1308,
  [SMALL_STATE(62)] = 1321,
  [SMALL_STATE(63)] = 1332,
  [SMALL_STATE(64)] = 1345,
  [SMALL_STATE(65)] = 1358,
  [SMALL_STATE(66)] = 1371,
  [SMALL_STATE(67)] = 1383,
  [SMALL_STATE(68)] = 1399,
  [SMALL_STATE(69)] = 1411,
  [SMALL_STATE(70)] = 1423,
  [SMALL_STATE(71)] = 1435,
  [SMALL_STATE(72)] = 1448,
  [SMALL_STATE(73)] = 1461,
  [SMALL_STATE(74)] = 1474,
  [SMALL_STATE(75)] = 1487,
  [SMALL_STATE(76)] = 1500,
  [SMALL_STATE(77)] = 1513,
  [SMALL_STATE(78)] = 1526,
  [SMALL_STATE(79)] = 1539,
  [SMALL_STATE(80)] = 1552,
  [SMALL_STATE(81)] = 1565,
  [SMALL_STATE(82)] = 1578,
  [SMALL_STATE(83)] = 1591,
  [SMALL_STATE(84)] = 1604,
  [SMALL_STATE(85)] = 1617,
  [SMALL_STATE(86)] = 1630,
  [SMALL_STATE(87)] = 1643,
  [SMALL_STATE(88)] = 1656,
  [SMALL_STATE(89)] = 1669,
  [SMALL_STATE(90)] = 1676,
  [SMALL_STATE(91)] = 1683,
  [SMALL_STATE(92)] = 1690,
  [SMALL_STATE(93)] = 1697,
  [SMALL_STATE(94)] = 1704,
  [SMALL_STATE(95)] = 1711,
  [SMALL_STATE(96)] = 1718,
  [SMALL_STATE(97)] = 1725,
  [SMALL_STATE(98)] = 1732,
  [SMALL_STATE(99)] = 1739,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(23),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(53),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(71),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(76),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(77),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_without_ver, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2), SHIFT_REPEAT(57),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2), SHIFT_REPEAT(5),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(8),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(49),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(41),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(54),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(72),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(79),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(86),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_with_ver, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_identifier, 3, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_sign, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(96),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(84),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(85),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_with_ver, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_identifier, 3, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, .production_id = 7),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, .production_id = 7),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(80),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(87),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
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
