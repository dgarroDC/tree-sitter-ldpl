module.exports = grammar({
  name: 'LDPL',

  extras: $ => [$._whitespace],

  rules: {
    source_file: $ => seq(
        repeat('\n'),
        optional($.data_section),
        $.procedure_section
    ),

    _whitespace: $ => /[ \t]/,

    _identifier: $ => /[^\s:"][^\s:]*/,

    _value: $ => choice(
        $._variable,
        $._literal
    ),

    _variable: $ => choice(
        $.var_name,
        $.vector_element
    ),

    var_name: $ => $._identifier,

    vector_element: $ => seq(
        $.var_name,
        ':',
        $._value
    ),

    _literal: $ => choice(
        $.number,
        $.text
    ),

    number: $ => "123",

    text: $ => /"([^"\\]||\\[abtnvfre0\\"])*"/,

    data_section: $ => seq(
        caseInsensitive("data:\n"),
        repeat(choice($.var_definition, '\n'))
    ),

    procedure_section: $ => seq(
        caseInsensitive("procedure:\n"),
        repeat(choice($._statement, '\n'))
    ),

    var_definition: $ => seq(
        $.var_name,
        $._whitespace,
        caseInsensitive("is"),
        $._whitespace,
        $.type,
        "\n"
    ),

    //TODO: Make this pretty
    type: $ => /([nN][uU][mM][bB][eE][rR]|[tT][eE][xX][tT])([ \t]+[vV][eE][cC][tT][oO][rR])?/,

    _statement: $ => choice(
        // Control flow
        $.store//,
        // $.if,
        // $.while,
        // $.break,
        // $.continue,
        // $.call,
        // $.return,
        // $.exit,
        // $.wait,
        // $.goto,
        // $.label,
    ),

    store: $ => seq(
        caseInsensitive("store"),
        $._whitespace,
        $._value,
        $._whitespace,
        caseInsensitive("in"),
        $._whitespace,
        $._variable
    )
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
