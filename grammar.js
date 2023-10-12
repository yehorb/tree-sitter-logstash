module.exports = grammar({
  name: 'logstash',

  rules: {
    config: $ => repeat1($.plugin_section),

    plugin_section: $ => seq(
      $.plugin_type,
      '{',
      '}'
    ),

    plugin_type: $ => choice('input', 'filter', 'output')
  }
});
