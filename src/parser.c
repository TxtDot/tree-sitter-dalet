#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_POUND = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_el = 3,
  anon_sym_h = 4,
  anon_sym_p = 5,
  anon_sym_br = 6,
  anon_sym_ul = 7,
  anon_sym_ol = 8,
  anon_sym_row = 9,
  anon_sym_link = 10,
  anon_sym_navlink = 11,
  anon_sym_btn = 12,
  anon_sym_navbtn = 13,
  anon_sym_img = 14,
  anon_sym_table = 15,
  anon_sym_trow = 16,
  anon_sym_tprow = 17,
  anon_sym_hr = 18,
  anon_sym_b = 19,
  anon_sym_i = 20,
  anon_sym_bq = 21,
  anon_sym_footlnk = 22,
  anon_sym_footn = 23,
  anon_sym_a = 24,
  anon_sym_s = 25,
  anon_sym_sup = 26,
  anon_sym_sub = 27,
  anon_sym_disc = 28,
  anon_sym_block = 29,
  anon_sym_carousel = 30,
  anon_sym_code = 31,
  anon_sym_pre = 32,
  anon_sym_meta = 33,
  anon_sym_LBRACK_LBRACK = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK_RBRACK = 36,
  anon_sym_RBRACK = 37,
  anon_sym_DQUOTE = 38,
  anon_sym_DQUOTE2 = 39,
  sym_number_argument = 40,
  anon_sym_LF = 41,
  sym_text_body_open_sep = 42,
  sym_paragraph_open_sep = 43,
  sym_table_open_sep = 44,
  sym_multiline_open_sep = 45,
  sym_multiline_min_spaces_open_sep = 46,
  sym_multiline_raw_open_sep = 47,
  sym_multiline_close_sep = 48,
  sym_one_line_body = 49,
  sym_string_arg_content = 50,
  sym_multiline_content = 51,
  sym_string_arg_escape_sequence = 52,
  sym_multiline_escape_sequence = 53,
  sym_table_escape_sequence = 54,
  sym_source_file = 55,
  sym_token = 56,
  sym_comment = 57,
  sym_tag = 58,
  sym_symbol_open = 59,
  sym_symbol_close = 60,
  sym_argument = 61,
  sym_string_argument = 62,
  sym_textual = 63,
  sym_text_body = 64,
  sym_text_tag = 65,
  sym_paragraph = 66,
  sym_table_syntax = 67,
  sym_mltext = 68,
  sym_mlmstext = 69,
  sym_rmltext = 70,
  sym_multiline_body = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_string_argument_repeat1 = 73,
  aux_sym_multiline_body_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_el] = "el",
  [anon_sym_h] = "h",
  [anon_sym_p] = "p",
  [anon_sym_br] = "br",
  [anon_sym_ul] = "ul",
  [anon_sym_ol] = "ol",
  [anon_sym_row] = "row",
  [anon_sym_link] = "link",
  [anon_sym_navlink] = "navlink",
  [anon_sym_btn] = "btn",
  [anon_sym_navbtn] = "navbtn",
  [anon_sym_img] = "img",
  [anon_sym_table] = "table",
  [anon_sym_trow] = "trow",
  [anon_sym_tprow] = "tprow",
  [anon_sym_hr] = "hr",
  [anon_sym_b] = "b",
  [anon_sym_i] = "i",
  [anon_sym_bq] = "bq",
  [anon_sym_footlnk] = "footlnk",
  [anon_sym_footn] = "footn",
  [anon_sym_a] = "a",
  [anon_sym_s] = "s",
  [anon_sym_sup] = "sup",
  [anon_sym_sub] = "sub",
  [anon_sym_disc] = "disc",
  [anon_sym_block] = "block",
  [anon_sym_carousel] = "carousel",
  [anon_sym_code] = "code",
  [anon_sym_pre] = "pre",
  [anon_sym_meta] = "meta",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym_number_argument] = "number_argument",
  [anon_sym_LF] = "\n",
  [sym_text_body_open_sep] = "text_body_open_sep",
  [sym_paragraph_open_sep] = "paragraph_open_sep",
  [sym_table_open_sep] = "table_open_sep",
  [sym_multiline_open_sep] = "multiline_open_sep",
  [sym_multiline_min_spaces_open_sep] = "multiline_min_spaces_open_sep",
  [sym_multiline_raw_open_sep] = "multiline_raw_open_sep",
  [sym_multiline_close_sep] = "multiline_close_sep",
  [sym_one_line_body] = "one_line_body",
  [sym_string_arg_content] = "string_arg_content",
  [sym_multiline_content] = "multiline_content",
  [sym_string_arg_escape_sequence] = "string_arg_escape_sequence",
  [sym_multiline_escape_sequence] = "multiline_escape_sequence",
  [sym_table_escape_sequence] = "table_escape_sequence",
  [sym_source_file] = "source_file",
  [sym_token] = "token",
  [sym_comment] = "comment",
  [sym_tag] = "tag",
  [sym_symbol_open] = "symbol_open",
  [sym_symbol_close] = "symbol_close",
  [sym_argument] = "argument",
  [sym_string_argument] = "string_argument",
  [sym_textual] = "textual",
  [sym_text_body] = "text_body",
  [sym_text_tag] = "text_tag",
  [sym_paragraph] = "paragraph",
  [sym_table_syntax] = "table_syntax",
  [sym_mltext] = "mltext",
  [sym_mlmstext] = "mlmstext",
  [sym_rmltext] = "rmltext",
  [sym_multiline_body] = "multiline_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_argument_repeat1] = "string_argument_repeat1",
  [aux_sym_multiline_body_repeat1] = "multiline_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_el] = anon_sym_el,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_br] = anon_sym_br,
  [anon_sym_ul] = anon_sym_ul,
  [anon_sym_ol] = anon_sym_ol,
  [anon_sym_row] = anon_sym_row,
  [anon_sym_link] = anon_sym_link,
  [anon_sym_navlink] = anon_sym_navlink,
  [anon_sym_btn] = anon_sym_btn,
  [anon_sym_navbtn] = anon_sym_navbtn,
  [anon_sym_img] = anon_sym_img,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_trow] = anon_sym_trow,
  [anon_sym_tprow] = anon_sym_tprow,
  [anon_sym_hr] = anon_sym_hr,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_bq] = anon_sym_bq,
  [anon_sym_footlnk] = anon_sym_footlnk,
  [anon_sym_footn] = anon_sym_footn,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_sup] = anon_sym_sup,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_disc] = anon_sym_disc,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_carousel] = anon_sym_carousel,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_pre] = anon_sym_pre,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_number_argument] = sym_number_argument,
  [anon_sym_LF] = anon_sym_LF,
  [sym_text_body_open_sep] = sym_text_body_open_sep,
  [sym_paragraph_open_sep] = sym_paragraph_open_sep,
  [sym_table_open_sep] = sym_table_open_sep,
  [sym_multiline_open_sep] = sym_multiline_open_sep,
  [sym_multiline_min_spaces_open_sep] = sym_multiline_min_spaces_open_sep,
  [sym_multiline_raw_open_sep] = sym_multiline_raw_open_sep,
  [sym_multiline_close_sep] = sym_multiline_close_sep,
  [sym_one_line_body] = sym_one_line_body,
  [sym_string_arg_content] = sym_string_arg_content,
  [sym_multiline_content] = sym_multiline_content,
  [sym_string_arg_escape_sequence] = sym_string_arg_escape_sequence,
  [sym_multiline_escape_sequence] = sym_multiline_escape_sequence,
  [sym_table_escape_sequence] = sym_table_escape_sequence,
  [sym_source_file] = sym_source_file,
  [sym_token] = sym_token,
  [sym_comment] = sym_comment,
  [sym_tag] = sym_tag,
  [sym_symbol_open] = sym_symbol_open,
  [sym_symbol_close] = sym_symbol_close,
  [sym_argument] = sym_argument,
  [sym_string_argument] = sym_string_argument,
  [sym_textual] = sym_textual,
  [sym_text_body] = sym_text_body,
  [sym_text_tag] = sym_text_tag,
  [sym_paragraph] = sym_paragraph,
  [sym_table_syntax] = sym_table_syntax,
  [sym_mltext] = sym_mltext,
  [sym_mlmstext] = sym_mlmstext,
  [sym_rmltext] = sym_rmltext,
  [sym_multiline_body] = sym_multiline_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_argument_repeat1] = aux_sym_string_argument_repeat1,
  [aux_sym_multiline_body_repeat1] = aux_sym_multiline_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_el] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_br] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_row] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_link] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_navlink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_navbtn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_img] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tprow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_footlnk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_footn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_carousel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_number_argument] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_text_body_open_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_open_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_table_open_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_open_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_min_spaces_open_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_raw_open_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_close_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_one_line_body] = {
    .visible = true,
    .named = true,
  },
  [sym_string_arg_content] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string_arg_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_table_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_open] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_close] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_string_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_textual] = {
    .visible = true,
    .named = true,
  },
  [sym_text_body] = {
    .visible = true,
    .named = true,
  },
  [sym_text_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_table_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_mltext] = {
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
  [sym_multiline_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_body_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '"', 108,
        '#', 69,
        ':', 112,
        '[', 104,
        '\\', 4,
        ']', 106,
        'a', 93,
        'b', 88,
        'c', 6,
        'd', 110,
        'e', 32,
        'f', 50,
        'h', 73,
        'i', 89,
        'l', 26,
        'm', 18,
        'n', 7,
        'o', 33,
        'p', 74,
        'r', 44,
        's', 94,
        't', 8,
        'u', 34,
        '{', 115,
        '}', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(111);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(173);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == ']' ||
          lookahead == '|') ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(79);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(98);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 61:
      if (lookahead == 'w') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'w') ADVANCE(86);
      END_STATE();
    case 64:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(173);
      END_STATE();
    case 65:
      if (lookahead == '\\' ||
          lookahead == '}') ADVANCE(174);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') SKIP(67);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'h') ADVANCE(156);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == '{') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '"', 107,
        '#', 69,
        '[', 104,
        ']', 106,
        'a', 93,
        'b', 88,
        'c', 6,
        'd', 25,
        'e', 32,
        'f', 50,
        'h', 73,
        'i', 89,
        'l', 26,
        'm', 18,
        'n', 7,
        'o', 33,
        'p', 74,
        'r', 44,
        's', 94,
        't', 8,
        'u', 34,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_el);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_br);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_row);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_link);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_navlink);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_btn);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_navbtn);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_img);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_trow);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_tprow);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_hr);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'q') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bq);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_footlnk);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_footn);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_sup);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_disc);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_carousel);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number_argument);
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number_argument);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_text_body_open_sep);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_paragraph_open_sep);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_table_open_sep);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_multiline_open_sep);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '>') ADVANCE(2);
      if (lookahead == '~') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_multiline_min_spaces_open_sep);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_multiline_raw_open_sep);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_multiline_close_sep);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_one_line_body);
      ADVANCE_MAP(
        '"', 170,
        '#', 170,
        '[', 122,
        ']', 123,
        'a', 170,
        'b', 147,
        'c', 128,
        'd', 141,
        'e', 144,
        'f', 155,
        'h', 156,
        'i', 148,
        'l', 142,
        'm', 139,
        'n', 125,
        'o', 144,
        'p', 158,
        'r', 151,
        's', 166,
        't', 126,
        'u', 144,
      );
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(170);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '>') ADVANCE(119);
      if (lookahead == '~') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == '[') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == ']') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'b') ADVANCE(170);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'b') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'b') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'k') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'q') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'v') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_one_line_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_string_arg_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_multiline_content);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_string_arg_escape_sequence);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_multiline_escape_sequence);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_table_escape_sequence);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 66},
  [3] = {.lex_state = 66},
  [4] = {.lex_state = 66},
  [5] = {.lex_state = 66},
  [6] = {.lex_state = 66},
  [7] = {.lex_state = 66},
  [8] = {.lex_state = 66},
  [9] = {.lex_state = 66},
  [10] = {.lex_state = 66},
  [11] = {.lex_state = 66},
  [12] = {.lex_state = 66},
  [13] = {.lex_state = 66},
  [14] = {.lex_state = 66},
  [15] = {.lex_state = 66},
  [16] = {.lex_state = 66},
  [17] = {.lex_state = 66},
  [18] = {.lex_state = 66},
  [19] = {.lex_state = 66},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 70},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 66},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_el] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_br] = ACTIONS(1),
    [anon_sym_ul] = ACTIONS(1),
    [anon_sym_ol] = ACTIONS(1),
    [anon_sym_row] = ACTIONS(1),
    [anon_sym_link] = ACTIONS(1),
    [anon_sym_navlink] = ACTIONS(1),
    [anon_sym_btn] = ACTIONS(1),
    [anon_sym_navbtn] = ACTIONS(1),
    [anon_sym_img] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_trow] = ACTIONS(1),
    [anon_sym_tprow] = ACTIONS(1),
    [anon_sym_hr] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_bq] = ACTIONS(1),
    [anon_sym_footlnk] = ACTIONS(1),
    [anon_sym_footn] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_sup] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_disc] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_carousel] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_pre] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_number_argument] = ACTIONS(1),
    [sym_text_body_open_sep] = ACTIONS(1),
    [sym_paragraph_open_sep] = ACTIONS(1),
    [sym_table_open_sep] = ACTIONS(1),
    [sym_multiline_open_sep] = ACTIONS(1),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(1),
    [sym_multiline_raw_open_sep] = ACTIONS(1),
    [sym_multiline_close_sep] = ACTIONS(1),
    [sym_string_arg_escape_sequence] = ACTIONS(1),
    [sym_multiline_escape_sequence] = ACTIONS(1),
    [sym_table_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_token] = STATE(3),
    [sym_comment] = STATE(17),
    [sym_tag] = STATE(17),
    [sym_symbol_open] = STATE(17),
    [sym_symbol_close] = STATE(17),
    [sym_argument] = STATE(17),
    [sym_string_argument] = STATE(10),
    [sym_textual] = STATE(17),
    [sym_text_body] = STATE(18),
    [sym_text_tag] = STATE(18),
    [sym_paragraph] = STATE(18),
    [sym_table_syntax] = STATE(18),
    [sym_mltext] = STATE(18),
    [sym_mlmstext] = STATE(18),
    [sym_rmltext] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_el] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(7),
    [anon_sym_p] = ACTIONS(7),
    [anon_sym_br] = ACTIONS(7),
    [anon_sym_ul] = ACTIONS(7),
    [anon_sym_ol] = ACTIONS(7),
    [anon_sym_row] = ACTIONS(7),
    [anon_sym_link] = ACTIONS(7),
    [anon_sym_navlink] = ACTIONS(7),
    [anon_sym_btn] = ACTIONS(7),
    [anon_sym_navbtn] = ACTIONS(7),
    [anon_sym_img] = ACTIONS(7),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_trow] = ACTIONS(7),
    [anon_sym_tprow] = ACTIONS(7),
    [anon_sym_hr] = ACTIONS(7),
    [anon_sym_b] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(7),
    [anon_sym_bq] = ACTIONS(7),
    [anon_sym_footlnk] = ACTIONS(7),
    [anon_sym_footn] = ACTIONS(7),
    [anon_sym_a] = ACTIONS(7),
    [anon_sym_s] = ACTIONS(7),
    [anon_sym_sup] = ACTIONS(7),
    [anon_sym_sub] = ACTIONS(7),
    [anon_sym_disc] = ACTIONS(7),
    [anon_sym_block] = ACTIONS(7),
    [anon_sym_carousel] = ACTIONS(7),
    [anon_sym_code] = ACTIONS(7),
    [anon_sym_pre] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number_argument] = ACTIONS(15),
    [sym_text_body_open_sep] = ACTIONS(17),
    [sym_paragraph_open_sep] = ACTIONS(19),
    [sym_table_open_sep] = ACTIONS(21),
    [sym_multiline_open_sep] = ACTIONS(23),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(25),
    [sym_multiline_raw_open_sep] = ACTIONS(27),
    [sym_one_line_body] = ACTIONS(29),
  },
  [2] = {
    [sym_token] = STATE(2),
    [sym_comment] = STATE(17),
    [sym_tag] = STATE(17),
    [sym_symbol_open] = STATE(17),
    [sym_symbol_close] = STATE(17),
    [sym_argument] = STATE(17),
    [sym_string_argument] = STATE(10),
    [sym_textual] = STATE(17),
    [sym_text_body] = STATE(18),
    [sym_text_tag] = STATE(18),
    [sym_paragraph] = STATE(18),
    [sym_table_syntax] = STATE(18),
    [sym_mltext] = STATE(18),
    [sym_mlmstext] = STATE(18),
    [sym_rmltext] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_el] = ACTIONS(36),
    [anon_sym_h] = ACTIONS(36),
    [anon_sym_p] = ACTIONS(36),
    [anon_sym_br] = ACTIONS(36),
    [anon_sym_ul] = ACTIONS(36),
    [anon_sym_ol] = ACTIONS(36),
    [anon_sym_row] = ACTIONS(36),
    [anon_sym_link] = ACTIONS(36),
    [anon_sym_navlink] = ACTIONS(36),
    [anon_sym_btn] = ACTIONS(36),
    [anon_sym_navbtn] = ACTIONS(36),
    [anon_sym_img] = ACTIONS(36),
    [anon_sym_table] = ACTIONS(36),
    [anon_sym_trow] = ACTIONS(36),
    [anon_sym_tprow] = ACTIONS(36),
    [anon_sym_hr] = ACTIONS(36),
    [anon_sym_b] = ACTIONS(36),
    [anon_sym_i] = ACTIONS(36),
    [anon_sym_bq] = ACTIONS(36),
    [anon_sym_footlnk] = ACTIONS(36),
    [anon_sym_footn] = ACTIONS(36),
    [anon_sym_a] = ACTIONS(36),
    [anon_sym_s] = ACTIONS(36),
    [anon_sym_sup] = ACTIONS(36),
    [anon_sym_sub] = ACTIONS(36),
    [anon_sym_disc] = ACTIONS(36),
    [anon_sym_block] = ACTIONS(36),
    [anon_sym_carousel] = ACTIONS(36),
    [anon_sym_code] = ACTIONS(36),
    [anon_sym_pre] = ACTIONS(36),
    [anon_sym_meta] = ACTIONS(36),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(42),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_number_argument] = ACTIONS(48),
    [sym_text_body_open_sep] = ACTIONS(51),
    [sym_paragraph_open_sep] = ACTIONS(54),
    [sym_table_open_sep] = ACTIONS(57),
    [sym_multiline_open_sep] = ACTIONS(60),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(63),
    [sym_multiline_raw_open_sep] = ACTIONS(66),
    [sym_one_line_body] = ACTIONS(69),
  },
  [3] = {
    [sym_token] = STATE(2),
    [sym_comment] = STATE(17),
    [sym_tag] = STATE(17),
    [sym_symbol_open] = STATE(17),
    [sym_symbol_close] = STATE(17),
    [sym_argument] = STATE(17),
    [sym_string_argument] = STATE(10),
    [sym_textual] = STATE(17),
    [sym_text_body] = STATE(18),
    [sym_text_tag] = STATE(18),
    [sym_paragraph] = STATE(18),
    [sym_table_syntax] = STATE(18),
    [sym_mltext] = STATE(18),
    [sym_mlmstext] = STATE(18),
    [sym_rmltext] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_el] = ACTIONS(7),
    [anon_sym_h] = ACTIONS(7),
    [anon_sym_p] = ACTIONS(7),
    [anon_sym_br] = ACTIONS(7),
    [anon_sym_ul] = ACTIONS(7),
    [anon_sym_ol] = ACTIONS(7),
    [anon_sym_row] = ACTIONS(7),
    [anon_sym_link] = ACTIONS(7),
    [anon_sym_navlink] = ACTIONS(7),
    [anon_sym_btn] = ACTIONS(7),
    [anon_sym_navbtn] = ACTIONS(7),
    [anon_sym_img] = ACTIONS(7),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_trow] = ACTIONS(7),
    [anon_sym_tprow] = ACTIONS(7),
    [anon_sym_hr] = ACTIONS(7),
    [anon_sym_b] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(7),
    [anon_sym_bq] = ACTIONS(7),
    [anon_sym_footlnk] = ACTIONS(7),
    [anon_sym_footn] = ACTIONS(7),
    [anon_sym_a] = ACTIONS(7),
    [anon_sym_s] = ACTIONS(7),
    [anon_sym_sup] = ACTIONS(7),
    [anon_sym_sub] = ACTIONS(7),
    [anon_sym_disc] = ACTIONS(7),
    [anon_sym_block] = ACTIONS(7),
    [anon_sym_carousel] = ACTIONS(7),
    [anon_sym_code] = ACTIONS(7),
    [anon_sym_pre] = ACTIONS(7),
    [anon_sym_meta] = ACTIONS(7),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number_argument] = ACTIONS(15),
    [sym_text_body_open_sep] = ACTIONS(17),
    [sym_paragraph_open_sep] = ACTIONS(19),
    [sym_table_open_sep] = ACTIONS(21),
    [sym_multiline_open_sep] = ACTIONS(23),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(25),
    [sym_multiline_raw_open_sep] = ACTIONS(27),
    [sym_one_line_body] = ACTIONS(29),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_el] = ACTIONS(76),
    [anon_sym_h] = ACTIONS(76),
    [anon_sym_p] = ACTIONS(76),
    [anon_sym_br] = ACTIONS(76),
    [anon_sym_ul] = ACTIONS(76),
    [anon_sym_ol] = ACTIONS(76),
    [anon_sym_row] = ACTIONS(76),
    [anon_sym_link] = ACTIONS(76),
    [anon_sym_navlink] = ACTIONS(76),
    [anon_sym_btn] = ACTIONS(76),
    [anon_sym_navbtn] = ACTIONS(76),
    [anon_sym_img] = ACTIONS(76),
    [anon_sym_table] = ACTIONS(76),
    [anon_sym_trow] = ACTIONS(76),
    [anon_sym_tprow] = ACTIONS(76),
    [anon_sym_hr] = ACTIONS(76),
    [anon_sym_b] = ACTIONS(76),
    [anon_sym_i] = ACTIONS(76),
    [anon_sym_bq] = ACTIONS(76),
    [anon_sym_footlnk] = ACTIONS(76),
    [anon_sym_footn] = ACTIONS(76),
    [anon_sym_a] = ACTIONS(76),
    [anon_sym_s] = ACTIONS(76),
    [anon_sym_sup] = ACTIONS(76),
    [anon_sym_sub] = ACTIONS(76),
    [anon_sym_disc] = ACTIONS(76),
    [anon_sym_block] = ACTIONS(76),
    [anon_sym_carousel] = ACTIONS(76),
    [anon_sym_code] = ACTIONS(76),
    [anon_sym_pre] = ACTIONS(76),
    [anon_sym_meta] = ACTIONS(76),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number_argument] = ACTIONS(76),
    [sym_text_body_open_sep] = ACTIONS(76),
    [sym_paragraph_open_sep] = ACTIONS(76),
    [sym_table_open_sep] = ACTIONS(76),
    [sym_multiline_open_sep] = ACTIONS(76),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(76),
    [sym_multiline_raw_open_sep] = ACTIONS(76),
    [sym_one_line_body] = ACTIONS(74),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_POUND] = ACTIONS(80),
    [anon_sym_el] = ACTIONS(80),
    [anon_sym_h] = ACTIONS(80),
    [anon_sym_p] = ACTIONS(80),
    [anon_sym_br] = ACTIONS(80),
    [anon_sym_ul] = ACTIONS(80),
    [anon_sym_ol] = ACTIONS(80),
    [anon_sym_row] = ACTIONS(80),
    [anon_sym_link] = ACTIONS(80),
    [anon_sym_navlink] = ACTIONS(80),
    [anon_sym_btn] = ACTIONS(80),
    [anon_sym_navbtn] = ACTIONS(80),
    [anon_sym_img] = ACTIONS(80),
    [anon_sym_table] = ACTIONS(80),
    [anon_sym_trow] = ACTIONS(80),
    [anon_sym_tprow] = ACTIONS(80),
    [anon_sym_hr] = ACTIONS(80),
    [anon_sym_b] = ACTIONS(80),
    [anon_sym_i] = ACTIONS(80),
    [anon_sym_bq] = ACTIONS(80),
    [anon_sym_footlnk] = ACTIONS(80),
    [anon_sym_footn] = ACTIONS(80),
    [anon_sym_a] = ACTIONS(80),
    [anon_sym_s] = ACTIONS(80),
    [anon_sym_sup] = ACTIONS(80),
    [anon_sym_sub] = ACTIONS(80),
    [anon_sym_disc] = ACTIONS(80),
    [anon_sym_block] = ACTIONS(80),
    [anon_sym_carousel] = ACTIONS(80),
    [anon_sym_code] = ACTIONS(80),
    [anon_sym_pre] = ACTIONS(80),
    [anon_sym_meta] = ACTIONS(80),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [sym_number_argument] = ACTIONS(80),
    [sym_text_body_open_sep] = ACTIONS(80),
    [sym_paragraph_open_sep] = ACTIONS(80),
    [sym_table_open_sep] = ACTIONS(80),
    [sym_multiline_open_sep] = ACTIONS(80),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(80),
    [sym_multiline_raw_open_sep] = ACTIONS(80),
    [sym_one_line_body] = ACTIONS(78),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_el] = ACTIONS(84),
    [anon_sym_h] = ACTIONS(84),
    [anon_sym_p] = ACTIONS(84),
    [anon_sym_br] = ACTIONS(84),
    [anon_sym_ul] = ACTIONS(84),
    [anon_sym_ol] = ACTIONS(84),
    [anon_sym_row] = ACTIONS(84),
    [anon_sym_link] = ACTIONS(84),
    [anon_sym_navlink] = ACTIONS(84),
    [anon_sym_btn] = ACTIONS(84),
    [anon_sym_navbtn] = ACTIONS(84),
    [anon_sym_img] = ACTIONS(84),
    [anon_sym_table] = ACTIONS(84),
    [anon_sym_trow] = ACTIONS(84),
    [anon_sym_tprow] = ACTIONS(84),
    [anon_sym_hr] = ACTIONS(84),
    [anon_sym_b] = ACTIONS(84),
    [anon_sym_i] = ACTIONS(84),
    [anon_sym_bq] = ACTIONS(84),
    [anon_sym_footlnk] = ACTIONS(84),
    [anon_sym_footn] = ACTIONS(84),
    [anon_sym_a] = ACTIONS(84),
    [anon_sym_s] = ACTIONS(84),
    [anon_sym_sup] = ACTIONS(84),
    [anon_sym_sub] = ACTIONS(84),
    [anon_sym_disc] = ACTIONS(84),
    [anon_sym_block] = ACTIONS(84),
    [anon_sym_carousel] = ACTIONS(84),
    [anon_sym_code] = ACTIONS(84),
    [anon_sym_pre] = ACTIONS(84),
    [anon_sym_meta] = ACTIONS(84),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [sym_number_argument] = ACTIONS(84),
    [sym_text_body_open_sep] = ACTIONS(84),
    [sym_paragraph_open_sep] = ACTIONS(84),
    [sym_table_open_sep] = ACTIONS(84),
    [sym_multiline_open_sep] = ACTIONS(84),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(84),
    [sym_multiline_raw_open_sep] = ACTIONS(84),
    [sym_one_line_body] = ACTIONS(82),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_POUND] = ACTIONS(88),
    [anon_sym_el] = ACTIONS(88),
    [anon_sym_h] = ACTIONS(88),
    [anon_sym_p] = ACTIONS(88),
    [anon_sym_br] = ACTIONS(88),
    [anon_sym_ul] = ACTIONS(88),
    [anon_sym_ol] = ACTIONS(88),
    [anon_sym_row] = ACTIONS(88),
    [anon_sym_link] = ACTIONS(88),
    [anon_sym_navlink] = ACTIONS(88),
    [anon_sym_btn] = ACTIONS(88),
    [anon_sym_navbtn] = ACTIONS(88),
    [anon_sym_img] = ACTIONS(88),
    [anon_sym_table] = ACTIONS(88),
    [anon_sym_trow] = ACTIONS(88),
    [anon_sym_tprow] = ACTIONS(88),
    [anon_sym_hr] = ACTIONS(88),
    [anon_sym_b] = ACTIONS(88),
    [anon_sym_i] = ACTIONS(88),
    [anon_sym_bq] = ACTIONS(88),
    [anon_sym_footlnk] = ACTIONS(88),
    [anon_sym_footn] = ACTIONS(88),
    [anon_sym_a] = ACTIONS(88),
    [anon_sym_s] = ACTIONS(88),
    [anon_sym_sup] = ACTIONS(88),
    [anon_sym_sub] = ACTIONS(88),
    [anon_sym_disc] = ACTIONS(88),
    [anon_sym_block] = ACTIONS(88),
    [anon_sym_carousel] = ACTIONS(88),
    [anon_sym_code] = ACTIONS(88),
    [anon_sym_pre] = ACTIONS(88),
    [anon_sym_meta] = ACTIONS(88),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [sym_number_argument] = ACTIONS(88),
    [sym_text_body_open_sep] = ACTIONS(88),
    [sym_paragraph_open_sep] = ACTIONS(88),
    [sym_table_open_sep] = ACTIONS(88),
    [sym_multiline_open_sep] = ACTIONS(88),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(88),
    [sym_multiline_raw_open_sep] = ACTIONS(88),
    [sym_one_line_body] = ACTIONS(86),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_POUND] = ACTIONS(92),
    [anon_sym_el] = ACTIONS(92),
    [anon_sym_h] = ACTIONS(92),
    [anon_sym_p] = ACTIONS(92),
    [anon_sym_br] = ACTIONS(92),
    [anon_sym_ul] = ACTIONS(92),
    [anon_sym_ol] = ACTIONS(92),
    [anon_sym_row] = ACTIONS(92),
    [anon_sym_link] = ACTIONS(92),
    [anon_sym_navlink] = ACTIONS(92),
    [anon_sym_btn] = ACTIONS(92),
    [anon_sym_navbtn] = ACTIONS(92),
    [anon_sym_img] = ACTIONS(92),
    [anon_sym_table] = ACTIONS(92),
    [anon_sym_trow] = ACTIONS(92),
    [anon_sym_tprow] = ACTIONS(92),
    [anon_sym_hr] = ACTIONS(92),
    [anon_sym_b] = ACTIONS(92),
    [anon_sym_i] = ACTIONS(92),
    [anon_sym_bq] = ACTIONS(92),
    [anon_sym_footlnk] = ACTIONS(92),
    [anon_sym_footn] = ACTIONS(92),
    [anon_sym_a] = ACTIONS(92),
    [anon_sym_s] = ACTIONS(92),
    [anon_sym_sup] = ACTIONS(92),
    [anon_sym_sub] = ACTIONS(92),
    [anon_sym_disc] = ACTIONS(92),
    [anon_sym_block] = ACTIONS(92),
    [anon_sym_carousel] = ACTIONS(92),
    [anon_sym_code] = ACTIONS(92),
    [anon_sym_pre] = ACTIONS(92),
    [anon_sym_meta] = ACTIONS(92),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [sym_number_argument] = ACTIONS(92),
    [sym_text_body_open_sep] = ACTIONS(92),
    [sym_paragraph_open_sep] = ACTIONS(92),
    [sym_table_open_sep] = ACTIONS(92),
    [sym_multiline_open_sep] = ACTIONS(92),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(92),
    [sym_multiline_raw_open_sep] = ACTIONS(92),
    [sym_one_line_body] = ACTIONS(90),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(96),
    [anon_sym_el] = ACTIONS(96),
    [anon_sym_h] = ACTIONS(96),
    [anon_sym_p] = ACTIONS(96),
    [anon_sym_br] = ACTIONS(96),
    [anon_sym_ul] = ACTIONS(96),
    [anon_sym_ol] = ACTIONS(96),
    [anon_sym_row] = ACTIONS(96),
    [anon_sym_link] = ACTIONS(96),
    [anon_sym_navlink] = ACTIONS(96),
    [anon_sym_btn] = ACTIONS(96),
    [anon_sym_navbtn] = ACTIONS(96),
    [anon_sym_img] = ACTIONS(96),
    [anon_sym_table] = ACTIONS(96),
    [anon_sym_trow] = ACTIONS(96),
    [anon_sym_tprow] = ACTIONS(96),
    [anon_sym_hr] = ACTIONS(96),
    [anon_sym_b] = ACTIONS(96),
    [anon_sym_i] = ACTIONS(96),
    [anon_sym_bq] = ACTIONS(96),
    [anon_sym_footlnk] = ACTIONS(96),
    [anon_sym_footn] = ACTIONS(96),
    [anon_sym_a] = ACTIONS(96),
    [anon_sym_s] = ACTIONS(96),
    [anon_sym_sup] = ACTIONS(96),
    [anon_sym_sub] = ACTIONS(96),
    [anon_sym_disc] = ACTIONS(96),
    [anon_sym_block] = ACTIONS(96),
    [anon_sym_carousel] = ACTIONS(96),
    [anon_sym_code] = ACTIONS(96),
    [anon_sym_pre] = ACTIONS(96),
    [anon_sym_meta] = ACTIONS(96),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_number_argument] = ACTIONS(96),
    [sym_text_body_open_sep] = ACTIONS(96),
    [sym_paragraph_open_sep] = ACTIONS(96),
    [sym_table_open_sep] = ACTIONS(96),
    [sym_multiline_open_sep] = ACTIONS(96),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(96),
    [sym_multiline_raw_open_sep] = ACTIONS(96),
    [sym_one_line_body] = ACTIONS(94),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_POUND] = ACTIONS(100),
    [anon_sym_el] = ACTIONS(100),
    [anon_sym_h] = ACTIONS(100),
    [anon_sym_p] = ACTIONS(100),
    [anon_sym_br] = ACTIONS(100),
    [anon_sym_ul] = ACTIONS(100),
    [anon_sym_ol] = ACTIONS(100),
    [anon_sym_row] = ACTIONS(100),
    [anon_sym_link] = ACTIONS(100),
    [anon_sym_navlink] = ACTIONS(100),
    [anon_sym_btn] = ACTIONS(100),
    [anon_sym_navbtn] = ACTIONS(100),
    [anon_sym_img] = ACTIONS(100),
    [anon_sym_table] = ACTIONS(100),
    [anon_sym_trow] = ACTIONS(100),
    [anon_sym_tprow] = ACTIONS(100),
    [anon_sym_hr] = ACTIONS(100),
    [anon_sym_b] = ACTIONS(100),
    [anon_sym_i] = ACTIONS(100),
    [anon_sym_bq] = ACTIONS(100),
    [anon_sym_footlnk] = ACTIONS(100),
    [anon_sym_footn] = ACTIONS(100),
    [anon_sym_a] = ACTIONS(100),
    [anon_sym_s] = ACTIONS(100),
    [anon_sym_sup] = ACTIONS(100),
    [anon_sym_sub] = ACTIONS(100),
    [anon_sym_disc] = ACTIONS(100),
    [anon_sym_block] = ACTIONS(100),
    [anon_sym_carousel] = ACTIONS(100),
    [anon_sym_code] = ACTIONS(100),
    [anon_sym_pre] = ACTIONS(100),
    [anon_sym_meta] = ACTIONS(100),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [sym_number_argument] = ACTIONS(100),
    [sym_text_body_open_sep] = ACTIONS(100),
    [sym_paragraph_open_sep] = ACTIONS(100),
    [sym_table_open_sep] = ACTIONS(100),
    [sym_multiline_open_sep] = ACTIONS(100),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(100),
    [sym_multiline_raw_open_sep] = ACTIONS(100),
    [sym_one_line_body] = ACTIONS(98),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_POUND] = ACTIONS(104),
    [anon_sym_el] = ACTIONS(104),
    [anon_sym_h] = ACTIONS(104),
    [anon_sym_p] = ACTIONS(104),
    [anon_sym_br] = ACTIONS(104),
    [anon_sym_ul] = ACTIONS(104),
    [anon_sym_ol] = ACTIONS(104),
    [anon_sym_row] = ACTIONS(104),
    [anon_sym_link] = ACTIONS(104),
    [anon_sym_navlink] = ACTIONS(104),
    [anon_sym_btn] = ACTIONS(104),
    [anon_sym_navbtn] = ACTIONS(104),
    [anon_sym_img] = ACTIONS(104),
    [anon_sym_table] = ACTIONS(104),
    [anon_sym_trow] = ACTIONS(104),
    [anon_sym_tprow] = ACTIONS(104),
    [anon_sym_hr] = ACTIONS(104),
    [anon_sym_b] = ACTIONS(104),
    [anon_sym_i] = ACTIONS(104),
    [anon_sym_bq] = ACTIONS(104),
    [anon_sym_footlnk] = ACTIONS(104),
    [anon_sym_footn] = ACTIONS(104),
    [anon_sym_a] = ACTIONS(104),
    [anon_sym_s] = ACTIONS(104),
    [anon_sym_sup] = ACTIONS(104),
    [anon_sym_sub] = ACTIONS(104),
    [anon_sym_disc] = ACTIONS(104),
    [anon_sym_block] = ACTIONS(104),
    [anon_sym_carousel] = ACTIONS(104),
    [anon_sym_code] = ACTIONS(104),
    [anon_sym_pre] = ACTIONS(104),
    [anon_sym_meta] = ACTIONS(104),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(104),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym_number_argument] = ACTIONS(104),
    [sym_text_body_open_sep] = ACTIONS(104),
    [sym_paragraph_open_sep] = ACTIONS(104),
    [sym_table_open_sep] = ACTIONS(104),
    [sym_multiline_open_sep] = ACTIONS(104),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(104),
    [sym_multiline_raw_open_sep] = ACTIONS(104),
    [sym_one_line_body] = ACTIONS(102),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_el] = ACTIONS(108),
    [anon_sym_h] = ACTIONS(108),
    [anon_sym_p] = ACTIONS(108),
    [anon_sym_br] = ACTIONS(108),
    [anon_sym_ul] = ACTIONS(108),
    [anon_sym_ol] = ACTIONS(108),
    [anon_sym_row] = ACTIONS(108),
    [anon_sym_link] = ACTIONS(108),
    [anon_sym_navlink] = ACTIONS(108),
    [anon_sym_btn] = ACTIONS(108),
    [anon_sym_navbtn] = ACTIONS(108),
    [anon_sym_img] = ACTIONS(108),
    [anon_sym_table] = ACTIONS(108),
    [anon_sym_trow] = ACTIONS(108),
    [anon_sym_tprow] = ACTIONS(108),
    [anon_sym_hr] = ACTIONS(108),
    [anon_sym_b] = ACTIONS(108),
    [anon_sym_i] = ACTIONS(108),
    [anon_sym_bq] = ACTIONS(108),
    [anon_sym_footlnk] = ACTIONS(108),
    [anon_sym_footn] = ACTIONS(108),
    [anon_sym_a] = ACTIONS(108),
    [anon_sym_s] = ACTIONS(108),
    [anon_sym_sup] = ACTIONS(108),
    [anon_sym_sub] = ACTIONS(108),
    [anon_sym_disc] = ACTIONS(108),
    [anon_sym_block] = ACTIONS(108),
    [anon_sym_carousel] = ACTIONS(108),
    [anon_sym_code] = ACTIONS(108),
    [anon_sym_pre] = ACTIONS(108),
    [anon_sym_meta] = ACTIONS(108),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [sym_number_argument] = ACTIONS(108),
    [sym_text_body_open_sep] = ACTIONS(108),
    [sym_paragraph_open_sep] = ACTIONS(108),
    [sym_table_open_sep] = ACTIONS(108),
    [sym_multiline_open_sep] = ACTIONS(108),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(108),
    [sym_multiline_raw_open_sep] = ACTIONS(108),
    [sym_one_line_body] = ACTIONS(106),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_POUND] = ACTIONS(112),
    [anon_sym_el] = ACTIONS(112),
    [anon_sym_h] = ACTIONS(112),
    [anon_sym_p] = ACTIONS(112),
    [anon_sym_br] = ACTIONS(112),
    [anon_sym_ul] = ACTIONS(112),
    [anon_sym_ol] = ACTIONS(112),
    [anon_sym_row] = ACTIONS(112),
    [anon_sym_link] = ACTIONS(112),
    [anon_sym_navlink] = ACTIONS(112),
    [anon_sym_btn] = ACTIONS(112),
    [anon_sym_navbtn] = ACTIONS(112),
    [anon_sym_img] = ACTIONS(112),
    [anon_sym_table] = ACTIONS(112),
    [anon_sym_trow] = ACTIONS(112),
    [anon_sym_tprow] = ACTIONS(112),
    [anon_sym_hr] = ACTIONS(112),
    [anon_sym_b] = ACTIONS(112),
    [anon_sym_i] = ACTIONS(112),
    [anon_sym_bq] = ACTIONS(112),
    [anon_sym_footlnk] = ACTIONS(112),
    [anon_sym_footn] = ACTIONS(112),
    [anon_sym_a] = ACTIONS(112),
    [anon_sym_s] = ACTIONS(112),
    [anon_sym_sup] = ACTIONS(112),
    [anon_sym_sub] = ACTIONS(112),
    [anon_sym_disc] = ACTIONS(112),
    [anon_sym_block] = ACTIONS(112),
    [anon_sym_carousel] = ACTIONS(112),
    [anon_sym_code] = ACTIONS(112),
    [anon_sym_pre] = ACTIONS(112),
    [anon_sym_meta] = ACTIONS(112),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [sym_number_argument] = ACTIONS(112),
    [sym_text_body_open_sep] = ACTIONS(112),
    [sym_paragraph_open_sep] = ACTIONS(112),
    [sym_table_open_sep] = ACTIONS(112),
    [sym_multiline_open_sep] = ACTIONS(112),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(112),
    [sym_multiline_raw_open_sep] = ACTIONS(112),
    [sym_one_line_body] = ACTIONS(110),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_el] = ACTIONS(116),
    [anon_sym_h] = ACTIONS(116),
    [anon_sym_p] = ACTIONS(116),
    [anon_sym_br] = ACTIONS(116),
    [anon_sym_ul] = ACTIONS(116),
    [anon_sym_ol] = ACTIONS(116),
    [anon_sym_row] = ACTIONS(116),
    [anon_sym_link] = ACTIONS(116),
    [anon_sym_navlink] = ACTIONS(116),
    [anon_sym_btn] = ACTIONS(116),
    [anon_sym_navbtn] = ACTIONS(116),
    [anon_sym_img] = ACTIONS(116),
    [anon_sym_table] = ACTIONS(116),
    [anon_sym_trow] = ACTIONS(116),
    [anon_sym_tprow] = ACTIONS(116),
    [anon_sym_hr] = ACTIONS(116),
    [anon_sym_b] = ACTIONS(116),
    [anon_sym_i] = ACTIONS(116),
    [anon_sym_bq] = ACTIONS(116),
    [anon_sym_footlnk] = ACTIONS(116),
    [anon_sym_footn] = ACTIONS(116),
    [anon_sym_a] = ACTIONS(116),
    [anon_sym_s] = ACTIONS(116),
    [anon_sym_sup] = ACTIONS(116),
    [anon_sym_sub] = ACTIONS(116),
    [anon_sym_disc] = ACTIONS(116),
    [anon_sym_block] = ACTIONS(116),
    [anon_sym_carousel] = ACTIONS(116),
    [anon_sym_code] = ACTIONS(116),
    [anon_sym_pre] = ACTIONS(116),
    [anon_sym_meta] = ACTIONS(116),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym_number_argument] = ACTIONS(116),
    [sym_text_body_open_sep] = ACTIONS(116),
    [sym_paragraph_open_sep] = ACTIONS(116),
    [sym_table_open_sep] = ACTIONS(116),
    [sym_multiline_open_sep] = ACTIONS(116),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(116),
    [sym_multiline_raw_open_sep] = ACTIONS(116),
    [sym_one_line_body] = ACTIONS(114),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(120),
    [anon_sym_el] = ACTIONS(120),
    [anon_sym_h] = ACTIONS(120),
    [anon_sym_p] = ACTIONS(120),
    [anon_sym_br] = ACTIONS(120),
    [anon_sym_ul] = ACTIONS(120),
    [anon_sym_ol] = ACTIONS(120),
    [anon_sym_row] = ACTIONS(120),
    [anon_sym_link] = ACTIONS(120),
    [anon_sym_navlink] = ACTIONS(120),
    [anon_sym_btn] = ACTIONS(120),
    [anon_sym_navbtn] = ACTIONS(120),
    [anon_sym_img] = ACTIONS(120),
    [anon_sym_table] = ACTIONS(120),
    [anon_sym_trow] = ACTIONS(120),
    [anon_sym_tprow] = ACTIONS(120),
    [anon_sym_hr] = ACTIONS(120),
    [anon_sym_b] = ACTIONS(120),
    [anon_sym_i] = ACTIONS(120),
    [anon_sym_bq] = ACTIONS(120),
    [anon_sym_footlnk] = ACTIONS(120),
    [anon_sym_footn] = ACTIONS(120),
    [anon_sym_a] = ACTIONS(120),
    [anon_sym_s] = ACTIONS(120),
    [anon_sym_sup] = ACTIONS(120),
    [anon_sym_sub] = ACTIONS(120),
    [anon_sym_disc] = ACTIONS(120),
    [anon_sym_block] = ACTIONS(120),
    [anon_sym_carousel] = ACTIONS(120),
    [anon_sym_code] = ACTIONS(120),
    [anon_sym_pre] = ACTIONS(120),
    [anon_sym_meta] = ACTIONS(120),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number_argument] = ACTIONS(120),
    [sym_text_body_open_sep] = ACTIONS(120),
    [sym_paragraph_open_sep] = ACTIONS(120),
    [sym_table_open_sep] = ACTIONS(120),
    [sym_multiline_open_sep] = ACTIONS(120),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(120),
    [sym_multiline_raw_open_sep] = ACTIONS(120),
    [sym_one_line_body] = ACTIONS(118),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_el] = ACTIONS(124),
    [anon_sym_h] = ACTIONS(124),
    [anon_sym_p] = ACTIONS(124),
    [anon_sym_br] = ACTIONS(124),
    [anon_sym_ul] = ACTIONS(124),
    [anon_sym_ol] = ACTIONS(124),
    [anon_sym_row] = ACTIONS(124),
    [anon_sym_link] = ACTIONS(124),
    [anon_sym_navlink] = ACTIONS(124),
    [anon_sym_btn] = ACTIONS(124),
    [anon_sym_navbtn] = ACTIONS(124),
    [anon_sym_img] = ACTIONS(124),
    [anon_sym_table] = ACTIONS(124),
    [anon_sym_trow] = ACTIONS(124),
    [anon_sym_tprow] = ACTIONS(124),
    [anon_sym_hr] = ACTIONS(124),
    [anon_sym_b] = ACTIONS(124),
    [anon_sym_i] = ACTIONS(124),
    [anon_sym_bq] = ACTIONS(124),
    [anon_sym_footlnk] = ACTIONS(124),
    [anon_sym_footn] = ACTIONS(124),
    [anon_sym_a] = ACTIONS(124),
    [anon_sym_s] = ACTIONS(124),
    [anon_sym_sup] = ACTIONS(124),
    [anon_sym_sub] = ACTIONS(124),
    [anon_sym_disc] = ACTIONS(124),
    [anon_sym_block] = ACTIONS(124),
    [anon_sym_carousel] = ACTIONS(124),
    [anon_sym_code] = ACTIONS(124),
    [anon_sym_pre] = ACTIONS(124),
    [anon_sym_meta] = ACTIONS(124),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [sym_number_argument] = ACTIONS(124),
    [sym_text_body_open_sep] = ACTIONS(124),
    [sym_paragraph_open_sep] = ACTIONS(124),
    [sym_table_open_sep] = ACTIONS(124),
    [sym_multiline_open_sep] = ACTIONS(124),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(124),
    [sym_multiline_raw_open_sep] = ACTIONS(124),
    [sym_one_line_body] = ACTIONS(122),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_POUND] = ACTIONS(128),
    [anon_sym_el] = ACTIONS(128),
    [anon_sym_h] = ACTIONS(128),
    [anon_sym_p] = ACTIONS(128),
    [anon_sym_br] = ACTIONS(128),
    [anon_sym_ul] = ACTIONS(128),
    [anon_sym_ol] = ACTIONS(128),
    [anon_sym_row] = ACTIONS(128),
    [anon_sym_link] = ACTIONS(128),
    [anon_sym_navlink] = ACTIONS(128),
    [anon_sym_btn] = ACTIONS(128),
    [anon_sym_navbtn] = ACTIONS(128),
    [anon_sym_img] = ACTIONS(128),
    [anon_sym_table] = ACTIONS(128),
    [anon_sym_trow] = ACTIONS(128),
    [anon_sym_tprow] = ACTIONS(128),
    [anon_sym_hr] = ACTIONS(128),
    [anon_sym_b] = ACTIONS(128),
    [anon_sym_i] = ACTIONS(128),
    [anon_sym_bq] = ACTIONS(128),
    [anon_sym_footlnk] = ACTIONS(128),
    [anon_sym_footn] = ACTIONS(128),
    [anon_sym_a] = ACTIONS(128),
    [anon_sym_s] = ACTIONS(128),
    [anon_sym_sup] = ACTIONS(128),
    [anon_sym_sub] = ACTIONS(128),
    [anon_sym_disc] = ACTIONS(128),
    [anon_sym_block] = ACTIONS(128),
    [anon_sym_carousel] = ACTIONS(128),
    [anon_sym_code] = ACTIONS(128),
    [anon_sym_pre] = ACTIONS(128),
    [anon_sym_meta] = ACTIONS(128),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [sym_number_argument] = ACTIONS(128),
    [sym_text_body_open_sep] = ACTIONS(128),
    [sym_paragraph_open_sep] = ACTIONS(128),
    [sym_table_open_sep] = ACTIONS(128),
    [sym_multiline_open_sep] = ACTIONS(128),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(128),
    [sym_multiline_raw_open_sep] = ACTIONS(128),
    [sym_one_line_body] = ACTIONS(126),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_el] = ACTIONS(132),
    [anon_sym_h] = ACTIONS(132),
    [anon_sym_p] = ACTIONS(132),
    [anon_sym_br] = ACTIONS(132),
    [anon_sym_ul] = ACTIONS(132),
    [anon_sym_ol] = ACTIONS(132),
    [anon_sym_row] = ACTIONS(132),
    [anon_sym_link] = ACTIONS(132),
    [anon_sym_navlink] = ACTIONS(132),
    [anon_sym_btn] = ACTIONS(132),
    [anon_sym_navbtn] = ACTIONS(132),
    [anon_sym_img] = ACTIONS(132),
    [anon_sym_table] = ACTIONS(132),
    [anon_sym_trow] = ACTIONS(132),
    [anon_sym_tprow] = ACTIONS(132),
    [anon_sym_hr] = ACTIONS(132),
    [anon_sym_b] = ACTIONS(132),
    [anon_sym_i] = ACTIONS(132),
    [anon_sym_bq] = ACTIONS(132),
    [anon_sym_footlnk] = ACTIONS(132),
    [anon_sym_footn] = ACTIONS(132),
    [anon_sym_a] = ACTIONS(132),
    [anon_sym_s] = ACTIONS(132),
    [anon_sym_sup] = ACTIONS(132),
    [anon_sym_sub] = ACTIONS(132),
    [anon_sym_disc] = ACTIONS(132),
    [anon_sym_block] = ACTIONS(132),
    [anon_sym_carousel] = ACTIONS(132),
    [anon_sym_code] = ACTIONS(132),
    [anon_sym_pre] = ACTIONS(132),
    [anon_sym_meta] = ACTIONS(132),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [sym_number_argument] = ACTIONS(132),
    [sym_text_body_open_sep] = ACTIONS(132),
    [sym_paragraph_open_sep] = ACTIONS(132),
    [sym_table_open_sep] = ACTIONS(132),
    [sym_multiline_open_sep] = ACTIONS(132),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(132),
    [sym_multiline_raw_open_sep] = ACTIONS(132),
    [sym_one_line_body] = ACTIONS(130),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(136),
    [anon_sym_el] = ACTIONS(136),
    [anon_sym_h] = ACTIONS(136),
    [anon_sym_p] = ACTIONS(136),
    [anon_sym_br] = ACTIONS(136),
    [anon_sym_ul] = ACTIONS(136),
    [anon_sym_ol] = ACTIONS(136),
    [anon_sym_row] = ACTIONS(136),
    [anon_sym_link] = ACTIONS(136),
    [anon_sym_navlink] = ACTIONS(136),
    [anon_sym_btn] = ACTIONS(136),
    [anon_sym_navbtn] = ACTIONS(136),
    [anon_sym_img] = ACTIONS(136),
    [anon_sym_table] = ACTIONS(136),
    [anon_sym_trow] = ACTIONS(136),
    [anon_sym_tprow] = ACTIONS(136),
    [anon_sym_hr] = ACTIONS(136),
    [anon_sym_b] = ACTIONS(136),
    [anon_sym_i] = ACTIONS(136),
    [anon_sym_bq] = ACTIONS(136),
    [anon_sym_footlnk] = ACTIONS(136),
    [anon_sym_footn] = ACTIONS(136),
    [anon_sym_a] = ACTIONS(136),
    [anon_sym_s] = ACTIONS(136),
    [anon_sym_sup] = ACTIONS(136),
    [anon_sym_sub] = ACTIONS(136),
    [anon_sym_disc] = ACTIONS(136),
    [anon_sym_block] = ACTIONS(136),
    [anon_sym_carousel] = ACTIONS(136),
    [anon_sym_code] = ACTIONS(136),
    [anon_sym_pre] = ACTIONS(136),
    [anon_sym_meta] = ACTIONS(136),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym_number_argument] = ACTIONS(136),
    [sym_text_body_open_sep] = ACTIONS(136),
    [sym_paragraph_open_sep] = ACTIONS(136),
    [sym_table_open_sep] = ACTIONS(136),
    [sym_multiline_open_sep] = ACTIONS(136),
    [sym_multiline_min_spaces_open_sep] = ACTIONS(136),
    [sym_multiline_raw_open_sep] = ACTIONS(136),
    [sym_one_line_body] = ACTIONS(134),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(22), 1,
      aux_sym_multiline_body_repeat1,
    STATE(31), 1,
      sym_multiline_body,
    ACTIONS(138), 2,
      sym_multiline_content,
      sym_multiline_escape_sequence,
  [11] = 3,
    ACTIONS(140), 1,
      anon_sym_DQUOTE2,
    STATE(23), 1,
      aux_sym_string_argument_repeat1,
    ACTIONS(142), 2,
      sym_string_arg_content,
      sym_string_arg_escape_sequence,
  [22] = 3,
    ACTIONS(144), 1,
      sym_multiline_close_sep,
    STATE(26), 1,
      aux_sym_multiline_body_repeat1,
    ACTIONS(146), 2,
      sym_multiline_content,
      sym_multiline_escape_sequence,
  [33] = 3,
    ACTIONS(148), 1,
      anon_sym_DQUOTE2,
    STATE(23), 1,
      aux_sym_string_argument_repeat1,
    ACTIONS(150), 2,
      sym_string_arg_content,
      sym_string_arg_escape_sequence,
  [44] = 3,
    STATE(22), 1,
      aux_sym_multiline_body_repeat1,
    STATE(35), 1,
      sym_multiline_body,
    ACTIONS(138), 2,
      sym_multiline_content,
      sym_multiline_escape_sequence,
  [55] = 3,
    STATE(22), 1,
      aux_sym_multiline_body_repeat1,
    STATE(34), 1,
      sym_multiline_body,
    ACTIONS(138), 2,
      sym_multiline_content,
      sym_multiline_escape_sequence,
  [66] = 3,
    ACTIONS(153), 1,
      sym_multiline_close_sep,
    STATE(26), 1,
      aux_sym_multiline_body_repeat1,
    ACTIONS(155), 2,
      sym_multiline_content,
      sym_multiline_escape_sequence,
  [77] = 3,
    STATE(22), 1,
      aux_sym_multiline_body_repeat1,
    STATE(33), 1,
      sym_multiline_body,
    ACTIONS(138), 2,
      sym_multiline_content,
      sym_multiline_escape_sequence,
  [88] = 3,
    STATE(22), 1,
      aux_sym_multiline_body_repeat1,
    STATE(32), 1,
      sym_multiline_body,
    ACTIONS(138), 2,
      sym_multiline_content,
      sym_multiline_escape_sequence,
  [99] = 3,
    ACTIONS(158), 1,
      anon_sym_DQUOTE2,
    STATE(21), 1,
      aux_sym_string_argument_repeat1,
    ACTIONS(160), 2,
      sym_string_arg_content,
      sym_string_arg_escape_sequence,
  [110] = 1,
    ACTIONS(162), 1,
      anon_sym_LF,
  [114] = 1,
    ACTIONS(164), 1,
      sym_multiline_close_sep,
  [118] = 1,
    ACTIONS(166), 1,
      sym_multiline_close_sep,
  [122] = 1,
    ACTIONS(168), 1,
      sym_multiline_close_sep,
  [126] = 1,
    ACTIONS(170), 1,
      sym_multiline_close_sep,
  [130] = 1,
    ACTIONS(172), 1,
      sym_multiline_close_sep,
  [134] = 1,
    ACTIONS(174), 1,
      aux_sym_comment_token1,
  [138] = 1,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
  [142] = 1,
    ACTIONS(178), 1,
      sym_one_line_body,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 11,
  [SMALL_STATE(22)] = 22,
  [SMALL_STATE(23)] = 33,
  [SMALL_STATE(24)] = 44,
  [SMALL_STATE(25)] = 55,
  [SMALL_STATE(26)] = 66,
  [SMALL_STATE(27)] = 77,
  [SMALL_STATE(28)] = 88,
  [SMALL_STATE(29)] = 99,
  [SMALL_STATE(30)] = 110,
  [SMALL_STATE(31)] = 114,
  [SMALL_STATE(32)] = 118,
  [SMALL_STATE(33)] = 122,
  [SMALL_STATE(34)] = 126,
  [SMALL_STATE(35)] = 130,
  [SMALL_STATE(36)] = 134,
  [SMALL_STATE(37)] = 138,
  [SMALL_STATE(38)] = 142,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_argument, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_argument, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rmltext, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rmltext, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_open, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_open, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_close, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_close, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mlmstext, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mlmstext, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mltext, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mltext, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_syntax, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_syntax, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_argument, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_argument, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_tag, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_tag, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_token, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_token, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textual, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textual, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_body, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_argument_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiline_body_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiline_body_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
