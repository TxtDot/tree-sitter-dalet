#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 1
#define TOKEN_COUNT 24
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
  anon_sym_LBRACE_GTtable = 13,
  aux_sym_table_syntax_token1 = 14,
  anon_sym_BSLASH_RBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LBRACE_DASH = 17,
  anon_sym_LBRACE_TILDE = 18,
  anon_sym_LBRACE_POUND = 19,
  anon_sym_LBRACE = 20,
  anon_sym_COLON = 21,
  aux_sym_text_body_token1 = 22,
  sym_text_tag = 23,
  sym_source_file = 24,
  sym__token = 25,
  sym_symbol = 26,
  sym_argument = 27,
  sym_number_argument = 28,
  sym_text_argument = 29,
  sym_textual = 30,
  sym_table_syntax = 31,
  sym_paragraph = 32,
  sym_mlmstext = 33,
  sym_rmltext = 34,
  sym_mltext = 35,
  sym_text_body = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_text_argument_repeat1 = 38,
  aux_sym_table_syntax_repeat1 = 39,
  alias_sym_mlms_number = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_empty_line] = "empty_line",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_tag] = "tag",
  [aux_sym_number_argument_token1] = "number_argument_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_argument_token1] = "text_argument_token1",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_LBRACE_GTtable] = "table_open",
  [aux_sym_table_syntax_token1] = "table_syntax_token1",
  [anon_sym_BSLASH_RBRACE] = "\\}",
  [anon_sym_RBRACE] = "multiline_close",
  [anon_sym_LBRACE_DASH] = "paragraph_open",
  [anon_sym_LBRACE_TILDE] = "mlms_open",
  [anon_sym_LBRACE_POUND] = "rml_open",
  [anon_sym_LBRACE] = "multiline_open",
  [anon_sym_COLON] = ":",
  [aux_sym_text_body_token1] = "text_body_token1",
  [sym_text_tag] = "text_tag",
  [sym_source_file] = "source_file",
  [sym__token] = "_token",
  [sym_symbol] = "symbol",
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
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_tag] = sym_tag,
  [aux_sym_number_argument_token1] = aux_sym_number_argument_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_text_argument_token1] = aux_sym_text_argument_token1,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [anon_sym_LBRACE_GTtable] = anon_sym_LBRACE_GTtable,
  [aux_sym_table_syntax_token1] = aux_sym_table_syntax_token1,
  [anon_sym_BSLASH_RBRACE] = anon_sym_BSLASH_RBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_DASH] = anon_sym_LBRACE_DASH,
  [anon_sym_LBRACE_TILDE] = anon_sym_LBRACE_TILDE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_text_body_token1] = aux_sym_text_body_token1,
  [sym_text_tag] = sym_text_tag,
  [sym_source_file] = sym_source_file,
  [sym__token] = sym__token,
  [sym_symbol] = sym_symbol,
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
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
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
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_GTtable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_table_syntax_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_RBRACE] = {
    .visible = true,
    .named = false,
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
    .named = false,
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
  [sym_symbol] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '"', 71,
        '#', 54,
        ':', 84,
        '[', 58,
        '\\', 7,
        ']', 59,
        'a', 60,
        'b', 61,
        'c', 11,
        'd', 26,
        'e', 29,
        'f', 39,
        'h', 65,
        'i', 63,
        'l', 27,
        'm', 23,
        'n', 12,
        'o', 29,
        'p', 66,
        'r', 35,
        's', 68,
        't', 13,
        'u', 29,
        '{', 82,
        '}', 78,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 55,
        '"', 71,
        '#', 54,
        ':', 84,
        '[', 58,
        ']', 59,
        'a', 60,
        'b', 62,
        'c', 91,
        'd', 106,
        'e', 109,
        'f', 119,
        'h', 65,
        'i', 64,
        'l', 107,
        'm', 104,
        'n', 92,
        'o', 109,
        'p', 67,
        'r', 115,
        's', 69,
        't', 93,
        'u', 109,
        '{', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '}') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '}') ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '}') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'b' ||
          lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '\n', 1,
        '"', 71,
        '#', 54,
        ':', 84,
        '[', 58,
        ']', 59,
        'a', 60,
        'b', 62,
        'c', 91,
        'd', 106,
        'e', 109,
        'f', 119,
        'h', 65,
        'i', 64,
        'l', 107,
        'm', 104,
        'n', 92,
        'o', 109,
        'p', 67,
        'r', 115,
        's', 69,
        't', 93,
        'u', 109,
        '{', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_empty_line);
      ADVANCE_MAP(
        '\n', 55,
        'a', 60,
        'b', 62,
        'c', 91,
        'd', 106,
        'e', 109,
        'f', 119,
        'h', 65,
        'i', 64,
        'l', 107,
        'm', 104,
        'n', 92,
        'o', 109,
        'p', 67,
        'r', 115,
        's', 69,
        't', 93,
        'u', 109,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == ']') ADVANCE(57);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'q' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == 'q' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_number_argument_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_text_argument_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE_GTtable);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_table_syntax_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE_DASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE_TILDE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '>') ADVANCE(4);
      if (lookahead == '~') ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '~') ADVANCE(80);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_text_tag);
      ADVANCE_MAP(
        '\n', 1,
        '"', 71,
        '#', 54,
        ':', 84,
        '[', 58,
        ']', 59,
        'a', 60,
        'b', 62,
        'c', 91,
        'd', 106,
        'e', 109,
        'f', 119,
        'h', 65,
        'i', 64,
        'l', 107,
        'm', 104,
        'n', 92,
        'o', 109,
        'p', 67,
        'r', 115,
        's', 69,
        't', 93,
        'u', 109,
        '{', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_text_tag);
      ADVANCE_MAP(
        '\n', 55,
        '"', 71,
        '#', 54,
        ':', 84,
        '[', 58,
        ']', 59,
        'a', 60,
        'b', 62,
        'c', 91,
        'd', 106,
        'e', 109,
        'f', 119,
        'h', 65,
        'i', 64,
        'l', 107,
        'm', 104,
        'n', 92,
        'o', 109,
        'p', 67,
        'r', 115,
        's', 69,
        't', 93,
        'u', 109,
        '{', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'b') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'k') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'v') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'w') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead == 'b' ||
          lookahead == 'p') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_text_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [aux_sym_number_argument_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_GTtable] = ACTIONS(1),
    [anon_sym_BSLASH_RBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym__token] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_argument] = STATE(3),
    [sym_number_argument] = STATE(13),
    [sym_text_argument] = STATE(13),
    [sym_textual] = STATE(3),
    [sym_table_syntax] = STATE(11),
    [sym_paragraph] = STATE(11),
    [sym_mlmstext] = STATE(11),
    [sym_rmltext] = STATE(11),
    [sym_mltext] = STATE(11),
    [sym_text_body] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_empty_line] = ACTIONS(5),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [sym_tag] = ACTIONS(5),
    [aux_sym_number_argument_token1] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE_GTtable] = ACTIONS(13),
    [anon_sym_LBRACE_DASH] = ACTIONS(15),
    [anon_sym_LBRACE_TILDE] = ACTIONS(17),
    [anon_sym_LBRACE_POUND] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [sym_text_tag] = ACTIONS(25),
  },
  [2] = {
    [sym__token] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_argument] = STATE(2),
    [sym_number_argument] = STATE(13),
    [sym_text_argument] = STATE(13),
    [sym_textual] = STATE(2),
    [sym_table_syntax] = STATE(11),
    [sym_paragraph] = STATE(11),
    [sym_mlmstext] = STATE(11),
    [sym_rmltext] = STATE(11),
    [sym_mltext] = STATE(11),
    [sym_text_body] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
    [sym_empty_line] = ACTIONS(29),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(32),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(32),
    [anon_sym_RBRACK] = ACTIONS(32),
    [sym_tag] = ACTIONS(29),
    [aux_sym_number_argument_token1] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [anon_sym_LBRACE_GTtable] = ACTIONS(41),
    [anon_sym_LBRACE_DASH] = ACTIONS(44),
    [anon_sym_LBRACE_TILDE] = ACTIONS(47),
    [anon_sym_LBRACE_POUND] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_COLON] = ACTIONS(56),
    [sym_text_tag] = ACTIONS(59),
  },
  [3] = {
    [sym__token] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_argument] = STATE(2),
    [sym_number_argument] = STATE(13),
    [sym_text_argument] = STATE(13),
    [sym_textual] = STATE(2),
    [sym_table_syntax] = STATE(11),
    [sym_paragraph] = STATE(11),
    [sym_mlmstext] = STATE(11),
    [sym_rmltext] = STATE(11),
    [sym_mltext] = STATE(11),
    [sym_text_body] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_comment] = ACTIONS(64),
    [sym_empty_line] = ACTIONS(64),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [sym_tag] = ACTIONS(64),
    [aux_sym_number_argument_token1] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_LBRACE_GTtable] = ACTIONS(13),
    [anon_sym_LBRACE_DASH] = ACTIONS(15),
    [anon_sym_LBRACE_TILDE] = ACTIONS(17),
    [anon_sym_LBRACE_POUND] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(23),
    [sym_text_tag] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [22] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [44] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [66] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [88] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [110] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [132] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [154] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [176] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [198] = 2,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [220] = 2,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [242] = 2,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [264] = 2,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(116), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [286] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [308] = 2,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [330] = 2,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [352] = 2,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 16,
      sym_comment,
      sym_empty_line,
      anon_sym_LBRACK_LBRACK,
      anon_sym_RBRACK_RBRACK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_tag,
      aux_sym_number_argument_token1,
      anon_sym_DQUOTE,
      anon_sym_LBRACE_GTtable,
      anon_sym_LBRACE_DASH,
      anon_sym_LBRACE_TILDE,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE,
      anon_sym_COLON,
      sym_text_tag,
  [374] = 4,
    ACTIONS(136), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(134), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [388] = 4,
    ACTIONS(142), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(140), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [402] = 4,
    ACTIONS(148), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(146), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [416] = 4,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      aux_sym_text_argument_token1,
    STATE(28), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(156), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [430] = 4,
    ACTIONS(148), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(146), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [444] = 4,
    ACTIONS(148), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(146), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [458] = 4,
    ACTIONS(148), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(146), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [472] = 4,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      aux_sym_text_argument_token1,
    STATE(29), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(168), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [486] = 4,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      aux_sym_text_argument_token1,
    STATE(29), 1,
      aux_sym_text_argument_repeat1,
    ACTIONS(175), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DQUOTE,
  [500] = 4,
    ACTIONS(181), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(178), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [514] = 4,
    ACTIONS(188), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(186), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [528] = 4,
    ACTIONS(148), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(146), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [542] = 4,
    ACTIONS(196), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(194), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [556] = 4,
    ACTIONS(202), 1,
      aux_sym_table_syntax_token1,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_table_syntax_repeat1,
    ACTIONS(200), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_RBRACE,
  [570] = 1,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
  [574] = 1,
    ACTIONS(208), 1,
      aux_sym_text_body_token1,
  [578] = 1,
    ACTIONS(210), 1,
      aux_sym_number_argument_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 220,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 308,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 374,
  [SMALL_STATE(22)] = 388,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 416,
  [SMALL_STATE(25)] = 430,
  [SMALL_STATE(26)] = 444,
  [SMALL_STATE(27)] = 458,
  [SMALL_STATE(28)] = 472,
  [SMALL_STATE(29)] = 486,
  [SMALL_STATE(30)] = 500,
  [SMALL_STATE(31)] = 514,
  [SMALL_STATE(32)] = 528,
  [SMALL_STATE(33)] = 542,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 570,
  [SMALL_STATE(36)] = 574,
  [SMALL_STATE(37)] = 578,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_syntax, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_syntax, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mltext, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mltext, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rmltext, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rmltext, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mlmstext, 3, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mlmstext, 3, 0, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rmltext, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rmltext, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textual, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textual, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_argument, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_argument, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mlmstext, 4, 0, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mlmstext, 4, 0, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_argument, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_argument, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_argument, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_argument, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_syntax, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_syntax, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_body, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mltext, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mltext, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_argument_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_syntax_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_syntax_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_syntax_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [206] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
