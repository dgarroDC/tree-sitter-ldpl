module.exports = grammar({
  name: 'LDPL',

  rules: {
    source_file: $ => seq(
        optional($.data_section),
        $.procedure_section
    ),

    data_section: $ => seq(
        caseInsensitive("data:\n"),
        "TODO"
    ),

    procedure_section: $ => seq(
        caseInsensitive("procedure:\n"),
        "TODO"
    ),
  }
});

//https://github.com/tree-sitter/tree-sitter/issues/122#issuecomment-356370963
function caseInsensitive(keyword) {
  return new RegExp(keyword
    .split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
  )
}
