module.exports = grammar({
  name: 'alan',

  // Lexer rules
  extras: $ => [
    /\s/,           // Whitespace
    $.comment       // Comments
  ],

  externals: $ => [
    $.string,       // String literals
  ],

  supertypes: $ => [
    $.expression,   // Super type for expressions
  ],

  precedences: $ => [
    [
      'output_expr_list',
      $.primary_expression,
      $.output_expr,
    ],
    [
      'unary_not',
      'unary_neg',
      'binary_mul',
      'binary_add',
      'binary_rel'
    ]
  ],

  rules: {
    // Root rule
    source_file: $ => seq(
      'source', $.identifier, repeat($.funcdef), $.body
    ),

    // Function definition
    funcdef: $ => seq(
      'function', $.identifier, '(', optional($.param_list), ')',
      optional(seq('to', $.type)), $.body
    ),

    // Parameter list
    param_list: $ => seq(
      $.type, $.identifier, repeat(seq(',', $.type, $.identifier))
    ),

    // Body
    body: $ => seq(
      'begin', repeat($.vardef), $.statements, 'end'
    ),

    // Type
    type: $ => seq(
      choice('boolean', 'integer'), optional('array')
    ),

    // Variable definition
    vardef: $ => seq(
      $.type, $.identifier, repeat(seq(',', $.identifier)), ';'
    ),

    // Statements
    statements: $ => choice(
      'relax',
      seq($.statement, repeat(seq(';', $.statement)))
    ),

    // Single statement
    statement: $ => choice(
      $.assign,
      $.call,
      $.if_stmt,
      $.input,
      $.leave,
      $.output,
      $.while_stmt
    ),

    // Assignment
    assign: $ => seq(
      $.identifier, optional(seq('[', $.expression, ']')), ':=',
      choice($.expression, seq('array', $.expression))
    ),

    // Function call
    call: $ => seq(
      'call', $.identifier, '(', optional($.expression_list), ')'
    ),

    // If statement
    if_stmt: $ => seq(
      'if', $.expression, 'then', $.statements,
      repeat(seq('elsif', $.expression, 'then', $.statements)),
      optional(seq('else', $.statements)), 'end'
    ),

    // Input
    input: $ => seq(
      'get', $.identifier, optional(seq('[', $.expression, ']'))
    ),

    // Leave
    leave: $ => seq(
      'leave', optional($.expression)
    ),

    // Output
    output: $ => seq(
      'put', $.output_expr_list
    ),

    // While loop
    while_stmt: $ => seq(
      'while', $.expression, 'do', $.statements, 'end'
    ),

    // Expression
    expression: $ => choice(
      $.binary_expression,
      $.unary_expression,
      $.primary_expression
    ),

    // Binary expression
    binary_expression: $ => prec.left('binary_rel', seq(
      field('left', $.expression),
      field('operator', choice($.relop, $.addop, $.mulop)),
      field('right', $.expression)
    )),

    // Unary expression
    unary_expression: $ => prec.left(choice(
      seq(field('operator', '-'), field('operand', $.expression)),
      seq(field('operator', 'not'), field('operand', $.expression))
    )),

    // Primary expression
    primary_expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
      seq('(', $.expression, ')'),
      'true',
      'false'
    ),

    // Simple expression
    simple_expression: $ => choice(
      $.binary_expression,
      $.unary_expression,
      $.primary_expression
    ),

    // Term
    term: $ => seq(
      $.factor, repeat(seq($.mulop, $.factor))
    ),

    // Factor
    factor: $ => choice(
      seq($.identifier, optional(choice(seq('[', $.expression, ']'), seq('(', optional($.expression_list), ')')))),
      $.number,
      seq('(', $.expression, ')'),
      seq('not', $.factor),
      'true',
      'false'
    ),

    // Expression list
    expression_list: $ => seq(
      $.expression, repeat(seq(',', $.expression))
    ),

    // Relational operator
    relop: $ => choice(
      '=', '>=', '>', '<=', '<', '<>'
    ),

    // Additive operator
    addop: $ => choice(
      '+', 'or', '-'
    ),

    // Multiplicative operator
    mulop: $ => choice(
      '*', '/', 'rem', 'and'
    ),

    // Output expression list
    output_expr_list: $ => seq(
      $.output_expr, repeat(seq('.', $.output_expr))
    ),

    // Output expression
    output_expr: $ => choice(
      $.string,
      $.expression
    ),

    // Identifier
    identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]*/,

    // Number
    number: $ => /\d+/,

    // Comment
    comment: $ => token(seq('{', /[^}]*\}/))
  }
});
