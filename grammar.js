/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "daleth",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($.token),

    token: ($) =>
      choice(
        $.comment,
        $.symbol_open,
        $.tag,
        $.symbol_close,
        $.argument,
        $.textual,
      ),

    comment: ($) => seq("#", /.*/),

    // Tag keywords
    tag: ($) =>
      choice(
        "el",
        "h",
        "p",
        "br",
        "ul",
        "ol",
        "row",
        "link",
        "navlink",
        "btn",
        "navbtn",
        "img",
        "table",
        "trow",
        "tprow",
        "hr",
        "b",
        "i",
        "bq",
        "footlnk",
        "footn",
        "a",
        "s",
        "sup",
        "sub",
        "disc",
        "block",
        "carousel",
        "code",
        "pre",
        "meta",
      ),

    // Symbols
    symbol_open: ($) => choice("[[", "["),
    symbol_close: ($) => choice("]]", "]"),

    // Argument
    argument: ($) => choice($.string_argument, $.number_argument),

    string_argument: ($) =>
      seq(
        '"',
        repeat(choice($.string_arg_escape_sequence, $.string_arg_content)),
        token.immediate('"'),
      ),

    number_argument: (_) => token.immediate(/d+/),

    // Textual
    textual: ($) =>
      choice(
        $.table_syntax,
        $.paragraph,
        $.mlmstext,
        $.rmltext,
        $.mltext,
        $.text_body,
        $.text_tag,
      ),

    text_body: ($) => seq($.text_body_open_sep, $.one_line_body, "\n"),
    text_tag: ($) => $.one_line_body,
    paragraph: ($) =>
      seq($.paragraph_open_sep, $.multiline_body, $.multiline_close_sep),
    table_syntax: ($) =>
      seq($.table_open_sep, $.multiline_body, $.multiline_close_sep),
    mltext: ($) =>
      seq($.multiline_open_sep, $.multiline_body, $.multiline_close_sep),
    mlmstext: ($) =>
      seq(
        $.multiline_min_spaces_open_sep,
        $.multiline_body,
        $.multiline_close_sep,
      ),
    rmltext: ($) =>
      seq($.multiline_raw_open_sep, $.multiline_body, $.multiline_close_sep),

    // Separators
    text_body_open_sep: ($) => token.immediate(":"),
    paragraph_open_sep: ($) => token.immediate("{-"),
    table_open_sep: ($) => token.immediate("{> table"),
    multiline_open_sep: ($) => token.immediate("{"),
    multiline_min_spaces_open_sep: ($) => token.immediate("{~"),
    multiline_raw_open_sep: ($) => token.immediate("{#"),
    multiline_close_sep: ($) => token.immediate("}"),

    // Bodies
    one_line_body: (_) => token.immediate(prec(1, /[^\n]+/)),
    multiline_body: ($) =>
      repeat1(choice($.multiline_escape_sequence, $.multiline_content)),

    // Content
    string_arg_content: (_) => token.immediate(prec(1, /[^\"\\\n]+/)),
    multiline_content: (_) => token.immediate(prec(1, /[^\}\\]+/)),
    table_content: (_) => token.immediate(prec(1, /[^\|\]\\]+/)),

    // Escapes
    string_arg_escape_sequence: (_) => token.immediate(/\\[\"\\]/),
    multiline_escape_sequence: (_) => token.immediate(/\\[\}\\]/),
    table_escape_sequence: (_) => token.immediate(/\\[\|\]\\]/),
  },
});
