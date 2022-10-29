#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
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
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 4,
  [14] = 14,
  [15] = 3,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 19,
  [26] = 26,
  [27] = 23,
  [28] = 28,
  [29] = 29,
  [30] = 20,
  [31] = 21,
  [32] = 32,
  [33] = 26,
  [34] = 34,
  [35] = 16,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 38,
  [42] = 34,
  [43] = 36,
  [44] = 32,
  [45] = 45,
  [46] = 29,
  [47] = 28,
  [48] = 48,
  [49] = 48,
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
  [64] = 62,
  [65] = 65,
  [66] = 60,
  [67] = 67,
  [68] = 59,
  [69] = 69,
  [70] = 63,
  [71] = 65,
  [72] = 61,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 73,
  [80] = 80,
  [81] = 78,
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
      if (eof) ADVANCE(9);
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (anon_sym__character_set_1(lookahead)) SKIP(0)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '{') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (anon_sym__character_set_2(lookahead)) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '/') ADVANCE(27);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(28);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '/') ADVANCE(30);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(31);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(6);
      if (anon_sym__character_set_1(lookahead)) SKIP(5)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__identifier_without_ver);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8203) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 8288 ||
          lookahead == 12288 ||
          lookahead == 65279) ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(8);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(8);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(27);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(30);
      if (anon_sym__character_set_1(lookahead)) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__left_square_bracket);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__right_square_bracket);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__left_curly_brace);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__right_curly_brace);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__left_parantheses);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__right_parantheses);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__dot);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__single_quotation_mark);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__double_quotation_mark);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__percent_sign);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__percent_sign);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(24);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
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
    [sym_source_file] = STATE(75),
    [sym__body] = STATE(76),
    [sym__expr] = STATE(8),
    [sym_variable_def] = STATE(8),
    [sym_import_expr] = STATE(8),
    [sym_namespace] = STATE(8),
    [sym_command] = STATE(50),
    [sym__path] = STATE(2),
    [sym_identifier] = STATE(24),
    [sym_nested_identifier] = STATE(2),
    [sym_identifier_without_ver] = STATE(77),
    [sym__identifier_with_ver] = STATE(22),
    [anon_sym_import] = ACTIONS(5),
    [sym__identifier_without_ver] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      sym__left_square_bracket,
    ACTIONS(15), 1,
      sym__left_parantheses,
    ACTIONS(17), 1,
      sym__dot,
    ACTIONS(19), 1,
      sym__single_quotation_mark,
    ACTIONS(21), 1,
      sym__double_quotation_mark,
    ACTIONS(23), 1,
      sym__percent_sign,
    ACTIONS(25), 1,
      sym_comment,
    STATE(3), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(36), 3,
      sym__primitive,
      sym_string,
      sym_array,
    ACTIONS(11), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [41] = 10,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      sym__left_square_bracket,
    ACTIONS(15), 1,
      sym__left_parantheses,
    ACTIONS(19), 1,
      sym__single_quotation_mark,
    ACTIONS(21), 1,
      sym__double_quotation_mark,
    ACTIONS(23), 1,
      sym__percent_sign,
    ACTIONS(25), 1,
      sym_comment,
    STATE(4), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(36), 3,
      sym__primitive,
      sym_string,
      sym_array,
    ACTIONS(27), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [79] = 10,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(34), 1,
      sym__left_square_bracket,
    ACTIONS(37), 1,
      sym__left_parantheses,
    ACTIONS(40), 1,
      sym__single_quotation_mark,
    ACTIONS(43), 1,
      sym__double_quotation_mark,
    ACTIONS(46), 1,
      sym__percent_sign,
    STATE(4), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(36), 3,
      sym__primitive,
      sym_string,
      sym_array,
    ACTIONS(32), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [117] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_import,
    ACTIONS(54), 1,
      sym__identifier_without_ver,
    STATE(22), 1,
      sym__identifier_with_ver,
    STATE(24), 1,
      sym_identifier,
    STATE(50), 1,
      sym_command,
    STATE(77), 1,
      sym_identifier_without_ver,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(5), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [154] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(61), 1,
      sym__left_parantheses,
    ACTIONS(63), 1,
      sym__right_parantheses,
    ACTIONS(65), 1,
      sym__dot,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    ACTIONS(71), 1,
      sym__percent_sign,
    STATE(15), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(43), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [192] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_EQ,
    ACTIONS(75), 1,
      anon_sym_AT,
    ACTIONS(77), 12,
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
  [216] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym__identifier_with_ver,
    STATE(24), 1,
      sym_identifier,
    STATE(50), 1,
      sym_command,
    STATE(77), 1,
      sym_identifier_without_ver,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(11), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [252] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(81), 1,
      sym__right_curly_brace,
    STATE(22), 1,
      sym__identifier_with_ver,
    STATE(24), 1,
      sym_identifier,
    STATE(50), 1,
      sym_command,
    STATE(77), 1,
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
  [288] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(83), 1,
      sym__right_curly_brace,
    STATE(22), 1,
      sym__identifier_with_ver,
    STATE(24), 1,
      sym_identifier,
    STATE(50), 1,
      sym_command,
    STATE(77), 1,
      sym_identifier_without_ver,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(5), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [324] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym__identifier_with_ver,
    STATE(24), 1,
      sym_identifier,
    STATE(50), 1,
      sym_command,
    STATE(77), 1,
      sym_identifier_without_ver,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(5), 5,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
      aux_sym__body_repeat1,
  [360] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym__identifier_without_ver,
    STATE(22), 1,
      sym__identifier_with_ver,
    STATE(24), 1,
      sym_identifier,
    STATE(50), 1,
      sym_command,
    STATE(74), 1,
      sym_body,
    STATE(77), 1,
      sym_identifier_without_ver,
    STATE(2), 2,
      sym__path,
      sym_nested_identifier,
    STATE(9), 4,
      sym__expr,
      sym_variable_def,
      sym_import_expr,
      sym_namespace,
  [395] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(90), 1,
      sym__left_square_bracket,
    ACTIONS(93), 1,
      sym__left_parantheses,
    ACTIONS(96), 1,
      sym__right_parantheses,
    ACTIONS(98), 1,
      sym__single_quotation_mark,
    ACTIONS(101), 1,
      sym__double_quotation_mark,
    ACTIONS(104), 1,
      sym__percent_sign,
    STATE(13), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(43), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_AT,
    ACTIONS(77), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      sym_number,
      sym__left_square_bracket,
      sym__right_curly_brace,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [453] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(61), 1,
      sym__left_parantheses,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    ACTIONS(71), 1,
      sym__percent_sign,
    ACTIONS(111), 1,
      sym__right_parantheses,
    STATE(13), 3,
      sym_variable,
      sym_primitive,
      aux_sym_command_repeat1,
    STATE(43), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      sym_number,
      sym__left_square_bracket,
      sym__right_curly_brace,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__comma,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [508] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_AT,
    ACTIONS(77), 11,
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
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      sym_number,
      sym__left_square_bracket,
      sym__right_curly_brace,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(117), 10,
      ts_builtin_sym_end,
      sym_number,
      sym__left_square_bracket,
      sym__right_curly_brace,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(121), 10,
      ts_builtin_sym_end,
      sym_number,
      sym__left_square_bracket,
      sym__right_curly_brace,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__comma,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(125), 10,
      ts_builtin_sym_end,
      sym_number,
      sym__left_square_bracket,
      sym__right_curly_brace,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__comma,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [608] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(77), 12,
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
  [626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(129), 10,
      ts_builtin_sym_end,
      sym_number,
      sym__left_square_bracket,
      sym__right_curly_brace,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__dot,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [646] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym__left_curly_brace,
    ACTIONS(133), 11,
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
  [666] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(119), 12,
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
  [684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_import,
      sym__identifier_without_ver,
    ACTIONS(137), 10,
      ts_builtin_sym_end,
      sym_number,
      sym__left_square_bracket,
      sym__right_curly_brace,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__comma,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [704] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(131), 11,
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
  [721] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_number,
    ACTIONS(143), 9,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [739] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(145), 10,
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
  [755] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(123), 10,
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
  [771] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(127), 10,
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
  [787] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(147), 10,
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
  [803] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(139), 10,
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
  [819] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(149), 10,
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
  [835] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(115), 10,
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
  [851] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(151), 10,
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
  [867] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    ACTIONS(153), 1,
      sym_number,
    ACTIONS(155), 1,
      sym__right_square_bracket,
    STATE(39), 1,
      aux_sym_array_repeat1,
    STATE(80), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [894] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    ACTIONS(153), 1,
      sym_number,
    ACTIONS(157), 1,
      sym__right_square_bracket,
    STATE(37), 1,
      aux_sym_array_repeat1,
    STATE(80), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [921] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_number,
    ACTIONS(162), 1,
      sym__left_square_bracket,
    ACTIONS(165), 1,
      sym__right_square_bracket,
    ACTIONS(167), 1,
      sym__single_quotation_mark,
    ACTIONS(170), 1,
      sym__double_quotation_mark,
    STATE(39), 1,
      aux_sym_array_repeat1,
    STATE(80), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [948] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    ACTIONS(153), 1,
      sym_number,
    ACTIONS(173), 1,
      sym__right_square_bracket,
    STATE(39), 1,
      aux_sym_array_repeat1,
    STATE(80), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [975] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    ACTIONS(153), 1,
      sym_number,
    ACTIONS(175), 1,
      sym__right_square_bracket,
    STATE(40), 1,
      aux_sym_array_repeat1,
    STATE(80), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 7,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 7,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 7,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__left_square_bracket,
    ACTIONS(67), 1,
      sym__single_quotation_mark,
    ACTIONS(69), 1,
      sym__double_quotation_mark,
    ACTIONS(183), 1,
      sym_number,
    STATE(58), 3,
      sym__primitive,
      sym_string,
      sym_array,
  [1062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 7,
      sym_number,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_number,
    ACTIONS(189), 6,
      sym__left_square_bracket,
      sym__left_parantheses,
      sym__right_parantheses,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
      sym__percent_sign,
  [1090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__identifier_without_ver,
    STATE(18), 1,
      sym__identifier_with_ver,
    STATE(81), 1,
      sym_command,
    STATE(6), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [1108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__identifier_without_ver,
    STATE(18), 1,
      sym__identifier_with_ver,
    STATE(78), 1,
      sym_command,
    STATE(6), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [1126] = 3,
    ACTIONS(25), 1,
      sym_comment,
    STATE(57), 1,
      sym__newline,
    ACTIONS(193), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_LF_CR,
      anon_sym_,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 5,
      sym_number,
      sym__left_square_bracket,
      sym__right_square_bracket,
      sym__single_quotation_mark,
      sym__double_quotation_mark,
  [1150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym__dot,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(197), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__identifier_without_ver,
    STATE(18), 1,
      sym__identifier_with_ver,
    STATE(52), 3,
      sym__path,
      sym_identifier,
      sym_nested_identifier,
  [1180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(203), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(207), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__identifier_without_ver,
    ACTIONS(209), 1,
      sym_wildcard,
    STATE(18), 1,
      sym__identifier_with_ver,
    STATE(23), 1,
      sym_identifier,
  [1220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(213), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym__right_curly_brace,
    ACTIONS(217), 2,
      anon_sym_import,
      sym__identifier_without_ver,
  [1244] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_text,
    ACTIONS(221), 1,
      sym__percent_sign,
    STATE(29), 1,
      sym_percent_sign,
  [1257] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_string_token1,
    ACTIONS(225), 1,
      sym__double_quotation_mark,
    STATE(61), 1,
      aux_sym_string_repeat1,
  [1270] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_string_token1,
    ACTIONS(229), 1,
      sym__double_quotation_mark,
    STATE(67), 1,
      aux_sym_string_repeat1,
  [1283] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__single_quotation_mark,
    ACTIONS(231), 1,
      aux_sym_string_token2,
    STATE(69), 1,
      aux_sym_string_repeat2,
  [1296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__identifier_without_ver,
    STATE(22), 1,
      sym__identifier_with_ver,
    STATE(27), 1,
      sym_identifier,
  [1309] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(231), 1,
      aux_sym_string_token2,
    ACTIONS(235), 1,
      sym__single_quotation_mark,
    STATE(69), 1,
      aux_sym_string_repeat2,
  [1322] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym_string_token2,
    ACTIONS(239), 1,
      sym__single_quotation_mark,
    STATE(64), 1,
      aux_sym_string_repeat2,
  [1335] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__double_quotation_mark,
    ACTIONS(241), 1,
      aux_sym_string_token1,
    STATE(72), 1,
      aux_sym_string_repeat1,
  [1348] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym_string_token1,
    ACTIONS(246), 1,
      sym__double_quotation_mark,
    STATE(67), 1,
      aux_sym_string_repeat1,
  [1361] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_text,
    ACTIONS(250), 1,
      sym__percent_sign,
    STATE(46), 1,
      sym_percent_sign,
  [1374] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym_string_token2,
    ACTIONS(255), 1,
      sym__single_quotation_mark,
    STATE(69), 1,
      aux_sym_string_repeat2,
  [1387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__identifier_without_ver,
    STATE(18), 1,
      sym__identifier_with_ver,
    STATE(23), 1,
      sym_identifier,
  [1400] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__single_quotation_mark,
    ACTIONS(257), 1,
      aux_sym_string_token2,
    STATE(62), 1,
      aux_sym_string_repeat2,
  [1413] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_string_token1,
    ACTIONS(235), 1,
      sym__double_quotation_mark,
    STATE(67), 1,
      aux_sym_string_repeat1,
  [1426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__identifier_without_ver,
  [1433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__right_curly_brace,
  [1440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
  [1447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
  [1454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_EQ,
  [1461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__right_parantheses,
  [1468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__identifier_without_ver,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym__comma,
  [1482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym__right_parantheses,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 360,
  [SMALL_STATE(13)] = 395,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 453,
  [SMALL_STATE(16)] = 488,
  [SMALL_STATE(17)] = 508,
  [SMALL_STATE(18)] = 528,
  [SMALL_STATE(19)] = 548,
  [SMALL_STATE(20)] = 568,
  [SMALL_STATE(21)] = 588,
  [SMALL_STATE(22)] = 608,
  [SMALL_STATE(23)] = 626,
  [SMALL_STATE(24)] = 646,
  [SMALL_STATE(25)] = 666,
  [SMALL_STATE(26)] = 684,
  [SMALL_STATE(27)] = 704,
  [SMALL_STATE(28)] = 721,
  [SMALL_STATE(29)] = 739,
  [SMALL_STATE(30)] = 755,
  [SMALL_STATE(31)] = 771,
  [SMALL_STATE(32)] = 787,
  [SMALL_STATE(33)] = 803,
  [SMALL_STATE(34)] = 819,
  [SMALL_STATE(35)] = 835,
  [SMALL_STATE(36)] = 851,
  [SMALL_STATE(37)] = 867,
  [SMALL_STATE(38)] = 894,
  [SMALL_STATE(39)] = 921,
  [SMALL_STATE(40)] = 948,
  [SMALL_STATE(41)] = 975,
  [SMALL_STATE(42)] = 1002,
  [SMALL_STATE(43)] = 1015,
  [SMALL_STATE(44)] = 1028,
  [SMALL_STATE(45)] = 1041,
  [SMALL_STATE(46)] = 1062,
  [SMALL_STATE(47)] = 1075,
  [SMALL_STATE(48)] = 1090,
  [SMALL_STATE(49)] = 1108,
  [SMALL_STATE(50)] = 1126,
  [SMALL_STATE(51)] = 1139,
  [SMALL_STATE(52)] = 1150,
  [SMALL_STATE(53)] = 1165,
  [SMALL_STATE(54)] = 1180,
  [SMALL_STATE(55)] = 1192,
  [SMALL_STATE(56)] = 1204,
  [SMALL_STATE(57)] = 1220,
  [SMALL_STATE(58)] = 1232,
  [SMALL_STATE(59)] = 1244,
  [SMALL_STATE(60)] = 1257,
  [SMALL_STATE(61)] = 1270,
  [SMALL_STATE(62)] = 1283,
  [SMALL_STATE(63)] = 1296,
  [SMALL_STATE(64)] = 1309,
  [SMALL_STATE(65)] = 1322,
  [SMALL_STATE(66)] = 1335,
  [SMALL_STATE(67)] = 1348,
  [SMALL_STATE(68)] = 1361,
  [SMALL_STATE(69)] = 1374,
  [SMALL_STATE(70)] = 1387,
  [SMALL_STATE(71)] = 1400,
  [SMALL_STATE(72)] = 1413,
  [SMALL_STATE(73)] = 1426,
  [SMALL_STATE(74)] = 1433,
  [SMALL_STATE(75)] = 1440,
  [SMALL_STATE(76)] = 1447,
  [SMALL_STATE(77)] = 1454,
  [SMALL_STATE(78)] = 1461,
  [SMALL_STATE(79)] = 1468,
  [SMALL_STATE(80)] = 1475,
  [SMALL_STATE(81)] = 1482,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(36),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(41),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(48),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(65),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(66),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(59),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2), SHIFT_REPEAT(53),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_without_ver, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(38),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(49),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(71),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(60),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(68),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_with_ver, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_with_ver, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_identifier, 3, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_identifier, 3, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__path, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_sign, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(80),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(71),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(60),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 6),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_sign, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_expr, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_expr, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 4, .production_id = 7),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 4, .production_id = 7),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_def, 3, .production_id = 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(67),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(69),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [263] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
