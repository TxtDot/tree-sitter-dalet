/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "daleth",

  rules: {
    source_file: ($) => repeat($._token),

    _token: ($) =>
      choice(
        $.empty_line,
        $.comment,
        $.el_tags,
        $.tags_body,
        $.tag,
        $.argument,
        $.textual,
        $.text_tag,
        $.code,
      ),

    comment: ($) => seq("#", /[^\n]*/),
    empty_line: ($) => seq(/\n\s*\n/),

    el_tags: ($) =>
      seq(
        alias("[[", $.symbol_open),
        repeat($._token),
        alias("]]", $.symbol_close),
      ),
    tags_body: ($) =>
      seq(alias("[", $.symbol), repeat($._token), alias("]", $.symbol_close)),

    code: ($) => prec(1, seq(alias("code", $.tag), $.text_argument, $.textual)),

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

    argument: ($) => choice($.number_argument, $.text_argument),

    number_argument: ($) => /\d+/,

    text_argument: ($) =>
      seq(
        '"',
        alias(
          repeat(
            choice(
              token.immediate(/[^"\\\n]/), // Match any character except quotes and backslashes
              alias("\\\\", $.escape), // Match escaped backslashes
              alias('\\"', $.escape), // Match escaped quotes
            ),
          ),
          $.text_argument_value,
        ),
        '"',
      ),

    textual: ($) =>
      choice(
        $._table_syntax,
        $._paragraph,
        $._mlmstext,
        $._rmltext,
        $._mltext,
        $._text_body,
      ),

    _table_syntax: ($) =>
      seq(
        alias("{> ", $.symbol_open),
        alias("table", $.table_parser_id),
        alias(
          repeat(
            choice(
              token.immediate(/[^}\\]/), // Match any character except } and \
              alias("\\\\", $.escape), // Match escaped backslashes
              alias("\\}", $.escape), // Match escaped }
            ),
          ),
          $.textual_value,
        ),
        alias("}", $.symbol_close),
      ),

    _paragraph: ($) =>
      seq(
        alias("{-", $.symbol_open),
        alias(
          repeat(
            choice(
              token.immediate(/[^}\\]/), // Match any character except } and \
              alias("\\\\", $.escape), // Match escaped backslashes
              alias("\\}", $.escape), // Match escaped }
            ),
          ),
          $.textual_value,
        ),
        alias("}", $.symbol_close),
      ),

    _mlmstext: ($) =>
      seq(
        alias("{~", $.symbol_open),
        alias(/\d+/, $.mlms_number),
        alias(
          repeat(
            choice(
              token.immediate(/[^}\\]/), // Match any character except } and \
              alias("\\\\", $.escape), // Match escaped backslashes
              alias("\\}", $.escape), // Match escaped }
            ),
          ),
          $.textual_value,
        ),
        alias("}", $.symbol_close),
      ),

    _rmltext: ($) =>
      seq(
        alias("{#", $.symbol_open),
        alias(
          repeat(
            choice(
              token.immediate(/[^}\\]/), // Match any character except } and \
              alias("\\\\", $.escape), // Match escaped backslashes
              alias("\\}", $.escape), // Match escaped }
            ),
          ),
          $.textual_value,
        ),
        alias("}", $.symbol_close),
      ),

    _mltext: ($) =>
      seq(
        alias("{", $.symbol_open),
        alias(
          repeat(
            choice(
              token.immediate(/[^}\\]/), // Match any character except } and \
              alias("\\\\", $.escape), // Match escaped backslashes
              alias("\\}", $.escape), // Match escaped }
            ),
          ),
          $.textual_value,
        ),
        alias("}", $.symbol_close),
      ),

    _text_body: ($) =>
      seq(alias(":", $.text_body_open), alias(/[^\n]+/, $.textual_value)),

    text_tag: ($) => seq(alias("-", $.text_tag_open), /[^\n]+/),
  },
});
