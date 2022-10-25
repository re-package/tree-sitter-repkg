#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

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
  sym__primitive = 40,
  sym_string = 41,
  sym_array = 42,
  sym__newline = 43,
  sym_percent_sign = 44,
  aux_sym__body_repeat1 = 45,
  aux_sym_command_repeat1 = 46,
  aux_sym_string_repeat1 = 47,
  aux_sym_string_repeat2 = 48,
  aux_sym_array_repeat1 = 49,
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
  [19] = 19,
  [20] = 11,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 9,
  [25] = 25,
  [26] = 26,
  [27] = 17,
  [28] = 14,
  [29] = 16,
  [30] = 30,
  [31] = 16,
  [32] = 30,
  [33] = 33,
  [34] = 19,
  [35] = 18,
  [36] = 36,
  [37] = 18,
  [38] = 11,
  [39] = 39,
  [40] = 11,
  [41] = 41,
  [42] = 19,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 26,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 22,
  [53] = 23,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 69,
  [72] = 67,
  [73] = 69,
  [74] = 69,
  [75] = 75,
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
      if (lookahead == 0) ADVANCE(62);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (anon_sym__character_set_1(lookahead)) SKIP(0)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(62);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == '/') ADVANCE(13);
      if (anon_sym__character_set_2(lookahead)) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '{') ADVANCE(67);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '/') ADVANCE(36);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '@') ADVANCE(27);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '/') ADVANCE(44);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(45);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '@') ADVANCE(27);
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
          lookahead == 65279) ADVANCE(33);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
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
          lookahead == 65279) ADVANCE(34);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(35);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '/') ADVANCE(47);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(48);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(13);
      if (anon_sym__character_set_1(lookahead)) SKIP(12)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(78);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '{') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '{') ADVANCE(67);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '/') ADVANCE(36);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '@') ADVANCE(27);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '@') ADVANCE(27);
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
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(36);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '/') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
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
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(15);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(15);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(44);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(43);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(47);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(28);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(57);
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
          lookahead == 65279) ADVANCE(31);
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
          lookahead == 65279) ADVANCE(32);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(28);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(57);
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
          lookahead == 65279) ADVANCE(31);
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
          lookahead == 65279) ADVANCE(32);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__left_square_bracket);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__right_square_bracket);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__left_curly_brace);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__left_curly_brace);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__right_curly_brace);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__left_parantheses);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__right_parantheses);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__dot);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__single_quotation_mark);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__double_quotation_mark);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__percent_sign);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__percent_sign);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
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
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 0},
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
    [sym_source_file] = STATE(65),
    [sym__body] = STATE(75),
    [sym__expr] = STATE(5),
    [sym_variable_def] = STATE(5),
    [sym_import_expr] = STATE(5),
    [sym_namespace] = STATE(5),
    [sym_command] = STATE(33),
    [sym__path] = STATE(9),
    [sym_identifier] = STATE(15),
    [sym_nested_identifier] = STATE(9),
    [sym_identifier_without_ver] = STATE(70),
    [sym__identifier_with_ver] = STATE(11),
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
    STATE(11), 1,
      sym__identifier_with_ver,
    STATE(15), 1,
      sym_identifier,
    STATE(33), 1,
      sym_command,
    STATE(70), 1,
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
      sym__right_curly_brace,
    STATE(11), 1,
      sym__identifier_with_ver,
    STATE(15), 1,
      sym_identifier,
    STATE(33), 1,
      sym_command,
    STATE(70), 1,
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
  [73] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(19), 1,
      sym__right_curly_brace,
    STATE(11), 1,
      sym__identifier_with_ver,
    STATE(15), 1,
      sym_identifier,
    STATE(33), 1,
      sym_command,
    STATE(70), 1,
      sym_identifier_without_ver,
    STATE(9), 2,
      sym__path,
      sym_nested_identifier,
    STATE(3), 5,
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
      ts_builtin_sym_end,
    STATE(11), 1,
      sym__identifier_with_ver,
    STATE(15), 1,
      sym_identifier,
    STATE(33), 1,
      sym_command,
    STATE(70), 1,
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
  [145] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym__identifier_with_ver,
    STATE(15), 1,
      sym_identifier,
    STATE(33), 1,
      sym_command,
    STATE(70), 1,
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
    STATE(11), 1,
      sym__identifier_with_ver,
    STATE(15), 1,
      sym_identifier,
    STATE(33), 1,
      sym_command,
    STATE(66), 1,
      sym_body,
    STATE(70), 1,
      sym_identifier_without_ver,
    STATE(9), 2,
      sym__path,
      sym_nested_identifier,
    STATE(4), 4,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
  [216] = 4,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(27), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(29), 9,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_curly_brace,
      sym__left_parantheses,
      sym__dot,
      sym__percent_sign,
  [237] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(37), 1,
      sym__left_parantheses,
    ACTIONS(39), 1,
      sym__dot,
    ACTIONS(41), 1,
      sym__percent_sign,
    STATE(17), 2,
      sym_variable,
      aux_sym_command_repeat1,
    ACTIONS(35), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [263] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      sym__left_square_bracket,
    ACTIONS(47), 1,
      sym__right_square_bracket,
    ACTIONS(49), 1,
      sym__single_quotation_mark,
    ACTIONS(51), 1,
      sym__double_quotation_mark,
    STATE(13), 1,
      aux_sym_array_repeat1,
    STATE(68), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [290] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(29), 9,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_curly_brace,
      sym__left_parantheses,
      sym__dot,
      sym__percent_sign,
  [305] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(56), 1,
      sym__left_square_bracket,
    ACTIONS(59), 1,
      sym__right_square_bracket,
    ACTIONS(61), 1,
      sym__single_quotation_mark,
    ACTIONS(64), 1,
      sym__double_quotation_mark,
    STATE(12), 1,
      aux_sym_array_repeat1,
    STATE(68), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [332] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      sym__left_square_bracket,
    ACTIONS(49), 1,
      sym__single_quotation_mark,
    ACTIONS(51), 1,
      sym__double_quotation_mark,
    ACTIONS(67), 1,
      sym__right_square_bracket,
    STATE(12), 1,
      aux_sym_array_repeat1,
    STATE(68), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [359] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_text,
    ACTIONS(74), 1,
      sym__left_parantheses,
    ACTIONS(77), 1,
      sym__percent_sign,
    STATE(14), 2,
      sym_variable,
      aux_sym_command_repeat1,
    ACTIONS(72), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [382] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym__left_curly_brace,
    ACTIONS(80), 8,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_parantheses,
      sym__dot,
      sym__percent_sign,
  [399] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_AT,
    ACTIONS(29), 8,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_parantheses,
      sym__dot,
      sym__percent_sign,
  [416] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__left_parantheses,
    ACTIONS(41), 1,
      sym__percent_sign,
    ACTIONS(86), 1,
      sym_text,
    STATE(14), 2,
      sym_variable,
      aux_sym_command_repeat1,
    ACTIONS(88), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [439] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(90), 9,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_curly_brace,
      sym__left_parantheses,
      sym__dot,
      sym__percent_sign,
  [454] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(92), 8,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_parantheses,
      sym__dot,
      sym__percent_sign,
  [468] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(29), 8,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_parantheses,
      sym__dot,
      sym__percent_sign,
  [482] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(90), 8,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_parantheses,
      sym__dot,
      sym__percent_sign,
  [496] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(94), 7,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_parantheses,
      sym__percent_sign,
  [509] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(96), 7,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_parantheses,
      sym__percent_sign,
  [522] = 7,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__right_parantheses,
    ACTIONS(98), 1,
      sym_text,
    ACTIONS(100), 1,
      sym__left_parantheses,
    ACTIONS(102), 1,
      sym__dot,
    ACTIONS(104), 1,
      sym__percent_sign,
    STATE(27), 2,
      sym_variable,
      aux_sym_command_repeat1,
  [545] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym__left_square_bracket,
    ACTIONS(49), 1,
      sym__single_quotation_mark,
    ACTIONS(51), 1,
      sym__double_quotation_mark,
    ACTIONS(106), 1,
      sym_number,
    STATE(56), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [566] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 7,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_parantheses,
      sym__percent_sign,
  [579] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym__right_parantheses,
    ACTIONS(100), 1,
      sym__left_parantheses,
    ACTIONS(104), 1,
      sym__percent_sign,
    ACTIONS(110), 1,
      sym_text,
    STATE(28), 2,
      sym_variable,
      aux_sym_command_repeat1,
  [599] = 6,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym__right_parantheses,
    ACTIONS(112), 1,
      sym_text,
    ACTIONS(115), 1,
      sym__left_parantheses,
    ACTIONS(118), 1,
      sym__percent_sign,
    STATE(28), 2,
      sym_variable,
      aux_sym_command_repeat1,
  [619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_AT,
    ACTIONS(29), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym__identifier_without_ver,
    STATE(40), 1,
      sym__identifier_with_ver,
    STATE(67), 1,
      sym_command,
    STATE(24), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [653] = 3,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_AT,
    ACTIONS(29), 5,
      sym_text,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__percent_sign,
  [667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym__identifier_without_ver,
    STATE(40), 1,
      sym__identifier_with_ver,
    STATE(72), 1,
      sym_command,
    STATE(24), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [685] = 3,
    ACTIONS(31), 1,
      sym_comment,
    STATE(50), 1,
      sym__newline,
    ACTIONS(129), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [711] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(90), 5,
      sym_text,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__percent_sign,
  [722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [748] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__dot,
  [761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym__identifier_without_ver,
    STATE(38), 1,
      sym__identifier_with_ver,
    STATE(46), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [776] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(29), 5,
      sym_text,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__percent_sign,
  [787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [800] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(92), 5,
      sym_text,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__percent_sign,
  [811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 5,
      sym_number,
      sym__left_square_bracket,
      sym__right_square_bracket,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      sym__right_curly_brace,
      sym__comma,
  [848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__dot,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(155), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [863] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym__percent_sign,
    STATE(23), 1,
      sym_percent_sign,
    ACTIONS(159), 2,
      sym_text,
      sym_number,
  [877] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(108), 4,
      sym_text,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__percent_sign,
  [887] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym__percent_sign,
    STATE(53), 1,
      sym_percent_sign,
    ACTIONS(163), 2,
      sym_text,
      sym_number,
  [901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(169), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [913] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym__identifier_without_ver,
    ACTIONS(171), 1,
      sym_wildcard,
    STATE(34), 1,
      sym_identifier,
    STATE(38), 1,
      sym__identifier_with_ver,
  [929] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(94), 4,
      sym_text,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__percent_sign,
  [939] = 2,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(96), 4,
      sym_text,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__percent_sign,
  [949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(175), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(179), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(183), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [985] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym_string_token1,
    ACTIONS(187), 1,
      sym__double_quotation_mark,
    STATE(64), 1,
      aux_sym_string_repeat1,
  [998] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym__single_quotation_mark,
    ACTIONS(189), 1,
      aux_sym_string_token2,
    STATE(60), 1,
      aux_sym_string_repeat2,
  [1011] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(191), 1,
      aux_sym_string_token1,
    ACTIONS(194), 1,
      sym__double_quotation_mark,
    STATE(59), 1,
      aux_sym_string_repeat1,
  [1024] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_string_token2,
    ACTIONS(198), 1,
      sym__single_quotation_mark,
    STATE(61), 1,
      aux_sym_string_repeat2,
  [1037] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(200), 1,
      aux_sym_string_token2,
    ACTIONS(203), 1,
      sym__single_quotation_mark,
    STATE(61), 1,
      aux_sym_string_repeat2,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__identifier_without_ver,
    STATE(19), 1,
      sym_identifier,
    STATE(20), 1,
      sym__identifier_with_ver,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym__identifier_without_ver,
    STATE(40), 1,
      sym__identifier_with_ver,
    STATE(42), 1,
      sym_identifier,
  [1076] = 4,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym__double_quotation_mark,
    ACTIONS(207), 1,
      aux_sym_string_token1,
    STATE(59), 1,
      aux_sym_string_repeat1,
  [1089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [1096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__right_curly_brace,
  [1103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym__right_parantheses,
  [1110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym__comma,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__identifier_without_ver,
  [1124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_EQ,
  [1131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__identifier_without_ver,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__right_parantheses,
  [1145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__identifier_without_ver,
  [1152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__identifier_without_ver,
  [1159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
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
  [SMALL_STATE(11)] = 290,
  [SMALL_STATE(12)] = 305,
  [SMALL_STATE(13)] = 332,
  [SMALL_STATE(14)] = 359,
  [SMALL_STATE(15)] = 382,
  [SMALL_STATE(16)] = 399,
  [SMALL_STATE(17)] = 416,
  [SMALL_STATE(18)] = 439,
  [SMALL_STATE(19)] = 454,
  [SMALL_STATE(20)] = 468,
  [SMALL_STATE(21)] = 482,
  [SMALL_STATE(22)] = 496,
  [SMALL_STATE(23)] = 509,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 545,
  [SMALL_STATE(26)] = 566,
  [SMALL_STATE(27)] = 579,
  [SMALL_STATE(28)] = 599,
  [SMALL_STATE(29)] = 619,
  [SMALL_STATE(30)] = 635,
  [SMALL_STATE(31)] = 653,
  [SMALL_STATE(32)] = 667,
  [SMALL_STATE(33)] = 685,
  [SMALL_STATE(34)] = 698,
  [SMALL_STATE(35)] = 711,
  [SMALL_STATE(36)] = 722,
  [SMALL_STATE(37)] = 735,
  [SMALL_STATE(38)] = 748,
  [SMALL_STATE(39)] = 761,
  [SMALL_STATE(40)] = 776,
  [SMALL_STATE(41)] = 787,
  [SMALL_STATE(42)] = 800,
  [SMALL_STATE(43)] = 811,
  [SMALL_STATE(44)] = 824,
  [SMALL_STATE(45)] = 835,
  [SMALL_STATE(46)] = 848,
  [SMALL_STATE(47)] = 863,
  [SMALL_STATE(48)] = 877,
  [SMALL_STATE(49)] = 887,
  [SMALL_STATE(50)] = 901,
  [SMALL_STATE(51)] = 913,
  [SMALL_STATE(52)] = 929,
  [SMALL_STATE(53)] = 939,
  [SMALL_STATE(54)] = 949,
  [SMALL_STATE(55)] = 961,
  [SMALL_STATE(56)] = 973,
  [SMALL_STATE(57)] = 985,
  [SMALL_STATE(58)] = 998,
  [SMALL_STATE(59)] = 1011,
  [SMALL_STATE(60)] = 1024,
  [SMALL_STATE(61)] = 1037,
  [SMALL_STATE(62)] = 1050,
  [SMALL_STATE(63)] = 1063,
  [SMALL_STATE(64)] = 1076,
  [SMALL_STATE(65)] = 1089,
  [SMALL_STATE(66)] = 1096,
  [SMALL_STATE(67)] = 1103,
  [SMALL_STATE(68)] = 1110,
  [SMALL_STATE(69)] = 1117,
  [SMALL_STATE(70)] = 1124,
  [SMALL_STATE(71)] = 1131,
  [SMALL_STATE(72)] = 1138,
  [SMALL_STATE(73)] = 1145,
  [SMALL_STATE(74)] = 1152,
  [SMALL_STATE(75)] = 1159,
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
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_without_ver, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(68),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(58),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(57),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(14),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(47),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_with_ver, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_identifier, 3, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_sign, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(28),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(49),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_identifier, 3, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_with_ver, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(59),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(61),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
