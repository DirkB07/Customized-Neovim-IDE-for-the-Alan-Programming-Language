(source_file
  "source" @label
  (identifier) @label)
(body
  "begin" @string.special.url
  "end" @string.special.url)
(vardef) @property
(funcdef) @property
(statements) @string
(expression) @number
(identifier) @number

"while" @comment.warning
"if" @comment.warning
"do" @comment.warning
"elsif" @comment.warning
"then" @comment.warning
"else" @comment.warning
"," @number
";" @number

(while_stmt
  "end" @comment.warning)

(if_stmt
  "end" @comment.warning)

(ERROR) @comment.error
