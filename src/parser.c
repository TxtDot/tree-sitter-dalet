#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_comment = 1,
  sym_empty_line = 2,
  anon_sym_LBRACK_LBRACK = 3,
  anon_sym_RBRACK_RBRACK = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_tag = 7,
  aux_sym_number_argument_token1 = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_text_argument_token1 = 10,
  anon_sym_BSLASH_BSLASH = 11,
  anon_sym_BSLASH_DQUOTE = 12,
  anon_sym_LBRACE_GT = 13,
  anon_sym_table = 14,
  aux_sym_table_syntax_token1 = 15,
  anon_sym_BSLASH_RBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_LBRACE_DASH = 18,
  anon_sym_LBRACE_TILDE = 19,
  anon_sym_LBRACE_POUND = 20,
  anon_sym_LBRACE = 21,
  anon_sym_COLON = 22,
  aux_sym_text_body_token1 = 23,
  sym_text_tag = 24,
  sym_source_file = 25,
  sym__token = 26,
  sym_el_tags = 27,
  sym_tags_body = 28,
  sym_argument = 29,
  sym_number_argument = 30,
  sym_text_argument = 31,
  sym_textual = 32,
  sym_table_syntax = 33,
  sym_paragraph = 34,
  sym_mlmstext = 35,
  sym_rmltext = 36,
  sym_mltext = 37,
  sym_text_body = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_text_argument_repeat1 = 40,
  aux_sym_table_syntax_repeat1 = 41,
  alias_sym_mlms_number = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_empty_line] = "empty_line",
  [anon_sym_LBRACK_LBRACK] = "symbol_open",
  [anon_sym_RBRACK_RBRACK] = "symbol_close",
  [anon_sym_LBRACK] = "symbol",
  [anon_sym_RBRACK] = "symbol_close",
  [sym_tag] = "tag",
  [aux_sym_number_argument_token1] = "number_argument_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_argument_token1] = "text_argument_token1",
  [anon_sym_BSLASH_BSLASH] = "escape",
  [anon_sym_BSLASH_DQUOTE] = "escape",
  [anon_sym_LBRACE_GT] = "symbol_open",
  [anon_sym_table] = "table_parser_id",
  [aux_sym_table_syntax_token1] = "table_syntax_token1",
  [anon_sym_BSLASH_RBRACE] = "escape",
  [anon_sym_RBRACE] = "symbol_close",
  [anon_sym_LBRACE_DASH] = "symbol_open",
  [anon_sym_LBRACE_TILDE] = "symbol_open",
  [anon_sym_LBRACE_POUND] = "symbol_open",
  [anon_sym_LBRACE] = "symbol_open",
  [anon_sym_COLON] = "text_body_open",
  [aux_sym_text_body_token1] = "text_body_token1",
  [sym_text_tag] = "text_tag",
  [sym_source_file] = "source_file",
  [sym__token] = "_token",
  [sym_el_tags] = "el_tags",
  [sym_tags_body] = "tags_body",
  [sym_argument] = "argument",
  [sym_number_argument] = "number_argument",
  [sym_text_argument] = "text_argument",
  [sym_textual] = "textual",
  [sym_table_syntax] = "table_syntax",
  [sym_paragraph] = "paragraph",
  [sym_mlmstext] = "mlmstext",
  [sym_rmltext] = "rmltext",
  [sym_mltext] = "mltext",
  [sym_text_body] = "text_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_text_argument_repeat1] = "text_argument_repeat1",
  [aux_sym_table_syntax_repeat1] = "table_syntax_repeat1",
  [alias_sym_mlms_number] = "mlms_number",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_empty_line] = sym_empty_line,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_tag] = sym_tag,
  [aux_sym_number_argument_token1] = aux_sym_number_argument_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_argument_token1] = aux_sym_text_argument_token1,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_BSLASH,
  [anon_sym_LBRACE_GT] = anon_sym_LBRACK_LBRACK,
  [anon_sym_table] = anon_sym_table,
  [aux_sym_table_syntax_token1] = aux_sym_table_syntax_token1,
  [anon_sym_BSLASH_RBRACE] = anon_sym_BSLASH_BSLASH,
  [anon_sym_RBRACE] = anon_sym_RBRACK_RBRACK,
  [anon_sym_LBRACE_DASH] = anon_sym_LBRACK_LBRACK,
  [anon_sym_LBRACE_TILDE] = anon_sym_LBRACK_LBRACK,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACK_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACK_LBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_text_body_token1] = aux_sym_text_body_token1,
  [sym_text_tag] = sym_text_tag,
  [sym_source_file] = sym_source_file,
  [sym__token] = sym__token,
  [sym_el_tags] = sym_el_tags,
  [sym_tags_body] = sym_tags_body,
  [sym_argument] = sym_argument,
  [sym_number_argument] = sym_number_argument,
  [sym_text_argument] = sym_text_argument,
  [sym_textual] = sym_textual,
  [sym_table_syntax] = sym_table_syntax,
  [sym_paragraph] = sym_paragraph,
  [sym_mlmstext] = sym_mlmstext,
  [sym_rmltext] = sym_rmltext,
  [sym_mltext] = sym_mltext,
  [sym_text_body] = sym_text_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_text_argument_repeat1] = aux_sym_text_argument_repeat1,
  [aux_sym_table_syntax_repeat1] = aux_sym_table_syntax_repeat1,
  [alias_sym_mlms_number] = alias_sym_mlms_number,
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
  [sym_empty_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_table_syntax_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_TILDE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_body_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_text_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_el_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_tags_body] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_number_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_text_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_textual] = {
    .visible = true,
    .named = true,
  },
  [sym_table_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_mlmstext] = {
    .visible = true,
    .named = true,
  },
  [sym_rmltext] = {
    .visible = true,
    .named = true,
  },
  [sym_mltext] = {
    .visible = true,
    .named = true,
  },
  [sym_text_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_syntax_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_mlms_number] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_mlms_number,
  },
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
  [7] = 4,
  [8] = 3,
  [9] = 5,
  [10] = 6,
  [11] = 4,
  [12] = 3,
  [13] = 2,
  [14] = 5,
  [15] = 15,
  [16] = 2,
  [17] = 6,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
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
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 36,
  [40] = 35,
  [41] = 18,
  [42] = 34,
  [43] = 29,
  [44] = 27,
  [45] = 26,
  [46] = 24,
  [47] = 47,
  [48] = 23,
  [49] = 49,
  [50] = 20,
  [51] = 19,
  [52] = 22,
  [53] = 25,
  [54] = 28,
  [55] = 30,
  [56] = 32,
  [57] = 33,
  [58] = 34,
  [59] = 35,
  [60] = 37,
  [61] = 36,
  [62] = 47,
  [63] = 29,
  [64] = 27,
  [65] = 26,
  [66] = 24,
  [67] = 47,
  [68] = 23,
  [69] = 49,
  [70] = 20,
  [71] = 49,
  [72] = 22,
  [73] = 25,
  [74] = 28,
  [75] = 30,
  [76] = 32,
  [77] = 33,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 78,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 84,
  [89] = 81,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 78,
  [95] = 93,
  [96] = 92,
  [97] = 79,
  [98] = 98,
  [99] = 86,
  [100] = 87,
  [101] = 85,
  [102] = 98,
  [103] = 81,
  [104] = 87,
  [105] = 84,
  [106] = 91,
  [107] = 90,
  [108] = 91,
  [109] = 92,
  [110] = 93,
  [111] = 85,
  [112] = 86,
  [113] = 90,
  [114] = 79,
  [115] = 98,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 117,
  [120] = 117,
  [121] = 121,
  [122] = 116,
  [123] = 118,
  [124] = 116,
  [125] = 118,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        '\\', 11,
        ']', 65,
        'a', 66,
        'b', 67,
        'c', 15,
        'd', 30,
        'e', 33,
        'f', 43,
        'h', 71,
        'i', 69,
        'l', 31,
        'm', 27,
        'n', 16,
        'o', 33,
        'p', 72,
        'r', 39,
        's', 74,
        't', 17,
        'u', 33,
        '{', 89,
        '}', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 59,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 60,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        ']', 101,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 4,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        ']', 101,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '\n', 7,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        ']', 65,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 61,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        ']', 65,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '}') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '}') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '}') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'v') ADVANCE(20);
      END_STATE();
    case 54:
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'b' ||
          lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '\n', 1,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_empty_line);
      ADVANCE_MAP(
        '\n', 59,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_empty_line);
      ADVANCE_MAP(
        '\n', 60,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_empty_line);
      ADVANCE_MAP(
        '\n', 61,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'q' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'q' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_number_argument_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_text_argument_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_table_syntax_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE_TILDE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == '~') ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '~') ADVANCE(87);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_text_tag);
      ADVANCE_MAP(
        '\n', 1,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_text_tag);
      ADVANCE_MAP(
        '\n', 59,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_text_tag);
      ADVANCE_MAP(
        '\n', 60,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        ']', 101,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_text_tag);
      ADVANCE_MAP(
        '\n', 4,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        ']', 101,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_text_tag);
      ADVANCE_MAP(
        '\n', 7,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        ']', 65,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_text_tag);
      ADVANCE_MAP(
        '\n', 61,
        '"', 77,
        '#', 58,
        ':', 91,
        '[', 64,
        ']', 65,
        'a', 66,
        'b', 68,
        'c', 103,
        'd', 115,
        'e', 118,
        'f', 127,
        'h', 71,
        'i', 70,
        'l', 116,
        'm', 113,
        'n', 104,
        'o', 118,
        'p', 73,
        'r', 123,
        's', 75,
        't', 105,
        'u', 118,
        '{', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'g') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'k') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'v') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'w') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'b' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 56},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 56},
  [23] = {.lex_state = 56},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 56},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 56},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 56},
  [33] = {.lex_state = 56},
  [34] = {.lex_state = 56},
  [35] = {.lex_state = 56},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 56},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 56},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 56},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 56},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 56},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 13},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 13},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 13},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 51},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 51},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 51},
  [125] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [aux_sym_number_argument_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_GT] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(121),
    [sym__token] = STATE(15),
    [sym_el_tags] = STATE(15),
    [sym_tags_body] = STATE(15),
    [sym_argument] = STATE(15),
    [sym_number_argument] = STATE(71),
    [sym_text_argument] = STATE(71),
    [sym_textual] = STATE(15),
    [sym_table_syntax] = STATE(23),
    [sym_paragraph] = STATE(23),
    [sym_mlmstext] = STATE(23),
    [sym_rmltext] = STATE(23),
    [sym_mltext] = STATE(23),
    [sym_text_body] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_empty_line] = ACTIONS(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_tag] = ACTIONS(5),
    [aux_sym_number_argument_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACE_GT] = ACTIONS(15),
    [anon_sym_LBRACE_DASH] = ACTIONS(17),
    [anon_sym_LBRACE_TILDE] = ACTIONS(19),
    [anon_sym_LBRACE_POUND] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [sym_text_tag] = ACTIONS(27),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_el_tags] = STATE(2),
    [sym_tags_body] = STATE(2),
    [sym_argument] = STATE(2),
    [sym_number_argument] = STATE(71),
    [sym_text_argument] = STATE(71),
    [sym_textual] = STATE(2),
    [sym_table_syntax] = STATE(23),
    [sym_paragraph] = STATE(23),
    [sym_mlmstext] = STATE(23),
    [sym_rmltext] = STATE(23),
    [sym_mltext] = STATE(23),
    [sym_text_body] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [sym_empty_line] = ACTIONS(31),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_tag] = ACTIONS(31),
    [aux_sym_number_argument_token1] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE_GT] = ACTIONS(46),
    [anon_sym_LBRACE_DASH] = ACTIONS(49),
    [anon_sym_LBRACE_TILDE] = ACTIONS(52),
    [anon_sym_LBRACE_POUND] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_text_tag] = ACTIONS(64),
  },
  [3] = {
    [sym__token] = STATE(17),
    [sym_el_tags] = STATE(17),
    [sym_tags_body] = STATE(17),
    [sym_argument] = STATE(17),
    [sym_number_argument] = STATE(49),
    [sym_text_argument] = STATE(49),
    [sym_textual] = STATE(17),
    [sym_table_syntax] = STATE(48),
    [sym_paragraph] = STATE(48),
    [sym_mlmstext] = STATE(48),
    [sym_rmltext] = STATE(48),
    [sym_mltext] = STATE(48),
    [sym_text_body] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_comment] = ACTIONS(67),
    [sym_empty_line] = ACTIONS(67),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym_tag] = ACTIONS(67),
    [aux_sym_number_argument_token1] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_LBRACE_GT] = ACTIONS(79),
    [anon_sym_LBRACE_DASH] = ACTIONS(81),
    [anon_sym_LBRACE_TILDE] = ACTIONS(83),
    [anon_sym_LBRACE_POUND] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(89),
    [sym_text_tag] = ACTIONS(91),
  },
  [4] = {
    [sym__token] = STATE(14),
    [sym_el_tags] = STATE(14),
    [sym_tags_body] = STATE(14),
    [sym_argument] = STATE(14),
    [sym_number_argument] = STATE(69),
    [sym_text_argument] = STATE(69),
    [sym_textual] = STATE(14),
    [sym_table_syntax] = STATE(68),
    [sym_paragraph] = STATE(68),
    [sym_mlmstext] = STATE(68),
    [sym_rmltext] = STATE(68),
    [sym_mltext] = STATE(68),
    [sym_text_body] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(93),
    [sym_empty_line] = ACTIONS(93),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_tag] = ACTIONS(93),
    [aux_sym_number_argument_token1] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LBRACE_GT] = ACTIONS(105),
    [anon_sym_LBRACE_DASH] = ACTIONS(107),
    [anon_sym_LBRACE_TILDE] = ACTIONS(109),
    [anon_sym_LBRACE_POUND] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [sym_text_tag] = ACTIONS(117),
  },
  [5] = {
    [sym__token] = STATE(13),
    [sym_el_tags] = STATE(13),
    [sym_tags_body] = STATE(13),
    [sym_argument] = STATE(13),
    [sym_number_argument] = STATE(69),
    [sym_text_argument] = STATE(69),
    [sym_textual] = STATE(13),
    [sym_table_syntax] = STATE(68),
    [sym_paragraph] = STATE(68),
    [sym_mlmstext] = STATE(68),
    [sym_rmltext] = STATE(68),
    [sym_mltext] = STATE(68),
    [sym_text_body] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(119),
    [sym_empty_line] = ACTIONS(119),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym_tag] = ACTIONS(119),
    [aux_sym_number_argument_token1] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LBRACE_GT] = ACTIONS(105),
    [anon_sym_LBRACE_DASH] = ACTIONS(107),
    [anon_sym_LBRACE_TILDE] = ACTIONS(109),
    [anon_sym_LBRACE_POUND] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [sym_text_tag] = ACTIONS(117),
  },
  [6] = {
    [sym__token] = STATE(16),
    [sym_el_tags] = STATE(16),
    [sym_tags_body] = STATE(16),
    [sym_argument] = STATE(16),
    [sym_number_argument] = STATE(49),
    [sym_text_argument] = STATE(49),
    [sym_textual] = STATE(16),
    [sym_table_syntax] = STATE(48),
    [sym_paragraph] = STATE(48),
    [sym_mlmstext] = STATE(48),
    [sym_rmltext] = STATE(48),
    [sym_mltext] = STATE(48),
    [sym_text_body] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(123),
    [sym_empty_line] = ACTIONS(123),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym_tag] = ACTIONS(123),
    [aux_sym_number_argument_token1] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_LBRACE_GT] = ACTIONS(79),
    [anon_sym_LBRACE_DASH] = ACTIONS(81),
    [anon_sym_LBRACE_TILDE] = ACTIONS(83),
    [anon_sym_LBRACE_POUND] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(89),
    [sym_text_tag] = ACTIONS(91),
  },
  [7] = {
    [sym__token] = STATE(5),
    [sym_el_tags] = STATE(5),
    [sym_tags_body] = STATE(5),
    [sym_argument] = STATE(5),
    [sym_number_argument] = STATE(69),
    [sym_text_argument] = STATE(69),
    [sym_textual] = STATE(5),
    [sym_table_syntax] = STATE(68),
    [sym_paragraph] = STATE(68),
    [sym_mlmstext] = STATE(68),
    [sym_rmltext] = STATE(68),
    [sym_mltext] = STATE(68),
    [sym_text_body] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(127),
    [sym_empty_line] = ACTIONS(127),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_tag] = ACTIONS(127),
    [aux_sym_number_argument_token1] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LBRACE_GT] = ACTIONS(105),
    [anon_sym_LBRACE_DASH] = ACTIONS(107),
    [anon_sym_LBRACE_TILDE] = ACTIONS(109),
    [anon_sym_LBRACE_POUND] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [sym_text_tag] = ACTIONS(117),
  },
  [8] = {
    [sym__token] = STATE(6),
    [sym_el_tags] = STATE(6),
    [sym_tags_body] = STATE(6),
    [sym_argument] = STATE(6),
    [sym_number_argument] = STATE(49),
    [sym_text_argument] = STATE(49),
    [sym_textual] = STATE(6),
    [sym_table_syntax] = STATE(48),
    [sym_paragraph] = STATE(48),
    [sym_mlmstext] = STATE(48),
    [sym_rmltext] = STATE(48),
    [sym_mltext] = STATE(48),
    [sym_text_body] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(131),
    [sym_empty_line] = ACTIONS(131),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym_tag] = ACTIONS(131),
    [aux_sym_number_argument_token1] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_LBRACE_GT] = ACTIONS(79),
    [anon_sym_LBRACE_DASH] = ACTIONS(81),
    [anon_sym_LBRACE_TILDE] = ACTIONS(83),
    [anon_sym_LBRACE_POUND] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(89),
    [sym_text_tag] = ACTIONS(91),
  },
  [9] = {
    [sym__token] = STATE(13),
    [sym_el_tags] = STATE(13),
    [sym_tags_body] = STATE(13),
    [sym_argument] = STATE(13),
    [sym_number_argument] = STATE(69),
    [sym_text_argument] = STATE(69),
    [sym_textual] = STATE(13),
    [sym_table_syntax] = STATE(68),
    [sym_paragraph] = STATE(68),
    [sym_mlmstext] = STATE(68),
    [sym_rmltext] = STATE(68),
    [sym_mltext] = STATE(68),
    [sym_text_body] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(119),
    [sym_empty_line] = ACTIONS(119),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym_tag] = ACTIONS(119),
    [aux_sym_number_argument_token1] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LBRACE_GT] = ACTIONS(105),
    [anon_sym_LBRACE_DASH] = ACTIONS(107),
    [anon_sym_LBRACE_TILDE] = ACTIONS(109),
    [anon_sym_LBRACE_POUND] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [sym_text_tag] = ACTIONS(117),
  },
  [10] = {
    [sym__token] = STATE(16),
    [sym_el_tags] = STATE(16),
    [sym_tags_body] = STATE(16),
    [sym_argument] = STATE(16),
    [sym_number_argument] = STATE(49),
    [sym_text_argument] = STATE(49),
    [sym_textual] = STATE(16),
    [sym_table_syntax] = STATE(48),
    [sym_paragraph] = STATE(48),
    [sym_mlmstext] = STATE(48),
    [sym_rmltext] = STATE(48),
    [sym_mltext] = STATE(48),
    [sym_text_body] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(123),
    [sym_empty_line] = ACTIONS(123),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym_tag] = ACTIONS(123),
    [aux_sym_number_argument_token1] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_LBRACE_GT] = ACTIONS(79),
    [anon_sym_LBRACE_DASH] = ACTIONS(81),
    [anon_sym_LBRACE_TILDE] = ACTIONS(83),
    [anon_sym_LBRACE_POUND] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(89),
    [sym_text_tag] = ACTIONS(91),
  },
  [11] = {
    [sym__token] = STATE(9),
    [sym_el_tags] = STATE(9),
    [sym_tags_body] = STATE(9),
    [sym_argument] = STATE(9),
    [sym_number_argument] = STATE(69),
    [sym_text_argument] = STATE(69),
    [sym_textual] = STATE(9),
    [sym_table_syntax] = STATE(68),
    [sym_paragraph] = STATE(68),
    [sym_mlmstext] = STATE(68),
    [sym_rmltext] = STATE(68),
    [sym_mltext] = STATE(68),
    [sym_text_body] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(139),
    [sym_empty_line] = ACTIONS(139),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_tag] = ACTIONS(139),
    [aux_sym_number_argument_token1] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LBRACE_GT] = ACTIONS(105),
    [anon_sym_LBRACE_DASH] = ACTIONS(107),
    [anon_sym_LBRACE_TILDE] = ACTIONS(109),
    [anon_sym_LBRACE_POUND] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [sym_text_tag] = ACTIONS(117),
  },
  [12] = {
    [sym__token] = STATE(10),
    [sym_el_tags] = STATE(10),
    [sym_tags_body] = STATE(10),
    [sym_argument] = STATE(10),
    [sym_number_argument] = STATE(49),
    [sym_text_argument] = STATE(49),
    [sym_textual] = STATE(10),
    [sym_table_syntax] = STATE(48),
    [sym_paragraph] = STATE(48),
    [sym_mlmstext] = STATE(48),
    [sym_rmltext] = STATE(48),
    [sym_mltext] = STATE(48),
    [sym_text_body] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(143),
    [sym_empty_line] = ACTIONS(143),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym_tag] = ACTIONS(143),
    [aux_sym_number_argument_token1] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_LBRACE_GT] = ACTIONS(79),
    [anon_sym_LBRACE_DASH] = ACTIONS(81),
    [anon_sym_LBRACE_TILDE] = ACTIONS(83),
    [anon_sym_LBRACE_POUND] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(89),
    [sym_text_tag] = ACTIONS(91),
  },
  [13] = {
    [sym__token] = STATE(13),
    [sym_el_tags] = STATE(13),
    [sym_tags_body] = STATE(13),
    [sym_argument] = STATE(13),
    [sym_number_argument] = STATE(69),
    [sym_text_argument] = STATE(69),
    [sym_textual] = STATE(13),
    [sym_table_syntax] = STATE(68),
    [sym_paragraph] = STATE(68),
    [sym_mlmstext] = STATE(68),
    [sym_rmltext] = STATE(68),
    [sym_mltext] = STATE(68),
    [sym_text_body] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(147),
    [sym_empty_line] = ACTIONS(147),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(156),
    [sym_tag] = ACTIONS(147),
    [aux_sym_number_argument_token1] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [anon_sym_LBRACE_GT] = ACTIONS(164),
    [anon_sym_LBRACE_DASH] = ACTIONS(167),
    [anon_sym_LBRACE_TILDE] = ACTIONS(170),
    [anon_sym_LBRACE_POUND] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(179),
    [sym_text_tag] = ACTIONS(182),
  },
  [14] = {
    [sym__token] = STATE(13),
    [sym_el_tags] = STATE(13),
    [sym_tags_body] = STATE(13),
    [sym_argument] = STATE(13),
    [sym_number_argument] = STATE(69),
    [sym_text_argument] = STATE(69),
    [sym_textual] = STATE(13),
    [sym_table_syntax] = STATE(68),
    [sym_paragraph] = STATE(68),
    [sym_mlmstext] = STATE(68),
    [sym_rmltext] = STATE(68),
    [sym_mltext] = STATE(68),
    [sym_text_body] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym_comment] = ACTIONS(119),
    [sym_empty_line] = ACTIONS(119),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(185),
    [sym_tag] = ACTIONS(119),
    [aux_sym_number_argument_token1] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_LBRACE_GT] = ACTIONS(105),
    [anon_sym_LBRACE_DASH] = ACTIONS(107),
    [anon_sym_LBRACE_TILDE] = ACTIONS(109),
    [anon_sym_LBRACE_POUND] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(115),
    [sym_text_tag] = ACTIONS(117),
  },
  [15] = {
    [sym__token] = STATE(2),
    [sym_el_tags] = STATE(2),
    [sym_tags_body] = STATE(2),
    [sym_argument] = STATE(2),
    [sym_number_argument] = STATE(71),
    [sym_text_argument] = STATE(71),
    [sym_textual] = STATE(2),
    [sym_table_syntax] = STATE(23),
    [sym_paragraph] = STATE(23),
    [sym_mlmstext] = STATE(23),
    [sym_rmltext] = STATE(23),
    [sym_mltext] = STATE(23),
    [sym_text_body] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_comment] = ACTIONS(189),
    [sym_empty_line] = ACTIONS(189),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_tag] = ACTIONS(189),
    [aux_sym_number_argument_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_LBRACE_GT] = ACTIONS(15),
    [anon_sym_LBRACE_DASH] = ACTIONS(17),
    [anon_sym_LBRACE_TILDE] = ACTIONS(19),
    [anon_sym_LBRACE_POUND] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [sym_text_tag] = ACTIONS(27),
  },
  [16] = {
    [sym__token] = STATE(16),
    [sym_el_tags] = STATE(16),
    [sym_tags_body] = STATE(16),
    [sym_argument] = STATE(16),
    [sym_number_argument] = STATE(49),
    [sym_text_argument] = STATE(49),
    [sym_textual] = STATE(16),
    [sym_table_syntax] = STATE(48),
    [sym_paragraph] = STATE(48),
    [sym_mlmstext] = STATE(48),
    [sym_rmltext] = STATE(48),
    [sym_mltext] = STATE(48),
    [sym_text_body] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(191),
    [sym_empty_line] = ACTIONS(191),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym_tag] = ACTIONS(191),
    [aux_sym_number_argument_token1] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE_GT] = ACTIONS(206),
    [anon_sym_LBRACE_DASH] = ACTIONS(209),
    [anon_sym_LBRACE_TILDE] = ACTIONS(212),
    [anon_sym_LBRACE_POUND] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(221),
    [sym_text_tag] = ACTIONS(224),
  },
  [17] = {
    [sym__token] = STATE(16),
    [sym_el_tags] = STATE(16),
    [sym_tags_body] = STATE(16),
    [sym_argument] = STATE(16),
    [sym_number_argument] = STATE(49),
    [sym_text_argument] = STATE(49),
    [sym_textual] = STATE(16),
    [sym_table_syntax] = STATE(48),
    [sym_paragraph] = STATE(48),
    [sym_mlmstext] = STATE(48),
    [sym_rmltext] = STATE(48),
    [sym_mltext] = STATE(48),
    [sym_text_body] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(16),
    [sym_comment] = ACTIONS(123),
    [sym_empty_line] = ACTIONS(123),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym_tag] = ACTIONS(123),
    [aux_sym_number_argument_token1] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_LBRACE_GT] = ACTIONS(79),
    [anon_sym_LBRACE_DASH] = ACTIONS(81),
    [anon_sym_LBRACE_TILDE] = ACTIONS(83),
    [anon_sym_LBRACE_POUND] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(89),
    [sym_text_tag] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(229), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [18] = 1,
    ACTIONS(231), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [36] = 2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [56] = 2,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [76] = 2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [96] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [116] = 1,
    ACTIONS(247), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [134] = 2,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [154] = 1,
    ACTIONS(253), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [172] = 1,
    ACTIONS(255), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [190] = 2,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [210] = 1,
    ACTIONS(261), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [228] = 2,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [248] = 1,
    ACTIONS(229), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [266] = 2,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [286] = 2,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [306] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [326] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [346] = 1,
    ACTIONS(283), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [364] = 2,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [384] = 1,
    ACTIONS(287), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [402] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [422] = 1,
    ACTIONS(281), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [440] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [460] = 1,
    ACTIONS(277), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [478] = 2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [498] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [518] = 2,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [538] = 2,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [558] = 1,
    ACTIONS(301), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [576] = 1,
    ACTIONS(245), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [594] = 1,
    ACTIONS(303), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [612] = 1,
    ACTIONS(235), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [630] = 1,
    ACTIONS(231), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [648] = 1,
    ACTIONS(241), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [666] = 1,
    ACTIONS(251), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [684] = 1,
    ACTIONS(259), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [702] = 1,
    ACTIONS(265), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [720] = 1,
    ACTIONS(269), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [738] = 1,
    ACTIONS(273), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [756] = 1,
    ACTIONS(277), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [774] = 1,
    ACTIONS(281), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [792] = 1,
    ACTIONS(287), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [810] = 1,
    ACTIONS(283), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [828] = 2,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(301), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [848] = 1,
    ACTIONS(261), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [866] = 1,
    ACTIONS(255), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [884] = 1,
    ACTIONS(253), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [902] = 1,
    ACTIONS(247), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [920] = 1,
    ACTIONS(301), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [938] = 1,
    ACTIONS(245), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [956] = 1,
    ACTIONS(303), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [974] = 1,
    ACTIONS(235), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [992] = 2,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 14,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [1012] = 1,
    ACTIONS(241), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [1030] = 1,
    ACTIONS(251), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [1048] = 1,
    ACTIONS(259), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [1066] = 1,
    ACTIONS(265), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [1084] = 1,
    ACTIONS(269), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [1102] = 1,
    ACTIONS(273), 15,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GT,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [1120] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1134] = 4,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      aux_sym_text_argument_token1,
    STATE(82), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(319), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [1148] = 4,
    ACTIONS(324), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(321), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1162] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1176] = 4,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym_text_argument_token1,
    STATE(82), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(336), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [1190] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1204] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1218] = 4,
    ACTIONS(345), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(343), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1232] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1246] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1260] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1274] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1288] = 4,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      aux_sym_text_argument_token1,
    STATE(97), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(361), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [1302] = 4,
    ACTIONS(365), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(363), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1316] = 4,
    ACTIONS(371), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(369), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1330] = 4,
    ACTIONS(377), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(375), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1344] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1358] = 4,
    ACTIONS(385), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(383), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1372] = 4,
    ACTIONS(391), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(389), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1386] = 4,
    ACTIONS(317), 1,
      aux_sym_text_argument_token1,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(319), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [1400] = 4,
    ACTIONS(399), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(397), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1414] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1428] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1442] = 4,
    ACTIONS(409), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(407), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1456] = 4,
    ACTIONS(415), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(413), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1470] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1484] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1498] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1512] = 4,
    ACTIONS(427), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(425), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1526] = 4,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(433), 1,
      aux_sym_text_argument_token1,
    STATE(114), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(435), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [1540] = 4,
    ACTIONS(439), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(437), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1554] = 4,
    ACTIONS(445), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(443), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1568] = 4,
    ACTIONS(451), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(449), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1582] = 4,
    ACTIONS(457), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(455), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1596] = 4,
    ACTIONS(311), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(309), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1610] = 4,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    ACTIONS(465), 1,
      aux_sym_text_argument_token1,
    STATE(79), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(467), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [1624] = 4,
    ACTIONS(317), 1,
      aux_sym_text_argument_token1,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(319), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [1638] = 4,
    ACTIONS(473), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(471), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [1652] = 1,
    ACTIONS(477), 1,
      anon_sym_table,
  [1656] = 1,
    ACTIONS(479), 1,
      aux_sym_text_body_token1,
  [1660] = 1,
    ACTIONS(481), 1,
      aux_sym_number_argument_token1,
  [1664] = 1,
    ACTIONS(483), 1,
      aux_sym_text_body_token1,
  [1668] = 1,
    ACTIONS(485), 1,
      aux_sym_text_body_token1,
  [1672] = 1,
    ACTIONS(487), 1,
      ts_builtin_sym_end,
  [1676] = 1,
    ACTIONS(489), 1,
      anon_sym_table,
  [1680] = 1,
    ACTIONS(491), 1,
      aux_sym_number_argument_token1,
  [1684] = 1,
    ACTIONS(493), 1,
      anon_sym_table,
  [1688] = 1,
    ACTIONS(495), 1,
      aux_sym_number_argument_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 18,
  [SMALL_STATE(20)] = 36,
  [SMALL_STATE(21)] = 56,
  [SMALL_STATE(22)] = 76,
  [SMALL_STATE(23)] = 96,
  [SMALL_STATE(24)] = 116,
  [SMALL_STATE(25)] = 134,
  [SMALL_STATE(26)] = 154,
  [SMALL_STATE(27)] = 172,
  [SMALL_STATE(28)] = 190,
  [SMALL_STATE(29)] = 210,
  [SMALL_STATE(30)] = 228,
  [SMALL_STATE(31)] = 248,
  [SMALL_STATE(32)] = 266,
  [SMALL_STATE(33)] = 286,
  [SMALL_STATE(34)] = 306,
  [SMALL_STATE(35)] = 326,
  [SMALL_STATE(36)] = 346,
  [SMALL_STATE(37)] = 364,
  [SMALL_STATE(38)] = 384,
  [SMALL_STATE(39)] = 402,
  [SMALL_STATE(40)] = 422,
  [SMALL_STATE(41)] = 440,
  [SMALL_STATE(42)] = 460,
  [SMALL_STATE(43)] = 478,
  [SMALL_STATE(44)] = 498,
  [SMALL_STATE(45)] = 518,
  [SMALL_STATE(46)] = 538,
  [SMALL_STATE(47)] = 558,
  [SMALL_STATE(48)] = 576,
  [SMALL_STATE(49)] = 594,
  [SMALL_STATE(50)] = 612,
  [SMALL_STATE(51)] = 630,
  [SMALL_STATE(52)] = 648,
  [SMALL_STATE(53)] = 666,
  [SMALL_STATE(54)] = 684,
  [SMALL_STATE(55)] = 702,
  [SMALL_STATE(56)] = 720,
  [SMALL_STATE(57)] = 738,
  [SMALL_STATE(58)] = 756,
  [SMALL_STATE(59)] = 774,
  [SMALL_STATE(60)] = 792,
  [SMALL_STATE(61)] = 810,
  [SMALL_STATE(62)] = 828,
  [SMALL_STATE(63)] = 848,
  [SMALL_STATE(64)] = 866,
  [SMALL_STATE(65)] = 884,
  [SMALL_STATE(66)] = 902,
  [SMALL_STATE(67)] = 920,
  [SMALL_STATE(68)] = 938,
  [SMALL_STATE(69)] = 956,
  [SMALL_STATE(70)] = 974,
  [SMALL_STATE(71)] = 992,
  [SMALL_STATE(72)] = 1012,
  [SMALL_STATE(73)] = 1030,
  [SMALL_STATE(74)] = 1048,
  [SMALL_STATE(75)] = 1066,
  [SMALL_STATE(76)] = 1084,
  [SMALL_STATE(77)] = 1102,
  [SMALL_STATE(78)] = 1120,
  [SMALL_STATE(79)] = 1134,
  [SMALL_STATE(80)] = 1148,
  [SMALL_STATE(81)] = 1162,
  [SMALL_STATE(82)] = 1176,
  [SMALL_STATE(83)] = 1190,
  [SMALL_STATE(84)] = 1204,
  [SMALL_STATE(85)] = 1218,
  [SMALL_STATE(86)] = 1232,
  [SMALL_STATE(87)] = 1246,
  [SMALL_STATE(88)] = 1260,
  [SMALL_STATE(89)] = 1274,
  [SMALL_STATE(90)] = 1288,
  [SMALL_STATE(91)] = 1302,
  [SMALL_STATE(92)] = 1316,
  [SMALL_STATE(93)] = 1330,
  [SMALL_STATE(94)] = 1344,
  [SMALL_STATE(95)] = 1358,
  [SMALL_STATE(96)] = 1372,
  [SMALL_STATE(97)] = 1386,
  [SMALL_STATE(98)] = 1400,
  [SMALL_STATE(99)] = 1414,
  [SMALL_STATE(100)] = 1428,
  [SMALL_STATE(101)] = 1442,
  [SMALL_STATE(102)] = 1456,
  [SMALL_STATE(103)] = 1470,
  [SMALL_STATE(104)] = 1484,
  [SMALL_STATE(105)] = 1498,
  [SMALL_STATE(106)] = 1512,
  [SMALL_STATE(107)] = 1526,
  [SMALL_STATE(108)] = 1540,
  [SMALL_STATE(109)] = 1554,
  [SMALL_STATE(110)] = 1568,
  [SMALL_STATE(111)] = 1582,
  [SMALL_STATE(112)] = 1596,
  [SMALL_STATE(113)] = 1610,
  [SMALL_STATE(114)] = 1624,
  [SMALL_STATE(115)] = 1638,
  [SMALL_STATE(116)] = 1652,
  [SMALL_STATE(117)] = 1656,
  [SMALL_STATE(118)] = 1660,
  [SMALL_STATE(119)] = 1664,
  [SMALL_STATE(120)] = 1668,
  [SMALL_STATE(121)] = 1672,
  [SMALL_STATE(122)] = 1676,
  [SMALL_STATE(123)] = 1680,
  [SMALL_STATE(124)] = 1684,
  [SMALL_STATE(125)] = 1688,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mlmstext, 3, 0, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_body, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_el_tags, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_el_tags, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_body, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_argument, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_argument, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textual, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textual, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mlmstext, 4, 0, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_syntax, 4, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mltext, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rmltext, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rmltext, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rmltext, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mltext, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mltext, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_el_tags, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_el_tags, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_body, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_body, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_argument, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_argument, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_syntax, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_syntax, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mlmstext, 3, 0, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rmltext, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mltext, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_syntax, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mlmstext, 4, 0, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_argument, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_argument, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_syntax_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_syntax_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_syntax_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_argument_repeat1, 2, 0, 0),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [487] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_daleth(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
