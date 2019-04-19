#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 227
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_LF = 1,
  sym__whitespace = 2,
  sym_comment = 3,
  anon_sym_COLON = 4,
  sym_number = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_text_token1 = 7,
  sym_escape_sequence = 8,
  sym_identifier = 9,
  aux_sym_data_section_token1 = 10,
  aux_sym_procedure_section_token1 = 11,
  aux_sym_var_definition_token1 = 12,
  aux_sym_type_token1 = 13,
  aux_sym_type_token2 = 14,
  aux_sym_type_token3 = 15,
  aux_sym_type_token4 = 16,
  aux_sym_sub_proc_token1 = 17,
  aux_sym_sub_proc_token2 = 18,
  aux_sym_store_token1 = 19,
  aux_sym_store_token2 = 20,
  aux_sym_if_token1 = 21,
  aux_sym_if_token2 = 22,
  aux_sym_else_if_token1 = 23,
  aux_sym_else_token1 = 24,
  aux_sym__if_then_block_token1 = 25,
  aux_sym__if_then_block_token2 = 26,
  aux_sym_rel_op_token1 = 27,
  aux_sym_rel_op_token2 = 28,
  aux_sym_rel_op_token3 = 29,
  aux_sym_rel_op_token4 = 30,
  aux_sym_rel_op_token5 = 31,
  aux_sym_rel_op_token6 = 32,
  aux_sym_while_token1 = 33,
  aux_sym_while_token2 = 34,
  aux_sym_while_token3 = 35,
  sym_break = 36,
  sym_continue = 37,
  aux_sym_call_sub_token1 = 38,
  aux_sym_call_sub_token2 = 39,
  aux_sym_call_ext_token1 = 40,
  sym_return = 41,
  sym_exit = 42,
  aux_sym_wait_token1 = 43,
  aux_sym_wait_token2 = 44,
  aux_sym_goto_token1 = 45,
  aux_sym_label_token1 = 46,
  aux_sym_add_token1 = 47,
  aux_sym_add_token2 = 48,
  aux_sym_subtract_token1 = 49,
  aux_sym_subtract_token2 = 50,
  aux_sym_multiply_token1 = 51,
  aux_sym_multiply_token2 = 52,
  aux_sym_divide_token1 = 53,
  aux_sym_modulo_token1 = 54,
  aux_sym_abs_token1 = 55,
  aux_sym_store_random_token1 = 56,
  aux_sym_floor_token1 = 57,
  aux_sym_ceil_token1 = 58,
  aux_sym_join_token1 = 59,
  aux_sym_get_char_token1 = 60,
  aux_sym_store_length_token1 = 61,
  aux_sym_store_char_token1 = 62,
  aux_sym_store_char_code_token1 = 63,
  aux_sym_in_join_token1 = 64,
  aux_sym_in_join_token2 = 65,
  aux_sym_in_join_token3 = 66,
  aux_sym_display_token1 = 67,
  aux_sym_accept_token1 = 68,
  aux_sym_execute_token1 = 69,
  aux_sym_execute_store_ouput_token1 = 70,
  aux_sym_execute_store_exit_code_token1 = 71,
  aux_sym_accept_until_eof_token1 = 72,
  aux_sym_load_file_token1 = 73,
  aux_sym_write_file_token1 = 74,
  aux_sym_write_file_token2 = 75,
  aux_sym_append_file_token1 = 76,
  sym_source_file = 77,
  sym__value = 78,
  sym__number_value = 79,
  sym__text_value = 80,
  sym__variable = 81,
  sym_vector_element = 82,
  sym__literal = 83,
  sym_text = 84,
  sym_data_section = 85,
  sym_procedure_section = 86,
  sym_var_definition = 87,
  sym_type = 88,
  sym__block = 89,
  sym__statement = 90,
  sym_sub_proc = 91,
  sym_store = 92,
  sym_if = 93,
  sym_else_if = 94,
  sym_else = 95,
  sym__if_then_block = 96,
  sym_guard = 97,
  sym_rel_op = 98,
  sym_body = 99,
  sym_while = 100,
  sym_call_sub = 101,
  sym_call_ext = 102,
  sym_wait = 103,
  sym_goto = 104,
  sym_label = 105,
  sym_add = 106,
  sym_subtract = 107,
  sym_multiply = 108,
  sym_divide = 109,
  sym_modulo = 110,
  sym_abs = 111,
  sym_store_random = 112,
  sym_floor = 113,
  sym_ceil = 114,
  sym_join = 115,
  sym_get_char = 116,
  sym_store_length = 117,
  sym_store_char = 118,
  sym_store_char_code = 119,
  sym_in_join = 120,
  sym_display = 121,
  sym_accept = 122,
  sym_execute = 123,
  sym_execute_store_ouput = 124,
  sym_execute_store_exit_code = 125,
  sym_accept_until_eof = 126,
  sym_load_file = 127,
  sym_write_file = 128,
  sym_append_file = 129,
  aux_sym_source_file_repeat1 = 130,
  aux_sym_text_repeat1 = 131,
  aux_sym_data_section_repeat1 = 132,
  aux_sym__block_repeat1 = 133,
  aux_sym_if_repeat1 = 134,
  aux_sym_in_join_repeat1 = 135,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [anon_sym_COLON] = ":",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_text_token1] = "text_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [aux_sym_data_section_token1] = "data_section_token1",
  [aux_sym_procedure_section_token1] = "procedure_section_token1",
  [aux_sym_var_definition_token1] = "var_definition_token1",
  [aux_sym_type_token1] = "type_token1",
  [aux_sym_type_token2] = "type_token2",
  [aux_sym_type_token3] = "type_token3",
  [aux_sym_type_token4] = "type_token4",
  [aux_sym_sub_proc_token1] = "sub_proc_token1",
  [aux_sym_sub_proc_token2] = "sub_proc_token2",
  [aux_sym_store_token1] = "store_token1",
  [aux_sym_store_token2] = "store_token2",
  [aux_sym_if_token1] = "if_token1",
  [aux_sym_if_token2] = "if_token2",
  [aux_sym_else_if_token1] = "else_if_token1",
  [aux_sym_else_token1] = "else_token1",
  [aux_sym__if_then_block_token1] = "_if_then_block_token1",
  [aux_sym__if_then_block_token2] = "_if_then_block_token2",
  [aux_sym_rel_op_token1] = "rel_op_token1",
  [aux_sym_rel_op_token2] = "rel_op_token2",
  [aux_sym_rel_op_token3] = "rel_op_token3",
  [aux_sym_rel_op_token4] = "rel_op_token4",
  [aux_sym_rel_op_token5] = "rel_op_token5",
  [aux_sym_rel_op_token6] = "rel_op_token6",
  [aux_sym_while_token1] = "while_token1",
  [aux_sym_while_token2] = "while_token2",
  [aux_sym_while_token3] = "while_token3",
  [sym_break] = "break",
  [sym_continue] = "continue",
  [aux_sym_call_sub_token1] = "call_sub_token1",
  [aux_sym_call_sub_token2] = "call_sub_token2",
  [aux_sym_call_ext_token1] = "call_ext_token1",
  [sym_return] = "return",
  [sym_exit] = "exit",
  [aux_sym_wait_token1] = "wait_token1",
  [aux_sym_wait_token2] = "wait_token2",
  [aux_sym_goto_token1] = "goto_token1",
  [aux_sym_label_token1] = "label_token1",
  [aux_sym_add_token1] = "add_token1",
  [aux_sym_add_token2] = "add_token2",
  [aux_sym_subtract_token1] = "subtract_token1",
  [aux_sym_subtract_token2] = "subtract_token2",
  [aux_sym_multiply_token1] = "multiply_token1",
  [aux_sym_multiply_token2] = "multiply_token2",
  [aux_sym_divide_token1] = "divide_token1",
  [aux_sym_modulo_token1] = "modulo_token1",
  [aux_sym_abs_token1] = "abs_token1",
  [aux_sym_store_random_token1] = "store_random_token1",
  [aux_sym_floor_token1] = "floor_token1",
  [aux_sym_ceil_token1] = "ceil_token1",
  [aux_sym_join_token1] = "join_token1",
  [aux_sym_get_char_token1] = "get_char_token1",
  [aux_sym_store_length_token1] = "store_length_token1",
  [aux_sym_store_char_token1] = "store_char_token1",
  [aux_sym_store_char_code_token1] = "store_char_code_token1",
  [aux_sym_in_join_token1] = "in_join_token1",
  [aux_sym_in_join_token2] = "in_join_token2",
  [aux_sym_in_join_token3] = "in_join_token3",
  [aux_sym_display_token1] = "display_token1",
  [aux_sym_accept_token1] = "accept_token1",
  [aux_sym_execute_token1] = "execute_token1",
  [aux_sym_execute_store_ouput_token1] = "execute_store_ouput_token1",
  [aux_sym_execute_store_exit_code_token1] = "execute_store_exit_code_token1",
  [aux_sym_accept_until_eof_token1] = "accept_until_eof_token1",
  [aux_sym_load_file_token1] = "load_file_token1",
  [aux_sym_write_file_token1] = "write_file_token1",
  [aux_sym_write_file_token2] = "write_file_token2",
  [aux_sym_append_file_token1] = "append_file_token1",
  [sym_source_file] = "source_file",
  [sym__value] = "_value",
  [sym__number_value] = "_number_value",
  [sym__text_value] = "_text_value",
  [sym__variable] = "_variable",
  [sym_vector_element] = "vector_element",
  [sym__literal] = "_literal",
  [sym_text] = "text",
  [sym_data_section] = "data_section",
  [sym_procedure_section] = "procedure_section",
  [sym_var_definition] = "var_definition",
  [sym_type] = "type",
  [sym__block] = "_block",
  [sym__statement] = "_statement",
  [sym_sub_proc] = "sub_proc",
  [sym_store] = "store",
  [sym_if] = "if",
  [sym_else_if] = "else_if",
  [sym_else] = "else",
  [sym__if_then_block] = "_if_then_block",
  [sym_guard] = "guard",
  [sym_rel_op] = "rel_op",
  [sym_body] = "body",
  [sym_while] = "while",
  [sym_call_sub] = "call_sub",
  [sym_call_ext] = "call_ext",
  [sym_wait] = "wait",
  [sym_goto] = "goto",
  [sym_label] = "label",
  [sym_add] = "add",
  [sym_subtract] = "subtract",
  [sym_multiply] = "multiply",
  [sym_divide] = "divide",
  [sym_modulo] = "modulo",
  [sym_abs] = "abs",
  [sym_store_random] = "store_random",
  [sym_floor] = "floor",
  [sym_ceil] = "ceil",
  [sym_join] = "join",
  [sym_get_char] = "get_char",
  [sym_store_length] = "store_length",
  [sym_store_char] = "store_char",
  [sym_store_char_code] = "store_char_code",
  [sym_in_join] = "in_join",
  [sym_display] = "display",
  [sym_accept] = "accept",
  [sym_execute] = "execute",
  [sym_execute_store_ouput] = "execute_store_ouput",
  [sym_execute_store_exit_code] = "execute_store_exit_code",
  [sym_accept_until_eof] = "accept_until_eof",
  [sym_load_file] = "load_file",
  [sym_write_file] = "write_file",
  [sym_append_file] = "append_file",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_data_section_repeat1] = "data_section_repeat1",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_in_join_repeat1] = "in_join_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_data_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procedure_section_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sub_proc_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sub_proc_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_store_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_store_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_if_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__if_then_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__if_then_block_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rel_op_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rel_op_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rel_op_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rel_op_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rel_op_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rel_op_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_while_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_call_sub_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_sub_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_ext_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_exit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_wait_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_wait_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_goto_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_add_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subtract_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subtract_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiply_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiply_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_divide_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modulo_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abs_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_store_random_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_floor_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ceil_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_join_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_get_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_store_length_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_store_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_store_char_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_in_join_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_in_join_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_in_join_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_display_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accept_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_execute_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_execute_store_ouput_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_execute_store_exit_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_accept_until_eof_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_load_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_write_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_write_file_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_append_file_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__number_value] = {
    .visible = false,
    .named = true,
  },
  [sym__text_value] = {
    .visible = false,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_vector_element] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_data_section] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_section] = {
    .visible = true,
    .named = true,
  },
  [sym_var_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_sub_proc] = {
    .visible = true,
    .named = true,
  },
  [sym_store] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if] = {
    .visible = true,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym__if_then_block] = {
    .visible = false,
    .named = true,
  },
  [sym_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_rel_op] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_call_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_call_ext] = {
    .visible = true,
    .named = true,
  },
  [sym_wait] = {
    .visible = true,
    .named = true,
  },
  [sym_goto] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_subtract] = {
    .visible = true,
    .named = true,
  },
  [sym_multiply] = {
    .visible = true,
    .named = true,
  },
  [sym_divide] = {
    .visible = true,
    .named = true,
  },
  [sym_modulo] = {
    .visible = true,
    .named = true,
  },
  [sym_abs] = {
    .visible = true,
    .named = true,
  },
  [sym_store_random] = {
    .visible = true,
    .named = true,
  },
  [sym_floor] = {
    .visible = true,
    .named = true,
  },
  [sym_ceil] = {
    .visible = true,
    .named = true,
  },
  [sym_join] = {
    .visible = true,
    .named = true,
  },
  [sym_get_char] = {
    .visible = true,
    .named = true,
  },
  [sym_store_length] = {
    .visible = true,
    .named = true,
  },
  [sym_store_char] = {
    .visible = true,
    .named = true,
  },
  [sym_store_char_code] = {
    .visible = true,
    .named = true,
  },
  [sym_in_join] = {
    .visible = true,
    .named = true,
  },
  [sym_display] = {
    .visible = true,
    .named = true,
  },
  [sym_accept] = {
    .visible = true,
    .named = true,
  },
  [sym_execute] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_store_ouput] = {
    .visible = true,
    .named = true,
  },
  [sym_execute_store_exit_code] = {
    .visible = true,
    .named = true,
  },
  [sym_accept_until_eof] = {
    .visible = true,
    .named = true,
  },
  [sym_load_file] = {
    .visible = true,
    .named = true,
  },
  [sym_write_file] = {
    .visible = true,
    .named = true,
  },
  [sym_append_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_in_join_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(9);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(12);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(13);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(14);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(17);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(18);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(19);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(20);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(21);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(22);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(25);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(31);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(37);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(38);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(41);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(42);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '.')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(45);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(46);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(47);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(48);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(49);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(52);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(53);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(54);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(55);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(57);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(58);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(59);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(60);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(62);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(64);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(65);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(66);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(69);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(71);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(72);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(74);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(75);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(77);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(79);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(81);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(37);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(38);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(41);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(84);
      END_STATE();
    case 34:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(86);
      END_STATE();
    case 36:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(88);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(89);
      END_STATE();
    case 38:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(90);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(91);
      END_STATE();
    case 40:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(95);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(96);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(97);
      END_STATE();
    case 47:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(102);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(103);
      END_STATE();
    case 53:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(106);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(107);
      END_STATE();
    case 56:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(108);
      END_STATE();
    case 57:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(109);
      END_STATE();
    case 58:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(110);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(111);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(112);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(114);
      END_STATE();
    case 61:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(116);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(118);
      END_STATE();
    case 65:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(119);
      END_STATE();
    case 66:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(120);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(124);
      END_STATE();
    case 71:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(125);
      END_STATE();
    case 72:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 73:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(127);
      END_STATE();
    case 74:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(128);
      END_STATE();
    case 75:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(131);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(132);
      END_STATE();
    case 78:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(135);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(136);
      END_STATE();
    case 82:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 84:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(139);
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(140);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_while_token2);
      END_STATE();
    case 87:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(141);
      END_STATE();
    case 88:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(142);
      END_STATE();
    case 89:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(143);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(144);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(145);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 93:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(148);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(149);
      END_STATE();
    case 96:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(150);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      END_STATE();
    case 98:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(152);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(153);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(154);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(155);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(156);
      END_STATE();
    case 103:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(157);
      END_STATE();
    case 104:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(158);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(159);
      END_STATE();
    case 106:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(161);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == '-')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(165);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(166);
      END_STATE();
    case 112:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(167);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(168);
      END_STATE();
    case 114:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(169);
      END_STATE();
    case 115:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      END_STATE();
    case 116:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(171);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(172);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__if_then_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_in_join_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(173);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 122:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(176);
      END_STATE();
    case 124:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(177);
      END_STATE();
    case 125:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(178);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(179);
      END_STATE();
    case 127:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(180);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(181);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(182);
      END_STATE();
    case 130:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(183);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(184);
      END_STATE();
    case 132:
      if (lookahead == '-')
        ADVANCE(185);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      END_STATE();
    case 133:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(187);
      END_STATE();
    case 134:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(189);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(190);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(191);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_multiply_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(192);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_store_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_var_definition_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(143);
      END_STATE();
    case 144:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(193);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(194);
      END_STATE();
    case 146:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(195);
      END_STATE();
    case 147:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(147);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(196);
      END_STATE();
    case 148:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(197);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_abs_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(150);
      END_STATE();
    case 151:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(199);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(200);
      END_STATE();
    case 154:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(201);
      END_STATE();
    case 155:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(202);
      END_STATE();
    case 156:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(203);
      END_STATE();
    case 157:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(204);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_in_join_token3);
      END_STATE();
    case 159:
      if (lookahead == ':')
        ADVANCE(205);
      END_STATE();
    case 160:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(206);
      END_STATE();
    case 161:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(207);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_else_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(208);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(209);
      END_STATE();
    case 164:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(164);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(211);
      END_STATE();
    case 165:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      END_STATE();
    case 166:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(213);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_exit);
      END_STATE();
    case 168:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(214);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(215);
      END_STATE();
    case 170:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(216);
      END_STATE();
    case 171:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(217);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(218);
      END_STATE();
    case 173:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(219);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(220);
      END_STATE();
    case 175:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(221);
      END_STATE();
    case 176:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(222);
      END_STATE();
    case 177:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(223);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(224);
      END_STATE();
    case 179:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(226);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(227);
      END_STATE();
    case 182:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(228);
      END_STATE();
    case 183:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(229);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 185:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(231);
      END_STATE();
    case 186:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(232);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 188:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(233);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(234);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(235);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_add_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(191);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(236);
      END_STATE();
    case 192:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(237);
      END_STATE();
    case 193:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(238);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(239);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__if_then_block_token2);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(240);
      END_STATE();
    case 197:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(241);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(242);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(243);
      END_STATE();
    case 200:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(244);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_call_sub_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(202);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(245);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(246);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_ceil_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(203);
      END_STATE();
    case 204:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(247);
      END_STATE();
    case 205:
      if (lookahead == '\n')
        ADVANCE(248);
      END_STATE();
    case 206:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(249);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(250);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_else_if_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(208);
      END_STATE();
    case 209:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(251);
      END_STATE();
    case 210:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(252);
      END_STATE();
    case 211:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(253);
      END_STATE();
    case 212:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(254);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(255);
      END_STATE();
    case 214:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(256);
      END_STATE();
    case 215:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(257);
      END_STATE();
    case 216:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_goto_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(217);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_join_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(260);
      END_STATE();
    case 221:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(221);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(261);
      END_STATE();
    case 222:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(222);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(262);
      END_STATE();
    case 223:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(263);
      END_STATE();
    case 224:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(264);
      END_STATE();
    case 225:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(265);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(266);
      END_STATE();
    case 227:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(267);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(268);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(269);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(270);
      END_STATE();
    case 231:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(271);
      END_STATE();
    case 232:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(272);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_wait_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(233);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(273);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(274);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(275);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_subtract_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_in_join_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(238);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(276);
      END_STATE();
    case 240:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(277);
      END_STATE();
    case 241:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(278);
      END_STATE();
    case 242:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(279);
      END_STATE();
    case 243:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(280);
      END_STATE();
    case 244:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(281);
      END_STATE();
    case 245:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(282);
      END_STATE();
    case 246:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(283);
      END_STATE();
    case 247:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(284);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_data_section_token1);
      END_STATE();
    case 249:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(285);
      END_STATE();
    case 250:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(286);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_if_token2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_if_token1);
      END_STATE();
    case 253:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(287);
      END_STATE();
    case 254:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(288);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(289);
      END_STATE();
    case 256:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(290);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_floor_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(257);
      END_STATE();
    case 258:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(291);
      END_STATE();
    case 259:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(292);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(260);
      END_STATE();
    case 261:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(293);
      END_STATE();
    case 262:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(294);
      END_STATE();
    case 263:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(295);
      END_STATE();
    case 264:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(296);
      END_STATE();
    case 265:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(297);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 267:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(298);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_while_token3);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_return);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_store_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(270);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(299);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(300);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(301);
      END_STATE();
    case 271:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(302);
      END_STATE();
    case 272:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(303);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_while_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_write_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(274);
      END_STATE();
    case 275:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(304);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(305);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(306);
      END_STATE();
    case 278:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(278);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(307);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_accept_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_append_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(281);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(308);
      END_STATE();
    case 283:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(309);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(310);
      END_STATE();
    case 285:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(311);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_divide_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(286);
      END_STATE();
    case 287:
      if (lookahead == '-')
        ADVANCE(312);
      END_STATE();
    case 288:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(313);
      END_STATE();
    case 289:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(314);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(315);
      END_STATE();
    case 291:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(316);
      END_STATE();
    case 292:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(317);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(318);
      END_STATE();
    case 294:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(319);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_modulo_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(295);
      END_STATE();
    case 296:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(320);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(321);
      END_STATE();
    case 298:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(322);
      END_STATE();
    case 299:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(323);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(324);
      END_STATE();
    case 301:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(325);
      END_STATE();
    case 302:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(326);
      END_STATE();
    case 303:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(327);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(328);
      END_STATE();
    case 305:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(329);
      END_STATE();
    case 306:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(330);
      END_STATE();
    case 307:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(331);
      END_STATE();
    case 308:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(332);
      END_STATE();
    case 309:
      if (lookahead == '-')
        ADVANCE(333);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_display_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(311);
      END_STATE();
    case 312:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(334);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_rel_op_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_execute_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(314);
      END_STATE();
    case 315:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(335);
      END_STATE();
    case 316:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(336);
      END_STATE();
    case 317:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(317);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(337);
      END_STATE();
    case 318:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(338);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(339);
      END_STATE();
    case 320:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(340);
      END_STATE();
    case 321:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(341);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(342);
      END_STATE();
    case 323:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(343);
      END_STATE();
    case 324:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(344);
      END_STATE();
    case 325:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(345);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(346);
      END_STATE();
    case 327:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(347);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(348);
      END_STATE();
    case 329:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(349);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_write_file_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(330);
      END_STATE();
    case 331:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(350);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(351);
      END_STATE();
    case 333:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(352);
      END_STATE();
    case 334:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(353);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(335);
      END_STATE();
    case 336:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(354);
      END_STATE();
    case 337:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(355);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_rel_op_token4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(356);
      END_STATE();
    case 339:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(357);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_multiply_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(340);
      END_STATE();
    case 341:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(358);
      END_STATE();
    case 342:
      if (lookahead == ':')
        ADVANCE(359);
      END_STATE();
    case 343:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(360);
      END_STATE();
    case 344:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(361);
      END_STATE();
    case 345:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(362);
      END_STATE();
    case 346:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(363);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_subtract_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(347);
      END_STATE();
    case 348:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(364);
      END_STATE();
    case 349:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(365);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_accept_until_eof_token1);
      END_STATE();
    case 351:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(366);
      END_STATE();
    case 352:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(367);
      END_STATE();
    case 353:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(368);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(369);
      END_STATE();
    case 355:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(370);
      END_STATE();
    case 356:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(356);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(371);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_load_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(357);
      END_STATE();
    case 358:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(358);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(372);
      END_STATE();
    case 359:
      if (lookahead == '\n')
        ADVANCE(373);
      END_STATE();
    case 360:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(374);
      END_STATE();
    case 361:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 362:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(376);
      END_STATE();
    case 363:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(377);
      END_STATE();
    case 364:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(378);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(379);
      END_STATE();
    case 365:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(380);
      END_STATE();
    case 366:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(381);
      END_STATE();
    case 367:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(382);
      END_STATE();
    case 368:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(383);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(384);
      END_STATE();
    case 370:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(385);
      END_STATE();
    case 371:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(386);
      END_STATE();
    case 372:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(387);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_procedure_section_token1);
      END_STATE();
    case 374:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(388);
      END_STATE();
    case 375:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(389);
      END_STATE();
    case 376:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(390);
      END_STATE();
    case 377:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(391);
      END_STATE();
    case 378:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(392);
      END_STATE();
    case 379:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(393);
      END_STATE();
    case 380:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(394);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(395);
      END_STATE();
    case 382:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(396);
      END_STATE();
    case 383:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(397);
      END_STATE();
    case 384:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(398);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_rel_op_token3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(399);
      END_STATE();
    case 386:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(400);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_rel_op_token2);
      END_STATE();
    case 388:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(401);
      END_STATE();
    case 389:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(402);
      END_STATE();
    case 390:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(403);
      END_STATE();
    case 391:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(404);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(405);
      END_STATE();
    case 393:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(406);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_wait_token2);
      END_STATE();
    case 395:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(407);
      END_STATE();
    case 396:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(408);
      END_STATE();
    case 397:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(409);
      END_STATE();
    case 398:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(410);
      END_STATE();
    case 399:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(399);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(411);
      END_STATE();
    case 400:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(400);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(412);
      END_STATE();
    case 401:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(413);
      END_STATE();
    case 402:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(402);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(414);
      END_STATE();
    case 403:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(403);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(415);
      END_STATE();
    case 404:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(416);
      END_STATE();
    case 405:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(417);
      END_STATE();
    case 406:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(418);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_call_ext_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(407);
      END_STATE();
    case 408:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(419);
      END_STATE();
    case 409:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(420);
      END_STATE();
    case 410:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(410);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(421);
      END_STATE();
    case 411:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(422);
      END_STATE();
    case 412:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(423);
      END_STATE();
    case 413:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(424);
      END_STATE();
    case 414:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(425);
      END_STATE();
    case 415:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(426);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_sub_proc_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(416);
      END_STATE();
    case 417:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(427);
      END_STATE();
    case 418:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(428);
      END_STATE();
    case 419:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(429);
      END_STATE();
    case 420:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(430);
      END_STATE();
    case 421:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(431);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(432);
      END_STATE();
    case 423:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(433);
      END_STATE();
    case 424:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(434);
      END_STATE();
    case 425:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(435);
      END_STATE();
    case 426:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(436);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(427);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(437);
      END_STATE();
    case 428:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(438);
      END_STATE();
    case 429:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(439);
      END_STATE();
    case 430:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(440);
      END_STATE();
    case 431:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(441);
      END_STATE();
    case 432:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(432);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(442);
      END_STATE();
    case 433:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(443);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_store_char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(434);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(444);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_store_length_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_store_random_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(436);
      END_STATE();
    case 437:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(445);
      END_STATE();
    case 438:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(446);
      END_STATE();
    case 439:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(447);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_sub_proc_token2);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_get_char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(441);
      END_STATE();
    case 442:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(448);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(449);
      END_STATE();
    case 444:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(450);
      END_STATE();
    case 445:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(451);
      END_STATE();
    case 446:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(446);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(452);
      END_STATE();
    case 447:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(453);
      END_STATE();
    case 448:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(454);
      END_STATE();
    case 449:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(455);
      END_STATE();
    case 450:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(456);
      END_STATE();
    case 451:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      END_STATE();
    case 452:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(458);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_call_sub_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(453);
      END_STATE();
    case 454:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(459);
      END_STATE();
    case 455:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(460);
      END_STATE();
    case 456:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(461);
      END_STATE();
    case 457:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(462);
      END_STATE();
    case 458:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(463);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(464);
      END_STATE();
    case 460:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(465);
      END_STATE();
    case 461:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(466);
      END_STATE();
    case 462:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(462);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(467);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_execute_store_ouput_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(463);
      END_STATE();
    case 464:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(468);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_rel_op_token6);
      END_STATE();
    case 466:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(466);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(469);
      END_STATE();
    case 467:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(470);
      END_STATE();
    case 468:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(468);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(471);
      END_STATE();
    case 469:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(472);
      END_STATE();
    case 470:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      END_STATE();
    case 471:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(474);
      END_STATE();
    case 472:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(475);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_execute_store_exit_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_rel_op_token5);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_store_char_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(475);
      END_STATE();
    case 476:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(478);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(479);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 478:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(54);
      END_STATE();
    case 479:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(74);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ':')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"')
        ADVANCE(483);
      END_STATE();
    case 492:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(494);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(497);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(499);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(500);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(501);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(502);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(503);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(505);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(506);
      END_STATE();
    case 493:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(45);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(46);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(47);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(48);
      END_STATE();
    case 494:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(49);
      END_STATE();
    case 495:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(52);
      END_STATE();
    case 496:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(55);
      END_STATE();
    case 497:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(507);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(508);
      END_STATE();
    case 498:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(60);
      END_STATE();
    case 499:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(62);
      END_STATE();
    case 500:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(64);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(65);
      END_STATE();
    case 501:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(66);
      END_STATE();
    case 502:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(67);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(69);
      END_STATE();
    case 503:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(70);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(71);
      END_STATE();
    case 504:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(509);
      END_STATE();
    case 505:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(76);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(77);
      END_STATE();
    case 506:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(79);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(80);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(81);
      END_STATE();
    case 507:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(510);
      END_STATE();
    case 508:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(111);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(112);
      END_STATE();
    case 509:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 510:
      if (lookahead == '-')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(511);
      END_STATE();
    case 511:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(511);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(210);
      END_STATE();
    case 512:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(514);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(515);
      END_STATE();
    case 514:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(514);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(515);
      END_STATE();
    case 515:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(89);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(481);
      if (lookahead == '.')
        ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(518);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(521);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(523);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(523);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':')
        ADVANCE(483);
      END_STATE();
    case 530:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(531);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(532);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(533);
      END_STATE();
    case 531:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(534);
      END_STATE();
    case 532:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 533:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      END_STATE();
    case 534:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(113);
      END_STATE();
    case 535:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(494);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(536);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(499);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(500);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(501);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(502);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(503);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(537);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(505);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(506);
      END_STATE();
    case 536:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(56);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(57);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(508);
      END_STATE();
    case 537:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(75);
      END_STATE();
    case 538:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(540);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(541);
      END_STATE();
    case 540:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(540);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(542);
      END_STATE();
    case 542:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(543);
      END_STATE();
    case 543:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(544);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_add_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(544);
      END_STATE();
    case 545:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 546:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(547);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(548);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(35);
      END_STATE();
    case 548:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(548);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(35);
      END_STATE();
    case 549:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(551);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(38);
      END_STATE();
    case 551:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(551);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(38);
      END_STATE();
    case 552:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(554);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(555);
      END_STATE();
    case 554:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(554);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(555);
      END_STATE();
    case 555:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(88);
      END_STATE();
    case 556:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(558);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(559);
      END_STATE();
    case 558:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(558);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(560);
      END_STATE();
    case 560:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(561);
      END_STATE();
    case 561:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(562);
      END_STATE();
    case 562:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(562);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(236);
      END_STATE();
    case 563:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(564);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(565);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(566);
      END_STATE();
    case 565:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(565);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(566);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 567:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(569);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(39);
      END_STATE();
    case 569:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(569);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(39);
      END_STATE();
    case 570:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(571);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(572);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(36);
      END_STATE();
    case 572:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(572);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(36);
      END_STATE();
    case 573:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(574);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(575);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      END_STATE();
    case 575:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(575);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      END_STATE();
    case 576:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(577);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(578);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 578:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(578);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 579:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(580);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(581);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(582);
      END_STATE();
    case 581:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(581);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(582);
      END_STATE();
    case 582:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(92);
      END_STATE();
    case 583:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(584);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(585);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(42);
      END_STATE();
    case 585:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(585);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(42);
      END_STATE();
    case 586:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(588);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(37);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(38);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 588:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(588);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(33);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(37);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(38);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(39);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(41);
      END_STATE();
    case 589:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(590);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(591);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(592);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(593);
      END_STATE();
    case 590:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(58);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 592:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 593:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(72);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(494);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(595);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(499);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(500);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(501);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(502);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(503);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(504);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(505);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(506);
      END_STATE();
    case 595:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(596);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(508);
      END_STATE();
    case 596:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(597);
      END_STATE();
    case 597:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(598);
      END_STATE();
    case 598:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(598);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(211);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(477);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(494);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(495);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(600);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(499);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(500);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(501);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(502);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(503);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(537);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(505);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(506);
      END_STATE();
    case 600:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(508);
      END_STATE();
    case 601:
      if (lookahead == '#')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(602);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(603);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(35);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(582);
      END_STATE();
    case 603:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(603);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(35);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(582);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 476},
  [2] = {.lex_state = 480},
  [3] = {.lex_state = 492},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 476},
  [7] = {.lex_state = 476},
  [8] = {.lex_state = 512},
  [9] = {.lex_state = 480},
  [10] = {.lex_state = 476},
  [11] = {.lex_state = 516},
  [12] = {.lex_state = 516},
  [13] = {.lex_state = 529},
  [14] = {.lex_state = 516},
  [15] = {.lex_state = 529},
  [16] = {.lex_state = 529},
  [17] = {.lex_state = 529},
  [18] = {.lex_state = 516},
  [19] = {.lex_state = 529},
  [20] = {.lex_state = 516},
  [21] = {.lex_state = 529},
  [22] = {.lex_state = 529},
  [23] = {.lex_state = 516},
  [24] = {.lex_state = 529},
  [25] = {.lex_state = 516},
  [26] = {.lex_state = 529},
  [27] = {.lex_state = 516},
  [28] = {.lex_state = 516},
  [29] = {.lex_state = 529},
  [30] = {.lex_state = 516},
  [31] = {.lex_state = 516},
  [32] = {.lex_state = 529},
  [33] = {.lex_state = 529},
  [34] = {.lex_state = 529},
  [35] = {.lex_state = 529},
  [36] = {.lex_state = 529},
  [37] = {.lex_state = 516},
  [38] = {.lex_state = 516},
  [39] = {.lex_state = 516},
  [40] = {.lex_state = 516},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 492},
  [43] = {.lex_state = 492},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 476},
  [46] = {.lex_state = 476},
  [47] = {.lex_state = 530},
  [48] = {.lex_state = 480},
  [49] = {.lex_state = 535},
  [50] = {.lex_state = 538},
  [51] = {.lex_state = 538},
  [52] = {.lex_state = 512},
  [53] = {.lex_state = 545},
  [54] = {.lex_state = 512},
  [55] = {.lex_state = 546},
  [56] = {.lex_state = 476},
  [57] = {.lex_state = 538},
  [58] = {.lex_state = 549},
  [59] = {.lex_state = 549},
  [60] = {.lex_state = 552},
  [61] = {.lex_state = 552},
  [62] = {.lex_state = 556},
  [63] = {.lex_state = 476},
  [64] = {.lex_state = 563},
  [65] = {.lex_state = 563},
  [66] = {.lex_state = 552},
  [67] = {.lex_state = 476},
  [68] = {.lex_state = 556},
  [69] = {.lex_state = 545},
  [70] = {.lex_state = 516},
  [71] = {.lex_state = 556},
  [72] = {.lex_state = 556},
  [73] = {.lex_state = 476},
  [74] = {.lex_state = 567},
  [75] = {.lex_state = 567},
  [76] = {.lex_state = 476},
  [77] = {.lex_state = 570},
  [78] = {.lex_state = 570},
  [79] = {.lex_state = 476},
  [80] = {.lex_state = 552},
  [81] = {.lex_state = 573},
  [82] = {.lex_state = 573},
  [83] = {.lex_state = 476},
  [84] = {.lex_state = 573},
  [85] = {.lex_state = 563},
  [86] = {.lex_state = 576},
  [87] = {.lex_state = 576},
  [88] = {.lex_state = 476},
  [89] = {.lex_state = 476},
  [90] = {.lex_state = 476},
  [91] = {.lex_state = 552},
  [92] = {.lex_state = 570},
  [93] = {.lex_state = 573},
  [94] = {.lex_state = 512},
  [95] = {.lex_state = 579},
  [96] = {.lex_state = 552},
  [97] = {.lex_state = 476},
  [98] = {.lex_state = 492},
  [99] = {.lex_state = 476},
  [100] = {.lex_state = 492},
  [101] = {.lex_state = 492},
  [102] = {.lex_state = 492},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 530},
  [105] = {.lex_state = 583},
  [106] = {.lex_state = 476},
  [107] = {.lex_state = 516},
  [108] = {.lex_state = 516},
  [109] = {.lex_state = 516},
  [110] = {.lex_state = 586},
  [111] = {.lex_state = 545},
  [112] = {.lex_state = 589},
  [113] = {.lex_state = 476},
  [114] = {.lex_state = 516},
  [115] = {.lex_state = 516},
  [116] = {.lex_state = 516},
  [117] = {.lex_state = 516},
  [118] = {.lex_state = 529},
  [119] = {.lex_state = 516},
  [120] = {.lex_state = 516},
  [121] = {.lex_state = 529},
  [122] = {.lex_state = 529},
  [123] = {.lex_state = 516},
  [124] = {.lex_state = 516},
  [125] = {.lex_state = 476},
  [126] = {.lex_state = 545},
  [127] = {.lex_state = 476},
  [128] = {.lex_state = 516},
  [129] = {.lex_state = 516},
  [130] = {.lex_state = 529},
  [131] = {.lex_state = 529},
  [132] = {.lex_state = 492},
  [133] = {.lex_state = 516},
  [134] = {.lex_state = 476},
  [135] = {.lex_state = 516},
  [136] = {.lex_state = 529},
  [137] = {.lex_state = 529},
  [138] = {.lex_state = 516},
  [139] = {.lex_state = 516},
  [140] = {.lex_state = 516},
  [141] = {.lex_state = 529},
  [142] = {.lex_state = 516},
  [143] = {.lex_state = 476},
  [144] = {.lex_state = 529},
  [145] = {.lex_state = 516},
  [146] = {.lex_state = 516},
  [147] = {.lex_state = 589},
  [148] = {.lex_state = 476},
  [149] = {.lex_state = 529},
  [150] = {.lex_state = 492},
  [151] = {.lex_state = 492},
  [152] = {.lex_state = 476},
  [153] = {.lex_state = 492},
  [154] = {.lex_state = 492},
  [155] = {.lex_state = 583},
  [156] = {.lex_state = 476},
  [157] = {.lex_state = 480},
  [158] = {.lex_state = 586},
  [159] = {.lex_state = 552},
  [160] = {.lex_state = 586},
  [161] = {.lex_state = 545},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 492},
  [165] = {.lex_state = 552},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 512},
  [168] = {.lex_state = 516},
  [169] = {.lex_state = 476},
  [170] = {.lex_state = 476},
  [171] = {.lex_state = 476},
  [172] = {.lex_state = 476},
  [173] = {.lex_state = 476},
  [174] = {.lex_state = 476},
  [175] = {.lex_state = 476},
  [176] = {.lex_state = 594},
  [177] = {.lex_state = 535},
  [178] = {.lex_state = 594},
  [179] = {.lex_state = 552},
  [180] = {.lex_state = 476},
  [181] = {.lex_state = 552},
  [182] = {.lex_state = 552},
  [183] = {.lex_state = 476},
  [184] = {.lex_state = 476},
  [185] = {.lex_state = 552},
  [186] = {.lex_state = 552},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 492},
  [189] = {.lex_state = 476},
  [190] = {.lex_state = 492},
  [191] = {.lex_state = 492},
  [192] = {.lex_state = 476},
  [193] = {.lex_state = 476},
  [194] = {.lex_state = 529},
  [195] = {.lex_state = 516},
  [196] = {.lex_state = 599},
  [197] = {.lex_state = 599},
  [198] = {.lex_state = 529},
  [199] = {.lex_state = 516},
  [200] = {.lex_state = 476},
  [201] = {.lex_state = 476},
  [202] = {.lex_state = 594},
  [203] = {.lex_state = 529},
  [204] = {.lex_state = 529},
  [205] = {.lex_state = 529},
  [206] = {.lex_state = 529},
  [207] = {.lex_state = 529},
  [208] = {.lex_state = 516},
  [209] = {.lex_state = 492},
  [210] = {.lex_state = 492},
  [211] = {.lex_state = 492},
  [212] = {.lex_state = 476},
  [213] = {.lex_state = 546},
  [214] = {.lex_state = 601},
  [215] = {.lex_state = 476},
  [216] = {.lex_state = 599},
  [217] = {.lex_state = 476},
  [218] = {.lex_state = 476},
  [219] = {.lex_state = 476},
  [220] = {.lex_state = 476},
  [221] = {.lex_state = 476},
  [222] = {.lex_state = 476},
  [223] = {.lex_state = 579},
  [224] = {.lex_state = 492},
  [225] = {.lex_state = 516},
  [226] = {.lex_state = 516},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [aux_sym_add_token1] = ACTIONS(1),
    [aux_sym_while_token1] = ACTIONS(1),
    [aux_sym_join_token1] = ACTIONS(1),
    [aux_sym_store_length_token1] = ACTIONS(1),
    [aux_sym_abs_token1] = ACTIONS(1),
    [aux_sym_append_file_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_rel_op_token5] = ACTIONS(1),
    [aux_sym_sub_proc_token1] = ACTIONS(1),
    [aux_sym_add_token2] = ACTIONS(1),
    [aux_sym_while_token2] = ACTIONS(1),
    [aux_sym_get_char_token1] = ACTIONS(1),
    [aux_sym_store_char_token1] = ACTIONS(1),
    [aux_sym_store_random_token1] = ACTIONS(1),
    [aux_sym_data_section_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_in_join_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_rel_op_token6] = ACTIONS(1),
    [aux_sym_sub_proc_token2] = ACTIONS(1),
    [sym_return] = ACTIONS(1),
    [aux_sym_while_token3] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [aux_sym_store_char_code_token1] = ACTIONS(1),
    [aux_sym_subtract_token1] = ACTIONS(1),
    [aux_sym_procedure_section_token1] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
    [aux_sym_in_join_token3] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [aux_sym__if_then_block_token1] = ACTIONS(1),
    [aux_sym_store_token1] = ACTIONS(1),
    [aux_sym_if_token1] = ACTIONS(1),
    [sym_exit] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [aux_sym_call_sub_token1] = ACTIONS(1),
    [aux_sym_in_join_token1] = ACTIONS(1),
    [aux_sym_subtract_token2] = ACTIONS(1),
    [aux_sym_var_definition_token1] = ACTIONS(1),
    [aux_sym_load_file_token1] = ACTIONS(1),
    [aux_sym_type_token2] = ACTIONS(1),
    [aux_sym_display_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_execute_token1] = ACTIONS(1),
    [aux_sym__if_then_block_token2] = ACTIONS(1),
    [aux_sym_store_token2] = ACTIONS(1),
    [aux_sym_if_token2] = ACTIONS(1),
    [aux_sym_wait_token1] = ACTIONS(1),
    [aux_sym_goto_token1] = ACTIONS(1),
    [aux_sym_call_sub_token2] = ACTIONS(1),
    [aux_sym_floor_token1] = ACTIONS(1),
    [aux_sym_multiply_token1] = ACTIONS(1),
    [aux_sym_divide_token1] = ACTIONS(1),
    [aux_sym_write_file_token1] = ACTIONS(1),
    [aux_sym_type_token3] = ACTIONS(1),
    [aux_sym_accept_token1] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(1),
    [aux_sym_rel_op_token1] = ACTIONS(1),
    [aux_sym_rel_op_token3] = ACTIONS(1),
    [aux_sym_else_if_token1] = ACTIONS(1),
    [aux_sym_wait_token2] = ACTIONS(1),
    [aux_sym_label_token1] = ACTIONS(1),
    [aux_sym_call_ext_token1] = ACTIONS(1),
    [aux_sym_ceil_token1] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_multiply_token2] = ACTIONS(1),
    [aux_sym_modulo_token1] = ACTIONS(1),
    [aux_sym_write_file_token2] = ACTIONS(1),
    [aux_sym_type_token4] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(1),
    [aux_sym_rel_op_token2] = ACTIONS(1),
    [aux_sym_rel_op_token4] = ACTIONS(1),
    [aux_sym_else_token1] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_procedure_section] = STATE(5),
    [sym_data_section] = STATE(6),
    [sym_source_file] = STATE(4),
    [aux_sym_data_section_token1] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(9),
    [aux_sym_procedure_section_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_var_definition] = STATE(9),
    [aux_sym_data_section_repeat1] = STATE(9),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(15),
    [aux_sym_procedure_section_token1] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym__block] = STATE(41),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(43),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(43),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(67),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
  },
  [4] = {
    [sym__whitespace] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__whitespace] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_procedure_section] = STATE(44),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_procedure_section_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym_source_file_repeat1] = STATE(46),
    [sym_data_section] = STATE(45),
    [sym_procedure_section] = STATE(44),
    [aux_sym_data_section_token1] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(89),
    [aux_sym_procedure_section_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_var_definition_token1] = ACTIONS(91),
  },
  [9] = {
    [sym_var_definition] = STATE(48),
    [aux_sym_data_section_repeat1] = STATE(48),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(93),
    [aux_sym_procedure_section_token1] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_LF] = ACTIONS(97),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__number_value] = STATE(51),
    [sym__variable] = STATE(51),
    [sym_vector_element] = STATE(51),
    [sym_number] = ACTIONS(99),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__literal] = STATE(54),
    [sym__variable] = STATE(54),
    [sym__value] = STATE(54),
    [sym_guard] = STATE(55),
    [sym_text] = STATE(54),
    [sym_vector_element] = STATE(54),
    [sym_number] = ACTIONS(103),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_identifier] = ACTIONS(109),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__literal] = STATE(57),
    [sym__variable] = STATE(57),
    [sym__value] = STATE(57),
    [sym_text] = STATE(57),
    [sym_vector_element] = STATE(57),
    [sym_number] = ACTIONS(111),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__variable] = STATE(59),
    [sym_vector_element] = STATE(59),
    [sym_identifier] = ACTIONS(113),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__text_value] = STATE(61),
    [sym__variable] = STATE(61),
    [sym_text] = STATE(61),
    [sym_vector_element] = STATE(61),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__variable] = STATE(63),
    [sym_vector_element] = STATE(63),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__literal] = STATE(65),
    [sym__variable] = STATE(65),
    [sym__value] = STATE(65),
    [sym_text] = STATE(65),
    [sym_vector_element] = STATE(65),
    [sym_number] = ACTIONS(119),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__text_value] = STATE(66),
    [sym__variable] = STATE(66),
    [sym_text] = STATE(66),
    [sym_vector_element] = STATE(66),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__literal] = STATE(67),
    [sym__variable] = STATE(67),
    [sym__value] = STATE(67),
    [aux_sym_in_join_repeat1] = STATE(70),
    [sym_text] = STATE(67),
    [sym_vector_element] = STATE(67),
    [sym_number] = ACTIONS(123),
    [aux_sym_in_join_token3] = ACTIONS(123),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__text_value] = STATE(72),
    [sym__variable] = STATE(72),
    [sym_text] = STATE(72),
    [sym_vector_element] = STATE(72),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_identifier] = ACTIONS(131),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__number_value] = STATE(75),
    [sym__variable] = STATE(75),
    [sym_vector_element] = STATE(75),
    [sym_number] = ACTIONS(133),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_identifier] = ACTIONS(137),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__number_value] = STATE(78),
    [sym__variable] = STATE(78),
    [sym_vector_element] = STATE(78),
    [sym_number] = ACTIONS(139),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__variable] = STATE(79),
    [sym_vector_element] = STATE(79),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__number_value] = STATE(80),
    [sym__variable] = STATE(80),
    [sym_vector_element] = STATE(80),
    [sym_number] = ACTIONS(143),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__number_value] = STATE(82),
    [sym__variable] = STATE(82),
    [sym_vector_element] = STATE(82),
    [sym_number] = ACTIONS(145),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__variable] = STATE(83),
    [sym_vector_element] = STATE(83),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__number_value] = STATE(84),
    [sym__variable] = STATE(84),
    [sym_vector_element] = STATE(84),
    [sym_number] = ACTIONS(149),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__literal] = STATE(85),
    [sym__variable] = STATE(85),
    [sym__value] = STATE(85),
    [sym_text] = STATE(85),
    [sym_vector_element] = STATE(85),
    [sym_number] = ACTIONS(151),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__variable] = STATE(87),
    [sym_vector_element] = STATE(87),
    [sym_identifier] = ACTIONS(153),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym_identifier] = ACTIONS(155),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym_identifier] = ACTIONS(157),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__variable] = STATE(90),
    [sym_vector_element] = STATE(90),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__text_value] = STATE(91),
    [sym__variable] = STATE(91),
    [sym_text] = STATE(91),
    [sym_vector_element] = STATE(91),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym__number_value] = STATE(92),
    [sym__variable] = STATE(92),
    [sym_vector_element] = STATE(92),
    [sym_number] = ACTIONS(159),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym__number_value] = STATE(93),
    [sym__variable] = STATE(93),
    [sym_vector_element] = STATE(93),
    [sym_number] = ACTIONS(161),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym__literal] = STATE(94),
    [sym__variable] = STATE(94),
    [sym__value] = STATE(94),
    [sym_guard] = STATE(95),
    [sym_text] = STATE(94),
    [sym_vector_element] = STATE(94),
    [sym_number] = ACTIONS(163),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym__literal] = STATE(96),
    [sym__variable] = STATE(96),
    [sym__value] = STATE(96),
    [sym_text] = STATE(96),
    [sym_vector_element] = STATE(96),
    [sym_number] = ACTIONS(165),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym__whitespace] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_else] = STATE(101),
    [sym_else_if] = STATE(100),
    [aux_sym_if_repeat1] = STATE(100),
    [aux_sym_if_token1] = ACTIONS(169),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(171),
    [aux_sym_if_token2] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [aux_sym_else_token1] = ACTIONS(173),
  },
  [43] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(102),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(102),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(175),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
  },
  [44] = {
    [sym__whitespace] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_procedure_section] = STATE(103),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_procedure_section_token1] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [aux_sym_source_file_repeat1] = STATE(46),
    [aux_sym_data_section_token1] = ACTIONS(181),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(183),
    [aux_sym_procedure_section_token1] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_type] = STATE(106),
    [aux_sym_type_token1] = ACTIONS(186),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_type_token3] = ACTIONS(188),
    [aux_sym_type_token2] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_var_definition] = STATE(48),
    [aux_sym_data_section_repeat1] = STATE(48),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(190),
    [sym_identifier] = ACTIONS(193),
    [aux_sym_procedure_section_token1] = ACTIONS(196),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [aux_sym_if_token1] = ACTIONS(198),
    [sym_exit] = ACTIONS(198),
    [aux_sym_add_token1] = ACTIONS(198),
    [sym_break] = ACTIONS(198),
    [aux_sym_while_token1] = ACTIONS(198),
    [aux_sym_call_sub_token1] = ACTIONS(200),
    [aux_sym_join_token1] = ACTIONS(198),
    [aux_sym_in_join_token1] = ACTIONS(198),
    [aux_sym_store_length_token1] = ACTIONS(198),
    [aux_sym_abs_token1] = ACTIONS(198),
    [aux_sym_append_file_token1] = ACTIONS(198),
    [aux_sym_load_file_token1] = ACTIONS(198),
    [aux_sym_display_token1] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(198),
    [aux_sym_sub_proc_token1] = ACTIONS(198),
    [aux_sym_if_token2] = ACTIONS(198),
    [aux_sym_wait_token1] = ACTIONS(198),
    [aux_sym_goto_token1] = ACTIONS(198),
    [aux_sym_call_sub_token2] = ACTIONS(198),
    [aux_sym_get_char_token1] = ACTIONS(198),
    [aux_sym_floor_token1] = ACTIONS(198),
    [aux_sym_store_char_token1] = ACTIONS(200),
    [aux_sym_multiply_token1] = ACTIONS(198),
    [aux_sym_store_random_token1] = ACTIONS(198),
    [aux_sym_divide_token1] = ACTIONS(198),
    [aux_sym_write_file_token1] = ACTIONS(198),
    [aux_sym_accept_token1] = ACTIONS(198),
    [anon_sym_LF] = ACTIONS(198),
    [aux_sym_sub_proc_token2] = ACTIONS(198),
    [aux_sym_else_if_token1] = ACTIONS(198),
    [sym_return] = ACTIONS(198),
    [aux_sym_label_token1] = ACTIONS(198),
    [aux_sym_while_token3] = ACTIONS(198),
    [aux_sym_call_ext_token1] = ACTIONS(198),
    [sym_continue] = ACTIONS(198),
    [aux_sym_ceil_token1] = ACTIONS(198),
    [aux_sym_store_char_code_token1] = ACTIONS(198),
    [ts_builtin_sym_end] = ACTIONS(198),
    [aux_sym_subtract_token1] = ACTIONS(198),
    [aux_sym_modulo_token1] = ACTIONS(198),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(198),
    [aux_sym_store_token1] = ACTIONS(200),
    [aux_sym_else_token1] = ACTIONS(200),
  },
  [50] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [aux_sym_add_token2] = ACTIONS(204),
  },
  [51] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_add_token2] = ACTIONS(206),
  },
  [52] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(208),
    [aux_sym_var_definition_token1] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [aux_sym_text_repeat1] = STATE(111),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [sym_escape_sequence] = ACTIONS(214),
  },
  [54] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_var_definition_token1] = ACTIONS(216),
  },
  [55] = {
    [aux_sym_while_token2] = ACTIONS(218),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_LF] = ACTIONS(220),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_add_token2] = ACTIONS(222),
  },
  [58] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(224),
    [aux_sym_in_join_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [aux_sym_in_join_token2] = ACTIONS(226),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(228),
    [aux_sym_store_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(230),
  },
  [62] = {
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(232),
    [anon_sym_LF] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_LF] = ACTIONS(234),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(236),
    [aux_sym_write_file_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_write_file_token2] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(240),
  },
  [67] = {
    [anon_sym_LF] = ACTIONS(242),
    [sym__whitespace] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym__whitespace] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(246),
    [anon_sym_LF] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [aux_sym_text_repeat1] = STATE(126),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
    [sym_escape_sequence] = ACTIONS(252),
  },
  [70] = {
    [sym__literal] = STATE(127),
    [sym__variable] = STATE(127),
    [sym__value] = STATE(127),
    [aux_sym_in_join_repeat1] = STATE(128),
    [sym_text] = STATE(127),
    [sym_vector_element] = STATE(127),
    [sym_number] = ACTIONS(254),
    [aux_sym_in_join_token3] = ACTIONS(254),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(256),
    [anon_sym_LF] = ACTIONS(204),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(258),
    [anon_sym_LF] = ACTIONS(260),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [anon_sym_LF] = ACTIONS(264),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(266),
    [aux_sym_wait_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_wait_token2] = ACTIONS(268),
  },
  [76] = {
    [anon_sym_LF] = ACTIONS(270),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [aux_sym_subtract_token2] = ACTIONS(204),
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [aux_sym_subtract_token2] = ACTIONS(274),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_LF] = ACTIONS(276),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(278),
  },
  [81] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(280),
    [aux_sym_multiply_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_multiply_token2] = ACTIONS(282),
  },
  [83] = {
    [anon_sym_LF] = ACTIONS(284),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_multiply_token2] = ACTIONS(286),
  },
  [85] = {
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_write_file_token2] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(290),
    [anon_sym_LF] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(204),
  },
  [87] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(292),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(294),
  },
  [88] = {
    [anon_sym_LF] = ACTIONS(296),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [anon_sym_LF] = ACTIONS(298),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [anon_sym_LF] = ACTIONS(300),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(302),
  },
  [92] = {
    [aux_sym_subtract_token2] = ACTIONS(304),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_multiply_token2] = ACTIONS(306),
  },
  [94] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_var_definition_token1] = ACTIONS(308),
  },
  [95] = {
    [aux_sym__if_then_block_token2] = ACTIONS(310),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(312),
  },
  [97] = {
    [anon_sym_LF] = ACTIONS(314),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [98] = {
    [sym__if_then_block] = STATE(150),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [99] = {
    [anon_sym_LF] = ACTIONS(316),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_else] = STATE(154),
    [sym_else_if] = STATE(153),
    [aux_sym_if_repeat1] = STATE(153),
    [aux_sym_if_token1] = ACTIONS(318),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(171),
    [aux_sym_if_token2] = ACTIONS(318),
    [sym_comment] = ACTIONS(3),
    [aux_sym_else_token1] = ACTIONS(173),
  },
  [101] = {
    [aux_sym_if_token1] = ACTIONS(318),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_if_token2] = ACTIONS(318),
    [sym_comment] = ACTIONS(3),
  },
  [102] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(102),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(102),
    [sym_exit] = ACTIONS(320),
    [aux_sym_add_token1] = ACTIONS(323),
    [sym_break] = ACTIONS(320),
    [aux_sym_while_token1] = ACTIONS(326),
    [aux_sym_call_sub_token1] = ACTIONS(329),
    [aux_sym_join_token1] = ACTIONS(332),
    [aux_sym_in_join_token1] = ACTIONS(335),
    [aux_sym_store_length_token1] = ACTIONS(338),
    [aux_sym_abs_token1] = ACTIONS(341),
    [aux_sym_append_file_token1] = ACTIONS(344),
    [aux_sym_load_file_token1] = ACTIONS(347),
    [aux_sym_display_token1] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(353),
    [aux_sym_sub_proc_token1] = ACTIONS(356),
    [aux_sym_wait_token1] = ACTIONS(359),
    [aux_sym_goto_token1] = ACTIONS(362),
    [aux_sym_call_sub_token2] = ACTIONS(365),
    [aux_sym_get_char_token1] = ACTIONS(368),
    [aux_sym_floor_token1] = ACTIONS(371),
    [aux_sym_store_char_token1] = ACTIONS(374),
    [aux_sym_multiply_token1] = ACTIONS(377),
    [aux_sym_store_random_token1] = ACTIONS(380),
    [aux_sym_divide_token1] = ACTIONS(383),
    [aux_sym_write_file_token1] = ACTIONS(386),
    [aux_sym_accept_token1] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(392),
    [sym_return] = ACTIONS(320),
    [aux_sym_label_token1] = ACTIONS(395),
    [aux_sym_call_ext_token1] = ACTIONS(398),
    [sym_continue] = ACTIONS(320),
    [aux_sym_ceil_token1] = ACTIONS(401),
    [aux_sym_store_char_code_token1] = ACTIONS(404),
    [ts_builtin_sym_end] = ACTIONS(407),
    [aux_sym_subtract_token1] = ACTIONS(409),
    [aux_sym_modulo_token1] = ACTIONS(412),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(415),
    [aux_sym_store_token1] = ACTIONS(418),
  },
  [103] = {
    [sym__whitespace] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_type_token3] = ACTIONS(423),
    [aux_sym_type_token2] = ACTIONS(423),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(425),
    [sym_comment] = ACTIONS(3),
    [aux_sym_type_token4] = ACTIONS(427),
  },
  [106] = {
    [anon_sym_LF] = ACTIONS(429),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [sym__number_value] = STATE(159),
    [sym__variable] = STATE(159),
    [sym_vector_element] = STATE(159),
    [sym_number] = ACTIONS(433),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [anon_sym_LF] = ACTIONS(435),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(435),
    [aux_sym_in_join_token2] = ACTIONS(435),
    [aux_sym_subtract_token2] = ACTIONS(435),
    [aux_sym_var_definition_token1] = ACTIONS(435),
    [aux_sym_wait_token2] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(435),
    [aux_sym__if_then_block_token2] = ACTIONS(435),
    [aux_sym_store_token2] = ACTIONS(435),
    [aux_sym_multiply_token2] = ACTIONS(435),
    [aux_sym_write_file_token2] = ACTIONS(435),
    [aux_sym_add_token2] = ACTIONS(437),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(435),
    [aux_sym_while_token2] = ACTIONS(435),
  },
  [111] = {
    [aux_sym_text_repeat1] = STATE(161),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym_comment] = ACTIONS(3),
    [sym_escape_sequence] = ACTIONS(443),
  },
  [112] = {
    [sym_rel_op] = STATE(163),
    [aux_sym_rel_op_token5] = ACTIONS(445),
    [aux_sym_rel_op_token1] = ACTIONS(445),
    [aux_sym_rel_op_token6] = ACTIONS(445),
    [aux_sym_rel_op_token3] = ACTIONS(447),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_rel_op_token2] = ACTIONS(445),
    [aux_sym_rel_op_token4] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [anon_sym_LF] = ACTIONS(449),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [sym__literal] = STATE(165),
    [sym__variable] = STATE(165),
    [sym__value] = STATE(165),
    [sym_text] = STATE(165),
    [sym_vector_element] = STATE(165),
    [sym_number] = ACTIONS(451),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [116] = {
    [sym__literal] = STATE(166),
    [sym__variable] = STATE(166),
    [sym__value] = STATE(166),
    [aux_sym_in_join_repeat1] = STATE(168),
    [sym_text] = STATE(166),
    [sym_vector_element] = STATE(166),
    [sym_number] = ACTIONS(453),
    [aux_sym_in_join_token3] = ACTIONS(453),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [118] = {
    [sym__variable] = STATE(169),
    [sym_vector_element] = STATE(169),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [119] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [120] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [sym__text_value] = STATE(170),
    [sym__variable] = STATE(170),
    [sym_text] = STATE(170),
    [sym_vector_element] = STATE(170),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [122] = {
    [sym__variable] = STATE(171),
    [sym_vector_element] = STATE(171),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [123] = {
    [sym_number] = ACTIONS(457),
    [aux_sym_in_join_token3] = ACTIONS(457),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(459),
    [sym_comment] = ACTIONS(3),
  },
  [124] = {
    [sym__literal] = STATE(172),
    [sym__variable] = STATE(172),
    [sym__value] = STATE(172),
    [sym_text] = STATE(172),
    [sym_vector_element] = STATE(172),
    [sym_number] = ACTIONS(461),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [anon_sym_LF] = ACTIONS(435),
    [sym__whitespace] = ACTIONS(435),
    [sym_comment] = ACTIONS(3),
  },
  [126] = {
    [aux_sym_text_repeat1] = STATE(161),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(439),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
    [sym_escape_sequence] = ACTIONS(443),
  },
  [127] = {
    [anon_sym_LF] = ACTIONS(465),
    [sym__whitespace] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [128] = {
    [sym__literal] = STATE(166),
    [sym__variable] = STATE(166),
    [sym__value] = STATE(166),
    [aux_sym_in_join_repeat1] = STATE(128),
    [sym_text] = STATE(166),
    [sym_vector_element] = STATE(166),
    [sym_number] = ACTIONS(467),
    [aux_sym_in_join_token3] = ACTIONS(467),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(470),
    [anon_sym_DQUOTE] = ACTIONS(473),
    [sym_comment] = ACTIONS(3),
  },
  [129] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [130] = {
    [sym__variable] = STATE(174),
    [sym_vector_element] = STATE(174),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [131] = {
    [sym__variable] = STATE(175),
    [sym_vector_element] = STATE(175),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_body] = STATE(176),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym__block] = STATE(177),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(178),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(178),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(476),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
  },
  [133] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [134] = {
    [anon_sym_LF] = ACTIONS(478),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [sym__text_value] = STATE(179),
    [sym__variable] = STATE(179),
    [sym_text] = STATE(179),
    [sym_vector_element] = STATE(179),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [137] = {
    [sym__variable] = STATE(180),
    [sym_vector_element] = STATE(180),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [138] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [139] = {
    [sym__number_value] = STATE(181),
    [sym__variable] = STATE(181),
    [sym_vector_element] = STATE(181),
    [sym_number] = ACTIONS(480),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [140] = {
    [sym__number_value] = STATE(182),
    [sym__variable] = STATE(182),
    [sym_vector_element] = STATE(182),
    [sym_number] = ACTIONS(482),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [141] = {
    [sym__text_value] = STATE(183),
    [sym__variable] = STATE(183),
    [sym_text] = STATE(183),
    [sym_vector_element] = STATE(183),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [142] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [143] = {
    [anon_sym_LF] = ACTIONS(484),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [144] = {
    [sym__variable] = STATE(184),
    [sym_vector_element] = STATE(184),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [145] = {
    [sym__number_value] = STATE(185),
    [sym__variable] = STATE(185),
    [sym_vector_element] = STATE(185),
    [sym_number] = ACTIONS(486),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [146] = {
    [sym__number_value] = STATE(186),
    [sym__variable] = STATE(186),
    [sym_vector_element] = STATE(186),
    [sym_number] = ACTIONS(488),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [sym_rel_op] = STATE(187),
    [aux_sym_rel_op_token5] = ACTIONS(445),
    [aux_sym_rel_op_token1] = ACTIONS(445),
    [aux_sym_rel_op_token6] = ACTIONS(445),
    [aux_sym_rel_op_token3] = ACTIONS(447),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_rel_op_token2] = ACTIONS(445),
    [aux_sym_rel_op_token4] = ACTIONS(447),
    [sym_comment] = ACTIONS(3),
  },
  [148] = {
    [anon_sym_LF] = ACTIONS(490),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [149] = {
    [sym__variable] = STATE(189),
    [sym_vector_element] = STATE(189),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [150] = {
    [aux_sym_if_token1] = ACTIONS(492),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(492),
    [aux_sym_if_token2] = ACTIONS(492),
    [sym_comment] = ACTIONS(3),
    [aux_sym_else_token1] = ACTIONS(494),
  },
  [151] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_body] = STATE(190),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym__block] = STATE(177),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(191),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(191),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(496),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
  },
  [152] = {
    [anon_sym_LF] = ACTIONS(498),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [153] = {
    [sym_else_if] = STATE(153),
    [aux_sym_if_repeat1] = STATE(153),
    [aux_sym_if_token1] = ACTIONS(500),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(502),
    [aux_sym_if_token2] = ACTIONS(500),
    [sym_comment] = ACTIONS(3),
    [aux_sym_else_token1] = ACTIONS(505),
  },
  [154] = {
    [aux_sym_if_token1] = ACTIONS(507),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_if_token2] = ACTIONS(507),
    [sym_comment] = ACTIONS(3),
  },
  [155] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(509),
    [sym_comment] = ACTIONS(3),
    [aux_sym_type_token4] = ACTIONS(511),
  },
  [156] = {
    [anon_sym_LF] = ACTIONS(509),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [157] = {
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(513),
    [sym_identifier] = ACTIONS(515),
    [aux_sym_procedure_section_token1] = ACTIONS(513),
    [sym_comment] = ACTIONS(3),
  },
  [158] = {
    [anon_sym_LF] = ACTIONS(517),
    [aux_sym_in_join_token2] = ACTIONS(517),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(517),
    [aux_sym_subtract_token2] = ACTIONS(517),
    [aux_sym_var_definition_token1] = ACTIONS(517),
    [aux_sym_wait_token2] = ACTIONS(517),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(517),
    [aux_sym__if_then_block_token2] = ACTIONS(517),
    [aux_sym_store_token2] = ACTIONS(517),
    [aux_sym_multiply_token2] = ACTIONS(517),
    [aux_sym_write_file_token2] = ACTIONS(517),
    [aux_sym_add_token2] = ACTIONS(519),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(517),
    [aux_sym_while_token2] = ACTIONS(517),
  },
  [159] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(521),
  },
  [160] = {
    [anon_sym_LF] = ACTIONS(523),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(523),
    [aux_sym_in_join_token2] = ACTIONS(523),
    [aux_sym_subtract_token2] = ACTIONS(523),
    [aux_sym_var_definition_token1] = ACTIONS(523),
    [aux_sym_wait_token2] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(523),
    [aux_sym__if_then_block_token2] = ACTIONS(523),
    [aux_sym_store_token2] = ACTIONS(523),
    [aux_sym_multiply_token2] = ACTIONS(523),
    [aux_sym_write_file_token2] = ACTIONS(523),
    [aux_sym_add_token2] = ACTIONS(525),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(523),
    [aux_sym_while_token2] = ACTIONS(523),
  },
  [161] = {
    [aux_sym_text_repeat1] = STATE(161),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(527),
    [anon_sym_DQUOTE] = ACTIONS(530),
    [sym_comment] = ACTIONS(3),
    [sym_escape_sequence] = ACTIONS(532),
  },
  [162] = {
    [sym__whitespace] = ACTIONS(535),
    [sym_comment] = ACTIONS(3),
  },
  [163] = {
    [sym__whitespace] = ACTIONS(537),
    [sym_comment] = ACTIONS(3),
  },
  [164] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_body] = STATE(196),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym__block] = STATE(177),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(197),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(197),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(539),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
  },
  [165] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(541),
  },
  [166] = {
    [sym__whitespace] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [167] = {
    [sym__whitespace] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(543),
  },
  [168] = {
    [sym__literal] = STATE(200),
    [sym__variable] = STATE(200),
    [sym__value] = STATE(200),
    [aux_sym_in_join_repeat1] = STATE(128),
    [sym_text] = STATE(200),
    [sym_vector_element] = STATE(200),
    [sym_number] = ACTIONS(545),
    [aux_sym_in_join_token3] = ACTIONS(545),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [169] = {
    [anon_sym_LF] = ACTIONS(547),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [170] = {
    [anon_sym_LF] = ACTIONS(549),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [171] = {
    [anon_sym_LF] = ACTIONS(551),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [172] = {
    [anon_sym_LF] = ACTIONS(517),
    [sym__whitespace] = ACTIONS(517),
    [sym_comment] = ACTIONS(3),
  },
  [173] = {
    [anon_sym_LF] = ACTIONS(523),
    [sym__whitespace] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
  },
  [174] = {
    [anon_sym_LF] = ACTIONS(553),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [175] = {
    [anon_sym_LF] = ACTIONS(555),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [176] = {
    [aux_sym_sub_proc_token2] = ACTIONS(557),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [177] = {
    [aux_sym_if_token1] = ACTIONS(559),
    [aux_sym_else_token1] = ACTIONS(561),
    [aux_sym_if_token2] = ACTIONS(559),
    [aux_sym_sub_proc_token2] = ACTIONS(559),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(559),
    [sym_comment] = ACTIONS(3),
    [aux_sym_while_token3] = ACTIONS(559),
  },
  [178] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(202),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(202),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(563),
    [aux_sym_sub_proc_token2] = ACTIONS(177),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
  },
  [179] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(565),
  },
  [180] = {
    [anon_sym_LF] = ACTIONS(567),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [181] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(569),
  },
  [182] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(571),
  },
  [183] = {
    [anon_sym_LF] = ACTIONS(573),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [184] = {
    [anon_sym_LF] = ACTIONS(575),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [185] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(577),
  },
  [186] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(579),
  },
  [187] = {
    [sym__whitespace] = ACTIONS(581),
    [sym_comment] = ACTIONS(3),
  },
  [188] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_body] = STATE(209),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym__block] = STATE(177),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(210),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(210),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(583),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
  },
  [189] = {
    [anon_sym_LF] = ACTIONS(585),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [190] = {
    [aux_sym_if_token1] = ACTIONS(587),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_if_token2] = ACTIONS(587),
    [sym_comment] = ACTIONS(3),
  },
  [191] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(211),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(211),
    [aux_sym_if_token1] = ACTIONS(177),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_if_token2] = ACTIONS(177),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(589),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
  },
  [192] = {
    [anon_sym_LF] = ACTIONS(591),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [193] = {
    [anon_sym_LF] = ACTIONS(593),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [194] = {
    [sym__variable] = STATE(212),
    [sym_vector_element] = STATE(212),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [195] = {
    [sym__literal] = STATE(214),
    [sym__variable] = STATE(214),
    [sym__value] = STATE(214),
    [sym_text] = STATE(214),
    [sym_vector_element] = STATE(214),
    [sym_number] = ACTIONS(595),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [196] = {
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_while_token3] = ACTIONS(599),
    [sym_comment] = ACTIONS(3),
  },
  [197] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(216),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(216),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(601),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_while_token3] = ACTIONS(177),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
  },
  [198] = {
    [sym__variable] = STATE(217),
    [sym_vector_element] = STATE(217),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [199] = {
    [sym__literal] = STATE(172),
    [sym__variable] = STATE(172),
    [sym__value] = STATE(172),
    [sym_text] = STATE(172),
    [sym_vector_element] = STATE(172),
    [sym_number] = ACTIONS(461),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [200] = {
    [anon_sym_LF] = ACTIONS(603),
    [sym__whitespace] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [201] = {
    [anon_sym_LF] = ACTIONS(605),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [202] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(202),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(202),
    [sym_exit] = ACTIONS(320),
    [aux_sym_add_token1] = ACTIONS(323),
    [sym_break] = ACTIONS(320),
    [aux_sym_while_token1] = ACTIONS(326),
    [aux_sym_call_sub_token1] = ACTIONS(329),
    [aux_sym_join_token1] = ACTIONS(332),
    [aux_sym_in_join_token1] = ACTIONS(335),
    [aux_sym_store_length_token1] = ACTIONS(338),
    [aux_sym_abs_token1] = ACTIONS(341),
    [aux_sym_append_file_token1] = ACTIONS(344),
    [aux_sym_load_file_token1] = ACTIONS(347),
    [aux_sym_display_token1] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(353),
    [aux_sym_sub_proc_token1] = ACTIONS(356),
    [aux_sym_wait_token1] = ACTIONS(359),
    [aux_sym_goto_token1] = ACTIONS(362),
    [aux_sym_call_sub_token2] = ACTIONS(365),
    [aux_sym_get_char_token1] = ACTIONS(368),
    [aux_sym_floor_token1] = ACTIONS(371),
    [aux_sym_store_char_token1] = ACTIONS(374),
    [aux_sym_multiply_token1] = ACTIONS(377),
    [aux_sym_store_random_token1] = ACTIONS(380),
    [aux_sym_divide_token1] = ACTIONS(383),
    [aux_sym_write_file_token1] = ACTIONS(386),
    [aux_sym_accept_token1] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(607),
    [aux_sym_sub_proc_token2] = ACTIONS(407),
    [sym_return] = ACTIONS(320),
    [aux_sym_label_token1] = ACTIONS(395),
    [aux_sym_call_ext_token1] = ACTIONS(398),
    [sym_continue] = ACTIONS(320),
    [aux_sym_ceil_token1] = ACTIONS(401),
    [aux_sym_store_char_code_token1] = ACTIONS(404),
    [aux_sym_subtract_token1] = ACTIONS(409),
    [aux_sym_modulo_token1] = ACTIONS(412),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(415),
    [aux_sym_store_token1] = ACTIONS(418),
  },
  [203] = {
    [sym__variable] = STATE(218),
    [sym_vector_element] = STATE(218),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [204] = {
    [sym__variable] = STATE(219),
    [sym_vector_element] = STATE(219),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [205] = {
    [sym__variable] = STATE(220),
    [sym_vector_element] = STATE(220),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [206] = {
    [sym__variable] = STATE(221),
    [sym_vector_element] = STATE(221),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [207] = {
    [sym__variable] = STATE(222),
    [sym_vector_element] = STATE(222),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [208] = {
    [sym__literal] = STATE(214),
    [sym__variable] = STATE(214),
    [sym__value] = STATE(214),
    [sym_text] = STATE(214),
    [sym_vector_element] = STATE(214),
    [sym_number] = ACTIONS(595),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(610),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [209] = {
    [aux_sym_if_token1] = ACTIONS(612),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(612),
    [aux_sym_if_token2] = ACTIONS(612),
    [sym_comment] = ACTIONS(3),
    [aux_sym_else_token1] = ACTIONS(614),
  },
  [210] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(224),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(224),
    [aux_sym_if_token1] = ACTIONS(177),
    [sym_exit] = ACTIONS(19),
    [aux_sym_add_token1] = ACTIONS(21),
    [sym_break] = ACTIONS(19),
    [aux_sym_while_token1] = ACTIONS(23),
    [aux_sym_call_sub_token1] = ACTIONS(25),
    [aux_sym_join_token1] = ACTIONS(27),
    [aux_sym_in_join_token1] = ACTIONS(29),
    [aux_sym_store_length_token1] = ACTIONS(31),
    [aux_sym_abs_token1] = ACTIONS(33),
    [aux_sym_append_file_token1] = ACTIONS(35),
    [aux_sym_load_file_token1] = ACTIONS(37),
    [aux_sym_display_token1] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(41),
    [aux_sym_sub_proc_token1] = ACTIONS(43),
    [aux_sym_if_token2] = ACTIONS(177),
    [aux_sym_wait_token1] = ACTIONS(45),
    [aux_sym_goto_token1] = ACTIONS(47),
    [aux_sym_call_sub_token2] = ACTIONS(49),
    [aux_sym_get_char_token1] = ACTIONS(51),
    [aux_sym_floor_token1] = ACTIONS(53),
    [aux_sym_store_char_token1] = ACTIONS(55),
    [aux_sym_multiply_token1] = ACTIONS(57),
    [aux_sym_store_random_token1] = ACTIONS(59),
    [aux_sym_divide_token1] = ACTIONS(61),
    [aux_sym_write_file_token1] = ACTIONS(63),
    [aux_sym_accept_token1] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(616),
    [aux_sym_else_if_token1] = ACTIONS(177),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_call_ext_token1] = ACTIONS(71),
    [sym_continue] = ACTIONS(19),
    [aux_sym_ceil_token1] = ACTIONS(73),
    [aux_sym_store_char_code_token1] = ACTIONS(75),
    [aux_sym_subtract_token1] = ACTIONS(77),
    [aux_sym_modulo_token1] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(81),
    [aux_sym_store_token1] = ACTIONS(83),
    [aux_sym_else_token1] = ACTIONS(618),
  },
  [211] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(211),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(211),
    [aux_sym_if_token1] = ACTIONS(407),
    [sym_exit] = ACTIONS(320),
    [aux_sym_add_token1] = ACTIONS(323),
    [sym_break] = ACTIONS(320),
    [aux_sym_while_token1] = ACTIONS(326),
    [aux_sym_call_sub_token1] = ACTIONS(329),
    [aux_sym_join_token1] = ACTIONS(332),
    [aux_sym_in_join_token1] = ACTIONS(335),
    [aux_sym_store_length_token1] = ACTIONS(338),
    [aux_sym_abs_token1] = ACTIONS(341),
    [aux_sym_append_file_token1] = ACTIONS(344),
    [aux_sym_load_file_token1] = ACTIONS(347),
    [aux_sym_display_token1] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(353),
    [aux_sym_sub_proc_token1] = ACTIONS(356),
    [aux_sym_if_token2] = ACTIONS(407),
    [aux_sym_wait_token1] = ACTIONS(359),
    [aux_sym_goto_token1] = ACTIONS(362),
    [aux_sym_call_sub_token2] = ACTIONS(365),
    [aux_sym_get_char_token1] = ACTIONS(368),
    [aux_sym_floor_token1] = ACTIONS(371),
    [aux_sym_store_char_token1] = ACTIONS(374),
    [aux_sym_multiply_token1] = ACTIONS(377),
    [aux_sym_store_random_token1] = ACTIONS(380),
    [aux_sym_divide_token1] = ACTIONS(383),
    [aux_sym_write_file_token1] = ACTIONS(386),
    [aux_sym_accept_token1] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(620),
    [sym_return] = ACTIONS(320),
    [aux_sym_label_token1] = ACTIONS(395),
    [aux_sym_call_ext_token1] = ACTIONS(398),
    [sym_continue] = ACTIONS(320),
    [aux_sym_ceil_token1] = ACTIONS(401),
    [aux_sym_store_char_code_token1] = ACTIONS(404),
    [aux_sym_subtract_token1] = ACTIONS(409),
    [aux_sym_modulo_token1] = ACTIONS(412),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(415),
    [aux_sym_store_token1] = ACTIONS(418),
  },
  [212] = {
    [anon_sym_LF] = ACTIONS(623),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [213] = {
    [aux_sym_while_token2] = ACTIONS(204),
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(625),
    [sym_comment] = ACTIONS(3),
  },
  [214] = {
    [aux_sym_while_token2] = ACTIONS(627),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym__if_then_block_token2] = ACTIONS(627),
    [sym_comment] = ACTIONS(3),
  },
  [215] = {
    [anon_sym_LF] = ACTIONS(629),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [216] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(216),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(216),
    [sym_exit] = ACTIONS(320),
    [aux_sym_add_token1] = ACTIONS(323),
    [sym_break] = ACTIONS(320),
    [aux_sym_while_token1] = ACTIONS(326),
    [aux_sym_call_sub_token1] = ACTIONS(329),
    [aux_sym_join_token1] = ACTIONS(332),
    [aux_sym_in_join_token1] = ACTIONS(335),
    [aux_sym_store_length_token1] = ACTIONS(338),
    [aux_sym_abs_token1] = ACTIONS(341),
    [aux_sym_append_file_token1] = ACTIONS(344),
    [aux_sym_load_file_token1] = ACTIONS(347),
    [aux_sym_display_token1] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(353),
    [aux_sym_sub_proc_token1] = ACTIONS(356),
    [aux_sym_wait_token1] = ACTIONS(359),
    [aux_sym_goto_token1] = ACTIONS(362),
    [aux_sym_call_sub_token2] = ACTIONS(365),
    [aux_sym_get_char_token1] = ACTIONS(368),
    [aux_sym_floor_token1] = ACTIONS(371),
    [aux_sym_store_char_token1] = ACTIONS(374),
    [aux_sym_multiply_token1] = ACTIONS(377),
    [aux_sym_store_random_token1] = ACTIONS(380),
    [aux_sym_divide_token1] = ACTIONS(383),
    [aux_sym_write_file_token1] = ACTIONS(386),
    [aux_sym_accept_token1] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(631),
    [sym_return] = ACTIONS(320),
    [aux_sym_label_token1] = ACTIONS(395),
    [aux_sym_while_token3] = ACTIONS(407),
    [aux_sym_call_ext_token1] = ACTIONS(398),
    [sym_continue] = ACTIONS(320),
    [aux_sym_ceil_token1] = ACTIONS(401),
    [aux_sym_store_char_code_token1] = ACTIONS(404),
    [aux_sym_subtract_token1] = ACTIONS(409),
    [aux_sym_modulo_token1] = ACTIONS(412),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(415),
    [aux_sym_store_token1] = ACTIONS(418),
  },
  [217] = {
    [anon_sym_LF] = ACTIONS(634),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [218] = {
    [anon_sym_LF] = ACTIONS(636),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [219] = {
    [anon_sym_LF] = ACTIONS(638),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [220] = {
    [anon_sym_LF] = ACTIONS(640),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [221] = {
    [anon_sym_LF] = ACTIONS(642),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [222] = {
    [anon_sym_LF] = ACTIONS(644),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [223] = {
    [aux_sym__if_then_block_token2] = ACTIONS(204),
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(646),
    [sym_comment] = ACTIONS(3),
  },
  [224] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_goto] = STATE(10),
    [sym_label] = STATE(10),
    [sym_modulo] = STATE(10),
    [sym_abs] = STATE(10),
    [sym_get_char] = STATE(10),
    [sym_store_length] = STATE(10),
    [sym_accept] = STATE(10),
    [sym_execute] = STATE(10),
    [sym_write_file] = STATE(10),
    [sym_append_file] = STATE(10),
    [sym_while] = STATE(10),
    [sym_call_sub] = STATE(10),
    [sym_add] = STATE(10),
    [sym_subtract] = STATE(10),
    [sym_store_random] = STATE(10),
    [sym_floor] = STATE(10),
    [sym_store_char] = STATE(10),
    [sym_store_char_code] = STATE(10),
    [sym_execute_store_ouput] = STATE(10),
    [sym_execute_store_exit_code] = STATE(10),
    [sym__statement] = STATE(224),
    [sym_sub_proc] = STATE(10),
    [sym__if_then_block] = STATE(42),
    [sym_call_ext] = STATE(10),
    [sym_wait] = STATE(10),
    [sym_multiply] = STATE(10),
    [sym_divide] = STATE(10),
    [sym_ceil] = STATE(10),
    [sym_join] = STATE(10),
    [sym_in_join] = STATE(10),
    [sym_display] = STATE(10),
    [sym_accept_until_eof] = STATE(10),
    [sym_load_file] = STATE(10),
    [aux_sym__block_repeat1] = STATE(224),
    [aux_sym_if_token1] = ACTIONS(407),
    [sym_exit] = ACTIONS(320),
    [aux_sym_add_token1] = ACTIONS(323),
    [sym_break] = ACTIONS(320),
    [aux_sym_while_token1] = ACTIONS(326),
    [aux_sym_call_sub_token1] = ACTIONS(329),
    [aux_sym_join_token1] = ACTIONS(332),
    [aux_sym_in_join_token1] = ACTIONS(335),
    [aux_sym_store_length_token1] = ACTIONS(338),
    [aux_sym_abs_token1] = ACTIONS(341),
    [aux_sym_append_file_token1] = ACTIONS(344),
    [aux_sym_load_file_token1] = ACTIONS(347),
    [aux_sym_display_token1] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(353),
    [aux_sym_sub_proc_token1] = ACTIONS(356),
    [aux_sym_if_token2] = ACTIONS(407),
    [aux_sym_wait_token1] = ACTIONS(359),
    [aux_sym_goto_token1] = ACTIONS(362),
    [aux_sym_call_sub_token2] = ACTIONS(365),
    [aux_sym_get_char_token1] = ACTIONS(368),
    [aux_sym_floor_token1] = ACTIONS(371),
    [aux_sym_store_char_token1] = ACTIONS(374),
    [aux_sym_multiply_token1] = ACTIONS(377),
    [aux_sym_store_random_token1] = ACTIONS(380),
    [aux_sym_divide_token1] = ACTIONS(383),
    [aux_sym_write_file_token1] = ACTIONS(386),
    [aux_sym_accept_token1] = ACTIONS(389),
    [anon_sym_LF] = ACTIONS(648),
    [aux_sym_else_if_token1] = ACTIONS(407),
    [sym_return] = ACTIONS(320),
    [aux_sym_label_token1] = ACTIONS(395),
    [aux_sym_call_ext_token1] = ACTIONS(398),
    [sym_continue] = ACTIONS(320),
    [aux_sym_ceil_token1] = ACTIONS(401),
    [aux_sym_store_char_code_token1] = ACTIONS(404),
    [aux_sym_subtract_token1] = ACTIONS(409),
    [aux_sym_modulo_token1] = ACTIONS(412),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(415),
    [aux_sym_store_token1] = ACTIONS(418),
    [aux_sym_else_token1] = ACTIONS(651),
  },
  [225] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [226] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(610),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(7),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_data_section, 1),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = true}, SHIFT(13),
  [51] = {.count = 1, .reusable = true}, SHIFT(25),
  [53] = {.count = 1, .reusable = true}, SHIFT(26),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = true}, SHIFT(28),
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, SHIFT(43),
  [69] = {.count = 1, .reusable = true}, SHIFT(33),
  [71] = {.count = 1, .reusable = true}, SHIFT(34),
  [73] = {.count = 1, .reusable = true}, SHIFT(35),
  [75] = {.count = 1, .reusable = true}, SHIFT(36),
  [77] = {.count = 1, .reusable = true}, SHIFT(37),
  [79] = {.count = 1, .reusable = true}, SHIFT(38),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = false}, SHIFT(40),
  [85] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(46),
  [91] = {.count = 1, .reusable = true}, SHIFT(47),
  [93] = {.count = 1, .reusable = true}, SHIFT(48),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_data_section, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(49),
  [99] = {.count = 1, .reusable = false}, SHIFT(51),
  [101] = {.count = 1, .reusable = false}, SHIFT(50),
  [103] = {.count = 1, .reusable = false}, SHIFT(54),
  [105] = {.count = 1, .reusable = false}, SHIFT(52),
  [107] = {.count = 1, .reusable = true}, SHIFT(53),
  [109] = {.count = 1, .reusable = false}, SHIFT(56),
  [111] = {.count = 1, .reusable = false}, SHIFT(57),
  [113] = {.count = 1, .reusable = false}, SHIFT(58),
  [115] = {.count = 1, .reusable = false}, SHIFT(60),
  [117] = {.count = 1, .reusable = false}, SHIFT(62),
  [119] = {.count = 1, .reusable = false}, SHIFT(65),
  [121] = {.count = 1, .reusable = false}, SHIFT(64),
  [123] = {.count = 1, .reusable = false}, SHIFT(67),
  [125] = {.count = 1, .reusable = false}, SHIFT(68),
  [127] = {.count = 1, .reusable = true}, SHIFT(69),
  [129] = {.count = 1, .reusable = false}, SHIFT(71),
  [131] = {.count = 1, .reusable = false}, SHIFT(73),
  [133] = {.count = 1, .reusable = false}, SHIFT(75),
  [135] = {.count = 1, .reusable = false}, SHIFT(74),
  [137] = {.count = 1, .reusable = false}, SHIFT(76),
  [139] = {.count = 1, .reusable = false}, SHIFT(78),
  [141] = {.count = 1, .reusable = false}, SHIFT(77),
  [143] = {.count = 1, .reusable = false}, SHIFT(80),
  [145] = {.count = 1, .reusable = false}, SHIFT(82),
  [147] = {.count = 1, .reusable = false}, SHIFT(81),
  [149] = {.count = 1, .reusable = false}, SHIFT(84),
  [151] = {.count = 1, .reusable = false}, SHIFT(85),
  [153] = {.count = 1, .reusable = false}, SHIFT(86),
  [155] = {.count = 1, .reusable = false}, SHIFT(88),
  [157] = {.count = 1, .reusable = false}, SHIFT(89),
  [159] = {.count = 1, .reusable = false}, SHIFT(92),
  [161] = {.count = 1, .reusable = false}, SHIFT(93),
  [163] = {.count = 1, .reusable = false}, SHIFT(94),
  [165] = {.count = 1, .reusable = false}, SHIFT(96),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_procedure_section, 2),
  [169] = {.count = 1, .reusable = true}, SHIFT(97),
  [171] = {.count = 1, .reusable = true}, SHIFT(98),
  [173] = {.count = 1, .reusable = false}, SHIFT(99),
  [175] = {.count = 1, .reusable = true}, SHIFT(102),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym__block, 1),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [181] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [186] = {.count = 1, .reusable = true}, SHIFT(104),
  [188] = {.count = 1, .reusable = true}, SHIFT(105),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_data_section_repeat1, 2), SHIFT_REPEAT(48),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_data_section_repeat1, 2), SHIFT_REPEAT(8),
  [196] = {.count = 1, .reusable = true}, REDUCE(aux_sym_data_section_repeat1, 2),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [202] = {.count = 1, .reusable = true}, SHIFT(107),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym__variable, 1),
  [206] = {.count = 1, .reusable = true}, SHIFT(108),
  [208] = {.count = 1, .reusable = true}, SHIFT(109),
  [210] = {.count = 1, .reusable = false}, SHIFT(111),
  [212] = {.count = 1, .reusable = true}, SHIFT(110),
  [214] = {.count = 1, .reusable = true}, SHIFT(111),
  [216] = {.count = 1, .reusable = true}, SHIFT(112),
  [218] = {.count = 1, .reusable = true}, SHIFT(113),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_call_sub, 2),
  [222] = {.count = 1, .reusable = true}, SHIFT(114),
  [224] = {.count = 1, .reusable = true}, SHIFT(115),
  [226] = {.count = 1, .reusable = true}, SHIFT(116),
  [228] = {.count = 1, .reusable = true}, SHIFT(117),
  [230] = {.count = 1, .reusable = true}, SHIFT(118),
  [232] = {.count = 1, .reusable = true}, SHIFT(119),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_abs, 2),
  [236] = {.count = 1, .reusable = true}, SHIFT(120),
  [238] = {.count = 1, .reusable = true}, SHIFT(121),
  [240] = {.count = 1, .reusable = true}, SHIFT(122),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_display, 2),
  [244] = {.count = 1, .reusable = true}, SHIFT(123),
  [246] = {.count = 1, .reusable = true}, SHIFT(124),
  [248] = {.count = 1, .reusable = false}, SHIFT(126),
  [250] = {.count = 1, .reusable = true}, SHIFT(125),
  [252] = {.count = 1, .reusable = true}, SHIFT(126),
  [254] = {.count = 1, .reusable = false}, SHIFT(127),
  [256] = {.count = 1, .reusable = true}, SHIFT(129),
  [258] = {.count = 1, .reusable = true}, SHIFT(131),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_execute, 2),
  [262] = {.count = 1, .reusable = true}, SHIFT(130),
  [264] = {.count = 1, .reusable = true}, SHIFT(132),
  [266] = {.count = 1, .reusable = true}, SHIFT(133),
  [268] = {.count = 1, .reusable = true}, SHIFT(134),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_goto, 2),
  [272] = {.count = 1, .reusable = true}, SHIFT(135),
  [274] = {.count = 1, .reusable = true}, SHIFT(136),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_floor, 2),
  [278] = {.count = 1, .reusable = true}, SHIFT(137),
  [280] = {.count = 1, .reusable = true}, SHIFT(138),
  [282] = {.count = 1, .reusable = true}, SHIFT(139),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_store_random, 2),
  [286] = {.count = 1, .reusable = true}, SHIFT(140),
  [288] = {.count = 1, .reusable = true}, SHIFT(141),
  [290] = {.count = 1, .reusable = true}, SHIFT(142),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_accept, 2),
  [294] = {.count = 1, .reusable = true}, SHIFT(143),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_call_ext, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_ceil, 2),
  [302] = {.count = 1, .reusable = true}, SHIFT(144),
  [304] = {.count = 1, .reusable = true}, SHIFT(145),
  [306] = {.count = 1, .reusable = true}, SHIFT(146),
  [308] = {.count = 1, .reusable = true}, SHIFT(147),
  [310] = {.count = 1, .reusable = true}, SHIFT(148),
  [312] = {.count = 1, .reusable = true}, SHIFT(149),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_if, 2),
  [316] = {.count = 1, .reusable = true}, SHIFT(151),
  [318] = {.count = 1, .reusable = true}, SHIFT(152),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(10),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(11),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(12),
  [329] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(13),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(14),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(15),
  [338] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(16),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(17),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(18),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(19),
  [350] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(20),
  [353] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(21),
  [356] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(22),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(23),
  [362] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(24),
  [365] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(13),
  [368] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(25),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(26),
  [374] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(27),
  [377] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(28),
  [380] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(29),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(30),
  [386] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(31),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(32),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(102),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(33),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(34),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(35),
  [404] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(36),
  [407] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(37),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(38),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(39),
  [418] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(40),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [423] = {.count = 1, .reusable = true}, SHIFT(155),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [427] = {.count = 1, .reusable = true}, SHIFT(156),
  [429] = {.count = 1, .reusable = true}, SHIFT(157),
  [431] = {.count = 1, .reusable = false}, SHIFT(158),
  [433] = {.count = 1, .reusable = false}, SHIFT(159),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_text, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_text, 2),
  [439] = {.count = 1, .reusable = false}, SHIFT(161),
  [441] = {.count = 1, .reusable = true}, SHIFT(160),
  [443] = {.count = 1, .reusable = true}, SHIFT(161),
  [445] = {.count = 1, .reusable = true}, SHIFT(162),
  [447] = {.count = 1, .reusable = false}, SHIFT(162),
  [449] = {.count = 1, .reusable = true}, SHIFT(164),
  [451] = {.count = 1, .reusable = false}, SHIFT(165),
  [453] = {.count = 1, .reusable = false}, SHIFT(166),
  [455] = {.count = 1, .reusable = false}, SHIFT(167),
  [457] = {.count = 1, .reusable = false}, REDUCE(aux_sym_in_join_repeat1, 2),
  [459] = {.count = 1, .reusable = true}, REDUCE(aux_sym_in_join_repeat1, 2),
  [461] = {.count = 1, .reusable = false}, SHIFT(172),
  [463] = {.count = 1, .reusable = true}, SHIFT(173),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_display, 3),
  [467] = {.count = 2, .reusable = false}, REDUCE(aux_sym_in_join_repeat1, 2), SHIFT_REPEAT(166),
  [470] = {.count = 2, .reusable = false}, REDUCE(aux_sym_in_join_repeat1, 2), SHIFT_REPEAT(167),
  [473] = {.count = 2, .reusable = true}, REDUCE(aux_sym_in_join_repeat1, 2), SHIFT_REPEAT(69),
  [476] = {.count = 1, .reusable = true}, SHIFT(178),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_wait, 3),
  [480] = {.count = 1, .reusable = false}, SHIFT(181),
  [482] = {.count = 1, .reusable = false}, SHIFT(182),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_accept_until_eof, 3),
  [486] = {.count = 1, .reusable = false}, SHIFT(185),
  [488] = {.count = 1, .reusable = false}, SHIFT(186),
  [490] = {.count = 1, .reusable = true}, SHIFT(188),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_else_if, 2),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_else_if, 2),
  [496] = {.count = 1, .reusable = true}, SHIFT(191),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [500] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [502] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(98),
  [505] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_repeat1, 2),
  [507] = {.count = 1, .reusable = true}, SHIFT(192),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [511] = {.count = 1, .reusable = true}, SHIFT(193),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_var_definition, 4),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_var_definition, 4),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_vector_element, 3),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym_vector_element, 3),
  [521] = {.count = 1, .reusable = true}, SHIFT(194),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_text, 3),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_text, 3),
  [527] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(161),
  [530] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2),
  [532] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(161),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_rel_op, 1),
  [537] = {.count = 1, .reusable = true}, SHIFT(195),
  [539] = {.count = 1, .reusable = true}, SHIFT(197),
  [541] = {.count = 1, .reusable = true}, SHIFT(198),
  [543] = {.count = 1, .reusable = true}, SHIFT(199),
  [545] = {.count = 1, .reusable = false}, SHIFT(200),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_store_length, 4),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_append_file, 4),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_load_file, 4),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_execute_store_ouput, 4),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_execute_store_exit_code, 4),
  [557] = {.count = 1, .reusable = true}, SHIFT(201),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym_body, 1),
  [563] = {.count = 1, .reusable = true}, SHIFT(202),
  [565] = {.count = 1, .reusable = true}, SHIFT(203),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_store_char, 4),
  [569] = {.count = 1, .reusable = true}, SHIFT(204),
  [571] = {.count = 1, .reusable = true}, SHIFT(205),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_write_file, 4),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_store_char_code, 4),
  [577] = {.count = 1, .reusable = true}, SHIFT(206),
  [579] = {.count = 1, .reusable = true}, SHIFT(207),
  [581] = {.count = 1, .reusable = true}, SHIFT(208),
  [583] = {.count = 1, .reusable = true}, SHIFT(210),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_store, 4),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_else, 3),
  [589] = {.count = 1, .reusable = true}, SHIFT(211),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [595] = {.count = 1, .reusable = false}, SHIFT(214),
  [597] = {.count = 1, .reusable = false}, SHIFT(213),
  [599] = {.count = 1, .reusable = true}, SHIFT(215),
  [601] = {.count = 1, .reusable = true}, SHIFT(216),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_in_join, 5),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_sub_proc, 5),
  [607] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(202),
  [610] = {.count = 1, .reusable = false}, SHIFT(223),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym__if_then_block, 5),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym__if_then_block, 5),
  [616] = {.count = 1, .reusable = true}, SHIFT(224),
  [618] = {.count = 1, .reusable = false}, REDUCE(sym__block, 1),
  [620] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(211),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_add, 6),
  [625] = {.count = 1, .reusable = true}, SHIFT(225),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 5),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_while, 6),
  [631] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(216),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_join, 6),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_get_char, 6),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_multiply, 6),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_divide, 6),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_subtract, 6),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_modulo, 6),
  [646] = {.count = 1, .reusable = true}, SHIFT(226),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(224),
  [651] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_repeat1, 2),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_LDPL(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
