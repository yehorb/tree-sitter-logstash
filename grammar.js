module.exports = grammar({
  name: 'logstash',

  extras: $ => [
    /\s/,
    $.comment
  ],

  externals: $ => [
    $._name_marker
  ],

  rules: {
    config: $ => repeat1($.plugin_section),

    comment: $ => token(seq('#', /.*/)),

    plugin_section: $ => seq(
      $.plugin_type,
      '{',
      repeat($.branch_or_plugin),
      '}'
    ),

    branch_or_plugin: $ => choice($.branch, $.plugin),

    plugin_type: $ => choice('input', 'filter', 'output'),

    plugins: $ => repeat($.plugin),

    plugin: $ => seq(
      $.name,
      '{',
      field(
        'attributes',
        repeat1($.attribute)
      ),
      '}'
    ),

    name: $ => seq(
      choice(
        /[A-Za-z0-9_-]+/,
        $.string
      ),
      $._name_token
    ),

    attribute: $ => seq(
      $.name,
      '=>',
      $.value
    ),

    value: $ => choice(
      $.plugin,
      $.bareword,
      $.string,
      $.number,
      $.array,
      $.hash
    ),

    array_value: $ => choice(
      $.bareword,
      $.string,
      $.number,
      $.array,
      $.hash
    ),

    bareword: $ => /[A-Za-z_][A-Za-z0-9_]+/,

    double_quoted_string: $ => /"(\\"|[^"])*"/,

    single_quoted_string: $ => /'(\\'|[^'])*'/,

    string: $ => choice($.double_quoted_string, $.single_quoted_string),

    regexp: $ => /\/(\\\/|[^\/])*\//,

    number: $ => /-?[0-9]+(\.[0-9]*)?/,

    array: $ => seq(
      '[',
      optional(seq($.array_value, repeat(seq(',', $.array_value)))),
      ']'
    ),

    hash: $ => seq(
      '{',
      repeat1($.hashentry),
      '}'
    ),

    hashentry: $ => seq(
      field('name', choice($.number, $.bareword, $.string)),
      '=>',
      $.value
    ),

    // Conditions
    branch: $ => seq(
      $.if,
      repeat($.else_if),
      optional($.else)
    ),

    if: $ => seq(
      'if',
      $.condition,
      '{',
      repeat($.branch_or_plugin),
      '}'
    ),

    else_if: $ => seq(
      'else',
      'if',
      $.condition,
      '{',
      repeat($.branch_or_plugin),
      '}'
    ),

    else: $ => seq(
      'else',
      '{',
      repeat($.branch_or_plugin),
      '}'
    ),

    condition: $ => seq(
      $.expression,
      repeat(seq($.boolean_operator, $.expression))
    ),

    expression: $ => choice(
      seq('(', $.condition, ')'),
      $.negative_expression,
      $.in_expression,
      $.not_in_expression,
      $.compare_expression,
      $.regexp_expression,
      $.rvalue
    ),

    negative_expression: $ => choice(
      seq('!', '(', $.condition, ')'),
      seq('!', $.selector)
    ),

    in_expression: $ => seq(
      $.rvalue,
      $.in_operator,
      $.rvalue
    ),

    not_in_expression: $ => seq(
      $.rvalue,
      $.not_in_operator,
      $.rvalue
    ),

    in_operator: $ => 'in',

    not_in_operator: $ => seq('not ', 'in'),

    rvalue: $ => choice(
      $.string,
      $.number,
      $.selector,
      $.array,
      $.method_call,
      $.regexp
    ),

    method_call: $ => seq(
      $.method,
      '(',
      optional(seq($.rvalue, repeat(seq(',', $.rvalue)))),
      ')'
    ),

    method: $ => $.bareword,

    compare_expression: $ => seq(
      $.rvalue,
      $.compare_operator,
      $.rvalue
    ),

    compare_operator: $ => choice('==', '!=', '<=', '>=', '<', '>'),

    regexp_expression: $ => seq(
      $.rvalue,
      $.regexp_operator,
      choice($.string, $.regexp)
    ),

    regexp_operator: $ => choice('=~', '!~'),

    boolean_operator: $ => choice('and', 'or', 'xor', 'nand'),

    selector: $ => repeat1($.selector_element),

    selector_element: $ => seq('[', /[^\]\[,]+/, ']')
  }
});
