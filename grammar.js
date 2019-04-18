module.exports = grammar({
  name: 'LDPL',

  extras: $ => [/[ \t]/],

  rules: {
    source_file: $ => seq(
        repeat('\n'),
        optional($.data_section),
        $.procedure_section
    ),

    data_section: $ => seq(
        caseInsensitive("data:\n"),
        repeat(choice($.var_definition, "\n"))
    ),

    procedure_section: $ => seq(
        caseInsensitive("procedure:\n"),
        "TODO"
    ),

    var_definition: $ => seq(
        $.identifier,
        caseInsensitive("is"),
        $.type,
        "\n"
    ),

    identifier: $ => /[^\s:]+/,

    //TODO: Make this pretty
    type: $ => /([nN][uU][mM][bB][eE][rR]|[tT][eE][xX][tT])([ \t]+[vV][eE][cC][tT][oO][rR])?/
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
