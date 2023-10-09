module.exports = grammar({
  name: 'logstash',

  extras: $ => [
    /\s/,
    $.comment
  ],

  rules: {
    config: $ => repeat1($.plugin_section),

    comment: $ => token(seq('#', /.*/)),

    plugin_section: $ => seq(
      $.plugin_type,
      '{',
      '}'
    ),

    plugin_type: $ => choice('input', 'filter', 'output')
  }
});
