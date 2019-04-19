module.exports = grammar({
  name: 'LDPL',

  extras: $ => [$._whitespace, $.comment],

  rules: {
    source_file: $ => seq(
        repeat('\n'),
        optional($.data_section),
        $.procedure_section
    ),

    _whitespace: $ => /[ \t]/,

    comment: $ => /#.*/,

    _value: $ => choice(
        $._variable,
        $._literal
    ),

    _number_value: $ => choice(
        $._variable,
        $.number
    ),

    _text_value: $ => choice(
        $._variable,
        $.text
    ),

    _variable: $ => choice(
        $.identifier,
        $.vector_element
    ),

    vector_element: $ => seq(
        $.identifier,
        ':',
        $._value
    ),

    _literal: $ => choice(
        $.number,
        $.text
    ),

    number: $ => /[+-]?((\d*\.\d+)|(\d+\.?))([eE][+-]?\d+)?[fFlL]?/,

    text: $ => seq(
        "\"",
        repeat(choice(
            /[^"\\]/,
            $.escape_sequence
        )),
        "\""
    ),

    escape_sequence: $ => /\\./,

    // TODO: Don't match number
    identifier: $ => /[^\s:"][^\s:]*/,

    data_section: $ => seq(
        caseInsensitive("data:\n"),
        repeat(choice($.var_definition, '\n'))
    ),

    procedure_section: $ => seq(
        caseInsensitive("procedure:\n"),
        $._block
    ),

    var_definition: $ => seq(
        $.identifier,
        caseInsensitive(" is "),
        $.type,
        "\n"
    ),

    //TODO: Make this pretty
    type: $ => /([nN][uU][mM][bB][eE][rR]|[tT][eE][xX][tT])([ \t]+[vV][eE][cC][tT][oO][rR])?/,

    _block: $ => repeat1(choice($._statement, '\n')),

    _statement: $ => seq(
        choice(
            $.sub_proc,
            // Control flow
            $.store,
            $.if,
            $.while,
            $.break,
            $.continue,
            $.call_sub,
            $.return,
            $.exit,
            $.wait,
            $.goto,
            $.label,
            // Arithmetic
            $.add,
            $.substract,
            $.multiply,
            $.divide,
            $.modulo,
            $.abs,
            $.store_random,
            $.floor,
            $.ceil,
            // Text
            $.join,
            $.get_char,
            $.store_length,
            $.store_char,
            $.store_char_code,
            $.in_join
        ),
        '\n'
    ),

    sub_proc: $ => seq(
        caseInsensitive("sub-procedure "),
        $.identifier,
        "\n",
        $.body,
        caseInsensitive("end sub-procedure")
    ),

    store: $ => seq(
        caseInsensitive("store "),
        $._value,
        caseInsensitive(" in "),
        $._variable,
    ),

    if: $ => seq(
        $._if_then_block,
        repeat($.else_if),
        optional($.else),
        caseInsensitive("end if")
    ),

    else_if: $ => seq(
        caseInsensitive("else "),
        $._if_then_block
    ),

    else: $ => seq(
        caseInsensitive("else"),
        "\n",
        $.body
    ),

    _if_then_block: $ => seq(
        caseInsensitive("if "),
        $.guard,
        caseInsensitive(" then"),
        "\n",
        $.body
    ),

    guard: $ => seq(
        $._value,
        caseInsensitive(" is "),
        $.rel_op,
        $._whitespace,
        $._value,
    ),

    rel_op: $ => choice(
        caseInsensitive("equal to"),
        caseInsensitive("not equal to"),
        caseInsensitive("greater than"),
        caseInsensitive("less than"),
        caseInsensitive("greater than or equal to"),
        caseInsensitive("less than or equal to"),
    ),

    body: $ => $._block,

    while: $ => seq(
        caseInsensitive("while "),
        $.guard,
        caseInsensitive(" do"),
        "\n",
        $.body,
        caseInsensitive("repeat")
    ),

    break: $ => caseInsensitive("break"),

    continue: $ => caseInsensitive("continue"),

    // TODO: Analyze "call sub-procedure"
    call_sub: $ => seq(
        choice(
            caseInsensitive("call"),
            caseInsensitive("call sub-procedure")
        ),
        $.identifier
    ),

    return: $ => caseInsensitive("return"),

    exit: $ => caseInsensitive("exit"),

    wait: $ => seq(
        caseInsensitive("wait "),
        $._number_value,
        caseInsensitive(" milliseconds")
    ),

    goto: $ => seq(
        caseInsensitive("goto "),
        $.identifier
    ),

    label: $ => seq(
        caseInsensitive("label "),
        $.identifier
    ),

    add: $ => seq(
        caseInsensitive("add "),
        $._number_value,
        caseInsensitive(" and "),
        $._number_value,
        caseInsensitive(" in "),
        $._variable
    ),

    substract: $ => seq(
        caseInsensitive("substract "),
        $._number_value,
        caseInsensitive(" from "),
        $._number_value,
        caseInsensitive(" in "),
        $._variable
    ),

    multiply: $ => seq(
        caseInsensitive("multiply "),
        $._number_value,
        caseInsensitive(" by "),
        $._number_value,
        caseInsensitive(" in "),
        $._variable
    ),

    divide: $ => seq(
        caseInsensitive("divide "),
        $._number_value,
        caseInsensitive(" by "),
        $._number_value,
        caseInsensitive(" in "),
        $._variable
    ),

    modulo: $ => seq(
        caseInsensitive("modulo "),
        $._number_value,
        caseInsensitive(" by "),
        $._number_value,
        caseInsensitive(" in "),
        $._variable
    ),

    abs: $ => seq(
        caseInsensitive("abs "),
        $._variable
    ),

    store_random: $ => seq(
        caseInsensitive("store random in "),
        $._variable
    ),

    floor: $ => seq(
        caseInsensitive("floor "),
        $._variable
    ),

    ceil: $ => seq(
        caseInsensitive("ceil "),
        $._variable
    ),

    join: $ => seq(
        caseInsensitive("join "),
        $._value,
        caseInsensitive(" and "),
        $._value,
        caseInsensitive(" in "),
        $._variable
    ),

    get_char: $ => seq(
        caseInsensitive("get character at "),
        $._number_value,
        caseInsensitive(" from "),
        $._text_value,
        caseInsensitive(" in "),
        $._variable
    ),

    store_length: $ => seq(
        caseInsensitive("store length of "),
        $._text_value,
        caseInsensitive(" in "),
        $._variable
    ),

    store_char: $ => seq(
        caseInsensitive("store character "),
        $._number_value,
        caseInsensitive(" in "),
        $._variable
    ),

    store_char_code: $ => seq(
        caseInsensitive("store character code of "),
        $._text_value,
        caseInsensitive(" in "),
        $._variable
    ),

    in_join: $ => seq(
        caseInsensitive("in "),
        $._variable,
        caseInsensitive(" join "),
        repeat1(seq(choice(
            $._value,
            caseInsensitive("crlf")
        ), $._whitespace)),
        choice(
            $._value,
            caseInsensitive("crlf")
        )
    ),
  }
});

//https://github.com/tree-sitter/tree-sitter/issues/122#issuecomment-356370963
function caseInsensitive(keyword) {
  return new RegExp(keyword
    .split('')
    .map(letter =>
        letter == ' ' ? '[ \t]+' : `[${letter}${letter.toUpperCase()}]`)
    .join('')
  )
}
