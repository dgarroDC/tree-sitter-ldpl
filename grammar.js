module.exports = grammar({
  name: 'LDPL',

  extras: $ => [$._whitespace, $.comment],

  rules: {
    source_file: $ => seq(
        repeat($._newline),
        optional($.data_section),
        $.procedure_section
    ),

    _whitespace: $ => /[ \t]/,

    _newline: $ => choice(
        '\n',
        '\r\n'
    ),

    comment: $ => token(prec(1, /#.*/)),

    _value: $ => choice(
        $._variable,
        $._literal,
        $.crlf
    ),

    _number_value: $ => choice(
        $._variable,
        $.number
    ),

    _text_value: $ => choice(
        $._variable,
        $.text,
        $.crlf
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
            token(prec(2, /[^"\\]/)),
            $.escape_sequence
        )),
        "\""
    ),

    escape_sequence: $ => /\\./,

    crlf: $ => caseInsensitive("crlf"),

    // TODO: Don't match number
    identifier: $ => /[^\s:"]*/,

    data_section: $ => seq(
        $.data_label,
        repeat(choice($.var_declaration, $._newline))
    ),

    data_label: $ => seq(
        caseInsensitive("data:"),
        $._newline
    ),

    procedure_section: $ => seq(
        $.procedure_label,
        $._block
    ),

    procedure_label: $ => seq(
        caseInsensitive("procedure:"),
        $._newline
    ),

    var_declaration: $ => seq(
        $.identifier,
        caseInsensitive(" is "),
        $.type,
        $._newline
    ),

    type: $ => seq(
        optional(caseInsensitive("external ")),
        choice(
            caseInsensitive("number"),
            caseInsensitive("text")
        ),
        optional(caseInsensitive(" vector"))
    ),

    _block: $ => repeat1(choice($._statement, $._newline)),

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
            $.call_ext,
            $.return,
            $.exit,
            $.wait,
            $.goto,
            $.label,
            // Arithmetic
            $.add,
            $.subtract,
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
            $.store_quote,
            $.in_join,
            // IO
            $.display,
            $.accept,
            $.execute,
            $.execute_store_output,
            $.execute_store_exit_code,
            $.accept_until_eof,
            $.load_file,
            $.write_file,
            $.append_file,
        ),
        $._newline
    ),

    sub_proc: $ => seq(
        $.sub_proc_begin,
        $._newline,
        optional($.body),
        $.sub_proc_end
    ),

    sub_proc_begin: $ => seq(
        caseInsensitive("sub-procedure "),
        $.identifier
    ),

    sub_proc_end: $ => caseInsensitive("end sub-procedure"),

    store: $ => seq(
        caseInsensitive("store "),
        $._value,
        caseInsensitive(" in "),
        $._variable,
    ),

    if: $ => seq(
        $.if_begin,
        $._newline,
        optional($.body),
        repeat($.else_if),
        optional($.else),
        $.if_end
    ),

    if_begin: $ => seq(
        caseInsensitive("if "),
        $.guard,
        caseInsensitive(" then"),
    ),

    else_if: $ => seq(
        $.else_if_begin,
        $._newline,
        optional($.body)
    ),

    else_if_begin: $ => seq(
        caseInsensitive("else if "),
        $.guard,
        caseInsensitive(" then"),
    ),

    else: $ => seq(
        $.else_begin,
        $._newline,
        optional($.body),
    ),

    else_begin: $ => caseInsensitive("else"),

    if_end: $ => choice(
        caseInsensitive("end if"),
        caseInsensitive("end-if")
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
        $.while_begin,
        $._newline,
        optional($.body),
        $.while_end
    ),

    while_begin: $ => seq(
        caseInsensitive("while "),
        $.guard,
        caseInsensitive(" do")
    ),

    while_end: $ => caseInsensitive("repeat"),

    break: $ => caseInsensitive("break"),

    continue: $ => caseInsensitive("continue"),

    call_sub: $ => seq(
        choice(
            caseInsensitive("call "),
            caseInsensitive("call sub-procedure ")
        ),
        $.identifier
    ),

    call_ext: $ => seq(
        caseInsensitive("call external "),
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

    subtract: $ => seq(
        caseInsensitive("subtract "),
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

    store_quote: $ => seq(
        $.store_quote_begin,
        $._newline,
        optional($.quote),
        $.store_quote_end
    ),

    store_quote_begin: $ => seq(
        caseInsensitive("store quote in"),
        $._variable
    ),

    store_quote_end: $ => caseInsensitive("end quote"),

    quote: $ => repeat1($._quote_line),

    _quote_line: $ => seq(
        optional(token(prec(2, '#'))),
        /.*/,
        $._newline
    ),

    in_join: $ => seq(
        caseInsensitive("in "),
        $._variable,
        caseInsensitive(" join "),
        repeat1(seq(
            $._value,
            $._whitespace)),
        $._value
    ),

    display: $ => seq(
        caseInsensitive("display "),
        repeat(seq(
            $._value,
            $._whitespace)),
        $._value
    ),

    accept: $ => seq(
        caseInsensitive("accept "),
        $._variable
    ),

    execute: $ => seq(
        caseInsensitive("execute "),
        $._text_value
    ),

    execute_store_output: $ => seq(
        caseInsensitive("execute "),
        $._text_value,
        caseInsensitive(" and store output in "),
        $._variable
    ),

    execute_store_exit_code: $ => seq(
        caseInsensitive("execute "),
        $._text_value,
        caseInsensitive(" and store exit code in "),
        $._variable
    ),

    accept_until_eof: $ => seq(
        caseInsensitive("accept "),
        $._variable,
        caseInsensitive(" until eof")
    ),

    load_file: $ => seq(
        caseInsensitive("load file "),
        $._text_value,
        caseInsensitive(" in "),
        $._variable
    ),

    write_file: $ => seq(
        caseInsensitive("write "),
        $._value,
        caseInsensitive(" to file "),
        $._text_value
    ),

    append_file: $ => seq(
        caseInsensitive("append "),
        $._value,
        caseInsensitive(" to file "),
        $._text_value
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
