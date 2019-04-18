module.exports = grammar({
  name: 'LDPL',

  rules: {
    source_file: $ => seq(
        optional($.data_section),
        $.procedure_section
    ),

    data_section: $ => seq(
        caseInsensitive("data:\n"),
        repeat($.var_definition)
    ),

    procedure_section: $ => seq(
        caseInsensitive("procedure:\n"),
        "TODO"
    ),

    var_definition: $ => seq(
        $.identifier,
        caseInsensitive("is"),
        $.type
    ),

    identifier: $ => /[^\s:]+/,

    //TODO: Make this pretty
    type: $ => /([nN][uU][mM][bB][eE][rR]|[tT][eE][xX][tT])(\s+[vV][eE][cC][tT][oO][rR])?/
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
