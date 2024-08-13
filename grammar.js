/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "daleth",

  rules: {
    // The top-level rule
    source_file: ($) => repeat($._token),

    _token: ($) =>
      choice($.empty_line, $.comment, $.symbol, $.tag, $.argument, $.textual),

    // Define each of the tokens from the Chumsky parser

    comment: ($) => token(prec(0, seq("#", /[^\n]*/))),
    empty_line: ($) => token(prec(0, seq(/\n\s*\n/))),

    symbol: ($) => choice("[[", "]]", "[", "]"),

    tag: ($) =>
      token(
        prec(
          1,
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
        ),
      ),

    argument: ($) => choice($.number_argument, $.text_argument),

    number_argument: ($) => /\d+/,

    text_argument: ($) =>
      seq(
        '"',
        repeat(
          choice(
            token.immediate(/[^"\\\n]/), // Match any character except quotes and backslashes
            "\\\\", // Match escaped backslashes
            '\\"', // Match escaped quotes
          ),
        ),
        '"',
      ),

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

    table_syntax: ($) =>
      seq(
        alias("{> ", $.custom_parser_open),
        alias("table", $.table_parser_id),
        repeat(
          choice(
            token.immediate(/[^}\\]/), // Match any character except } and \
            "\\\\", // Match escaped backslashes
            "\\}", // Match escaped }
          ),
        ),
        alias("}", $.multiline_close),
      ),

    paragraph: ($) =>
      seq(
        alias("{-", $.paragraph_open),
        repeat(
          choice(
            token.immediate(/[^}\\]/), // Match any character except } and \
            "\\\\", // Match escaped backslashes
            "\\}", // Match escaped }
          ),
        ),
        alias("}", $.multiline_close),
      ),

    mlmstext: ($) =>
      seq(
        alias("{~", $.mlms_open),
        alias(/\d+/, $.mlms_number),
        repeat(
          choice(
            token.immediate(/[^}\\]/), // Match any character except } and \
            "\\\\", // Match escaped backslashes
            "\\}", // Match escaped }
          ),
        ),
        alias("}", $.multiline_close),
      ),

    rmltext: ($) =>
      seq(
        alias("{#", $.rml_open),
        repeat(
          choice(
            token.immediate(/[^}\\]/), // Match any character except } and \
            "\\\\", // Match escaped backslashes
            "\\}", // Match escaped }
          ),
        ),
        alias("}", $.multiline_close),
      ),

    mltext: ($) =>
      seq(
        alias("{", $.multiline_open),
        repeat(
          choice(
            token.immediate(/[^}\\]/), // Match any character except } and \
            "\\\\", // Match escaped backslashes
            "\\}", // Match escaped }
          ),
        ),
        alias("}", $.multiline_close),
      ),

    text_body: ($) => seq(alias(":", $.text_body_open), /[^\n]+/),

    text_tag: ($) => token(prec(-1, /[^\n]+/)),
  },
});
