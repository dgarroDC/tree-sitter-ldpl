module.exports = grammar({
  name: 'LDPL',

  rules: {
    source_file: $ => seq(
        optional($.data_section),
        $.procedure_section
    ),

    data_section: $ => seq(
        "DATA:\n",
        "TODO"
    ),

    procedure_section: $ => seq(
        "PROCEDURE:\n",
        "TODO"
    ),
  }
});
