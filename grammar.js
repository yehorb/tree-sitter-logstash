module.exports = grammar({
  name: 'logstash',

  extras: $ => [
    /\s/,
    $.comment
  ],

  externals: $ => [
    $._name_start
  ],

  rules: {
    config: $ => repeat1($.plugin_section),

    comment: $ => token(seq('#', /.*/)),

    plugin_section: $ => seq(
      $.plugin_type,
      '{',
      repeat($.plugin),
      '}'
    ),

    plugin_type: $ => choice('input', 'filter', 'output'),

    plugin: $ => seq(
      $.name,
      '{',
      repeat($.attribute),
      '}'
    ),

    // $.name token only makes sense in context where it is followed by brackets or arrow
    // this rule is expressed in external scanner which produced zero-width lookahead
    // based token.
    name: $ => seq($._name_start, /[A-Za-z0-9_-]+/),

    attribute: $ => seq(
      $.name,
      '=>',
      $._value
    ),

    _value: $ => choice(
      $.plugin,
      $.bareword,
    ),

    bareword: $ => /[A-Za-z_][A-Za-z0-9_]+/,
  }
});
