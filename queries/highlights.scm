(comment) @comment
[
  (number_argument)
  (tag)
] @tag


(mlms_number) @number

[
  (textual)
  (text_tag)
] @string.special
(escape) @string.escape
(text_argument) @string

(table_parser_id) @keyword

[
  (symbol_open)
  (symbol_close)
] @punctuation.bracket

[
  (text_body_open)
  (text_tag_open)
] @punctuation.delimiter
