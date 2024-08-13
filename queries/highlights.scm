(comment) @comment
(tag) @tag

[
  (number_argument)
  (mlms_number)
] @number

[
  (textual)
  (text_argument)
] @string

(table_parser_id) @keyword


[
  (symbol)

  (custom_parser_open)
  (paragraph_open)
  (mlms_open)
  (rml_open)
  (multiline_open)
  (multiline_close)
] @punctuation.bracket

(text_body_open) @punctuation.delimiter
