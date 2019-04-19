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
#define STATE_COUNT 229
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
        ADVANCE(4);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(35);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(39);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == '.')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(42);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(43);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(48);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(50);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(53);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(54);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(57);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(63);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(66);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(68);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(72);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(75);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(77);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(35);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(39);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(82);
      END_STATE();
    case 34:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(83);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(84);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(88);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(90);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(92);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(94);
      END_STATE();
    case 44:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(96);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(97);
      END_STATE();
    case 47:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(98);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 49:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(102);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(103);
      END_STATE();
    case 52:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(104);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(105);
      END_STATE();
    case 54:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(106);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(108);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(109);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(110);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(114);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(116);
      END_STATE();
    case 63:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(118);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(119);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(120);
      END_STATE();
    case 67:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(121);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(124);
      END_STATE();
    case 71:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 72:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(129);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(131);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(132);
      END_STATE();
    case 78:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(135);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(136);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_while_token2);
      END_STATE();
    case 83:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 84:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(138);
      END_STATE();
    case 85:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(139);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(140);
      END_STATE();
    case 87:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(141);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(142);
      END_STATE();
    case 89:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(143);
      END_STATE();
    case 90:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(144);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(145);
      END_STATE();
    case 92:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(146);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(148);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(149);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(150);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(151);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(152);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(153);
      END_STATE();
    case 100:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(154);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(155);
      END_STATE();
    case 102:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(156);
      END_STATE();
    case 103:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(157);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(158);
      END_STATE();
    case 105:
      if (lookahead == '-')
        ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(160);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(161);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(162);
      END_STATE();
    case 108:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(164);
      END_STATE();
    case 110:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(165);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(166);
      END_STATE();
    case 112:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(167);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(168);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__if_then_block_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_in_join_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(169);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(170);
      END_STATE();
    case 118:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(171);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(172);
      END_STATE();
    case 120:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(173);
      END_STATE();
    case 121:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(174);
      END_STATE();
    case 122:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(176);
      END_STATE();
    case 124:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(177);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(178);
      END_STATE();
    case 126:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(179);
      END_STATE();
    case 127:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(180);
      END_STATE();
    case 128:
      if (lookahead == '-')
        ADVANCE(181);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 130:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(184);
      END_STATE();
    case 131:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(185);
      END_STATE();
    case 132:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(187);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_multiply_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(188);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_store_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_var_definition_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(190);
      END_STATE();
    case 142:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(191);
      END_STATE();
    case 143:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(143);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(192);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(193);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(194);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_abs_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(146);
      END_STATE();
    case 147:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(195);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_add_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(148);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(196);
      END_STATE();
    case 150:
      if (lookahead == 'K' ||
          lookahead == 'k')
        ADVANCE(197);
      END_STATE();
    case 151:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(198);
      END_STATE();
    case 152:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(199);
      END_STATE();
    case 153:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(200);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_in_join_token3);
      END_STATE();
    case 155:
      if (lookahead == ':')
        ADVANCE(201);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(202);
      END_STATE();
    case 157:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(203);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_else_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(204);
      END_STATE();
    case 159:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(205);
      END_STATE();
    case 160:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(160);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(206);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(207);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(208);
      END_STATE();
    case 162:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(209);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_exit);
      END_STATE();
    case 164:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(210);
      END_STATE();
    case 165:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(211);
      END_STATE();
    case 166:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(166);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(212);
      END_STATE();
    case 167:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(213);
      END_STATE();
    case 168:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(214);
      END_STATE();
    case 169:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(215);
      END_STATE();
    case 170:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(216);
      END_STATE();
    case 171:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(217);
      END_STATE();
    case 172:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(218);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(219);
      END_STATE();
    case 174:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(220);
      END_STATE();
    case 175:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(221);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(222);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 178:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(224);
      END_STATE();
    case 179:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(225);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(226);
      END_STATE();
    case 181:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(227);
      END_STATE();
    case 182:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(228);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_type_token3);
      END_STATE();
    case 184:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(229);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_add_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(187);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(232);
      END_STATE();
    case 188:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(233);
      END_STATE();
    case 189:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(234);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__if_then_block_token2);
      END_STATE();
    case 192:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(236);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(237);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(238);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(239);
      END_STATE();
    case 196:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(240);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_call_sub_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(241);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(242);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_ceil_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(199);
      END_STATE();
    case 200:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(243);
      END_STATE();
    case 201:
      if (lookahead == '\n')
        ADVANCE(244);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(245);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(246);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_else_if_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(247);
      END_STATE();
    case 206:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(248);
      END_STATE();
    case 207:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(249);
      END_STATE();
    case 208:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(250);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(251);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(252);
      END_STATE();
    case 211:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(253);
      END_STATE();
    case 212:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_goto_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(213);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(255);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_join_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(215);
      END_STATE();
    case 216:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(256);
      END_STATE();
    case 217:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(217);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 218:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(218);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(258);
      END_STATE();
    case 219:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(259);
      END_STATE();
    case 220:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(260);
      END_STATE();
    case 221:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(261);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(262);
      END_STATE();
    case 223:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(263);
      END_STATE();
    case 224:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(264);
      END_STATE();
    case 225:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(265);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(266);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(267);
      END_STATE();
    case 228:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(268);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_wait_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(229);
      END_STATE();
    case 230:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(269);
      END_STATE();
    case 231:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(270);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(271);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_subtract_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_in_join_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(234);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(272);
      END_STATE();
    case 236:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(273);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(274);
      END_STATE();
    case 238:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(275);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(276);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(277);
      END_STATE();
    case 241:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(278);
      END_STATE();
    case 242:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(279);
      END_STATE();
    case 243:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(280);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_data_section_token1);
      END_STATE();
    case 245:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(281);
      END_STATE();
    case 246:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(282);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_if_token2);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_if_token1);
      END_STATE();
    case 249:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(283);
      END_STATE();
    case 250:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(284);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(285);
      END_STATE();
    case 252:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(286);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_floor_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(253);
      END_STATE();
    case 254:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(287);
      END_STATE();
    case 255:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(288);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(256);
      END_STATE();
    case 257:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(289);
      END_STATE();
    case 258:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(290);
      END_STATE();
    case 259:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(291);
      END_STATE();
    case 260:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(292);
      END_STATE();
    case 261:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(293);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 263:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(294);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_while_token3);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_return);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_store_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(266);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(296);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(297);
      END_STATE();
    case 267:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(298);
      END_STATE();
    case 268:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(299);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_while_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_write_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(270);
      END_STATE();
    case 271:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(300);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(301);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(302);
      END_STATE();
    case 274:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(274);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(303);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_type_token4);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_accept_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_append_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(277);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(304);
      END_STATE();
    case 279:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(305);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(306);
      END_STATE();
    case 281:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(307);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_divide_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(282);
      END_STATE();
    case 283:
      if (lookahead == '-')
        ADVANCE(308);
      END_STATE();
    case 284:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(309);
      END_STATE();
    case 285:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(310);
      END_STATE();
    case 286:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(311);
      END_STATE();
    case 287:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(312);
      END_STATE();
    case 288:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(313);
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(314);
      END_STATE();
    case 290:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(315);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_modulo_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(316);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(317);
      END_STATE();
    case 294:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(318);
      END_STATE();
    case 295:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(319);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(320);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(321);
      END_STATE();
    case 298:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(322);
      END_STATE();
    case 299:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(323);
      END_STATE();
    case 300:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(324);
      END_STATE();
    case 301:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(325);
      END_STATE();
    case 302:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(326);
      END_STATE();
    case 303:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(327);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(328);
      END_STATE();
    case 305:
      if (lookahead == '-')
        ADVANCE(329);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_continue);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_display_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(307);
      END_STATE();
    case 308:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(330);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_rel_op_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_execute_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(310);
      END_STATE();
    case 311:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(331);
      END_STATE();
    case 312:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(332);
      END_STATE();
    case 313:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(313);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(333);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(334);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(335);
      END_STATE();
    case 316:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(336);
      END_STATE();
    case 317:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(337);
      END_STATE();
    case 318:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(338);
      END_STATE();
    case 319:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(339);
      END_STATE();
    case 320:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(340);
      END_STATE();
    case 321:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(341);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(342);
      END_STATE();
    case 323:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(343);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(344);
      END_STATE();
    case 325:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(345);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_write_file_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(326);
      END_STATE();
    case 327:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(346);
      END_STATE();
    case 328:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(347);
      END_STATE();
    case 329:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(348);
      END_STATE();
    case 330:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(349);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(331);
      END_STATE();
    case 332:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(350);
      END_STATE();
    case 333:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(351);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_rel_op_token4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(352);
      END_STATE();
    case 335:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(353);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_multiply_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(336);
      END_STATE();
    case 337:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(354);
      END_STATE();
    case 338:
      if (lookahead == ':')
        ADVANCE(355);
      END_STATE();
    case 339:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(356);
      END_STATE();
    case 340:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(357);
      END_STATE();
    case 341:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(358);
      END_STATE();
    case 342:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(359);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_subtract_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(343);
      END_STATE();
    case 344:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(360);
      END_STATE();
    case 345:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(361);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_accept_until_eof_token1);
      END_STATE();
    case 347:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      END_STATE();
    case 348:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(363);
      END_STATE();
    case 349:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(364);
      END_STATE();
    case 350:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(365);
      END_STATE();
    case 351:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(366);
      END_STATE();
    case 352:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(352);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(367);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_load_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(353);
      END_STATE();
    case 354:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(368);
      END_STATE();
    case 355:
      if (lookahead == '\n')
        ADVANCE(369);
      END_STATE();
    case 356:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(370);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(371);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(372);
      END_STATE();
    case 359:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(373);
      END_STATE();
    case 360:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(360);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(374);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(375);
      END_STATE();
    case 361:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(376);
      END_STATE();
    case 362:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(377);
      END_STATE();
    case 363:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(378);
      END_STATE();
    case 364:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(379);
      END_STATE();
    case 365:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(380);
      END_STATE();
    case 366:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(381);
      END_STATE();
    case 367:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(382);
      END_STATE();
    case 368:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(383);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_procedure_section_token1);
      END_STATE();
    case 370:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(384);
      END_STATE();
    case 371:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(385);
      END_STATE();
    case 372:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(386);
      END_STATE();
    case 373:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(387);
      END_STATE();
    case 374:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(388);
      END_STATE();
    case 375:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(389);
      END_STATE();
    case 376:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(390);
      END_STATE();
    case 377:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(391);
      END_STATE();
    case 378:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(392);
      END_STATE();
    case 379:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(393);
      END_STATE();
    case 380:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(394);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_rel_op_token3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(395);
      END_STATE();
    case 382:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(396);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_rel_op_token2);
      END_STATE();
    case 384:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(397);
      END_STATE();
    case 385:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(398);
      END_STATE();
    case 386:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(399);
      END_STATE();
    case 387:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(400);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(401);
      END_STATE();
    case 389:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(402);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_wait_token2);
      END_STATE();
    case 391:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(403);
      END_STATE();
    case 392:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(404);
      END_STATE();
    case 393:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(405);
      END_STATE();
    case 394:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(406);
      END_STATE();
    case 395:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(395);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(407);
      END_STATE();
    case 396:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(396);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(408);
      END_STATE();
    case 397:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(409);
      END_STATE();
    case 398:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(398);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(410);
      END_STATE();
    case 399:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(399);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(411);
      END_STATE();
    case 400:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(412);
      END_STATE();
    case 401:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(413);
      END_STATE();
    case 402:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(414);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_call_ext_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(403);
      END_STATE();
    case 404:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(415);
      END_STATE();
    case 405:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(416);
      END_STATE();
    case 406:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(406);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(417);
      END_STATE();
    case 407:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(418);
      END_STATE();
    case 408:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(419);
      END_STATE();
    case 409:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(420);
      END_STATE();
    case 410:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(421);
      END_STATE();
    case 411:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(422);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_sub_proc_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(412);
      END_STATE();
    case 413:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(423);
      END_STATE();
    case 414:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(424);
      END_STATE();
    case 415:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(425);
      END_STATE();
    case 416:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(426);
      END_STATE();
    case 417:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(427);
      END_STATE();
    case 418:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(428);
      END_STATE();
    case 419:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(429);
      END_STATE();
    case 420:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(430);
      END_STATE();
    case 421:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(431);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(432);
      END_STATE();
    case 423:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(423);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(433);
      END_STATE();
    case 424:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(434);
      END_STATE();
    case 425:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(435);
      END_STATE();
    case 426:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(436);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(437);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(428);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(438);
      END_STATE();
    case 429:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(439);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_store_char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(430);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(440);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_store_length_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_store_random_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(432);
      END_STATE();
    case 433:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(441);
      END_STATE();
    case 434:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(442);
      END_STATE();
    case 435:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(443);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_sub_proc_token2);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_get_char_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(437);
      END_STATE();
    case 438:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(444);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(445);
      END_STATE();
    case 440:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      END_STATE();
    case 441:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(447);
      END_STATE();
    case 442:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(442);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(448);
      END_STATE();
    case 443:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(449);
      END_STATE();
    case 444:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(450);
      END_STATE();
    case 445:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(451);
      END_STATE();
    case 446:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(452);
      END_STATE();
    case 447:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(453);
      END_STATE();
    case 448:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(454);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_call_sub_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(449);
      END_STATE();
    case 450:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(455);
      END_STATE();
    case 451:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(451);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(456);
      END_STATE();
    case 452:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      END_STATE();
    case 453:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(458);
      END_STATE();
    case 454:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(459);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(460);
      END_STATE();
    case 456:
      if (lookahead == 'O' ||
          lookahead == 'o')
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
        ADVANCE(458);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(463);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_execute_store_ouput_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(459);
      END_STATE();
    case 460:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(464);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_rel_op_token6);
      END_STATE();
    case 462:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(462);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(465);
      END_STATE();
    case 463:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(466);
      END_STATE();
    case 464:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(464);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(467);
      END_STATE();
    case 465:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(468);
      END_STATE();
    case 466:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(469);
      END_STATE();
    case 467:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(470);
      END_STATE();
    case 468:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(471);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_execute_store_exit_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_rel_op_token5);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_store_char_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(471);
      END_STATE();
    case 472:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(474);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(22);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 474:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(50);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ':')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"')
        ADVANCE(478);
      END_STATE();
    case 487:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(488);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(490);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(491);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(17);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(18);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(492);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(20);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(493);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(26);
      END_STATE();
    case 488:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(48);
      END_STATE();
    case 489:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(51);
      END_STATE();
    case 490:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(494);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(495);
      END_STATE();
    case 491:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(57);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(58);
      END_STATE();
    case 492:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(63);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(65);
      END_STATE();
    case 493:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(496);
      END_STATE();
    case 494:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(497);
      END_STATE();
    case 495:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(108);
      END_STATE();
    case 496:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 497:
      if (lookahead == '-')
        ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(498);
      END_STATE();
    case 498:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(498);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(206);
      END_STATE();
    case 499:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(500);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(501);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(502);
      END_STATE();
    case 501:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(501);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(502);
      END_STATE();
    case 502:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(85);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(476);
      if (lookahead == '.')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(505);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(508);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(510);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(510);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'F' ||
          lookahead == 'L' ||
          lookahead == 'f' ||
          lookahead == 'l')
        ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':')
        ADVANCE(478);
      END_STATE();
    case 517:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(518);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(519);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(25);
      END_STATE();
    case 518:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(520);
      END_STATE();
    case 519:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(69);
      END_STATE();
    case 520:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(109);
      END_STATE();
    case 521:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(488);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(522);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(491);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(17);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(18);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(492);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(20);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(26);
      END_STATE();
    case 522:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(52);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(53);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(495);
      END_STATE();
    case 523:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(525);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(526);
      END_STATE();
    case 525:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(525);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(526);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(527);
      END_STATE();
    case 527:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(528);
      END_STATE();
    case 528:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_add_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(529);
      END_STATE();
    case 530:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(531);
      if (lookahead == '\\')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(531);
      if (lookahead != 0)
        ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 532:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(534);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(33);
      END_STATE();
    case 534:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(534);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(33);
      END_STATE();
    case 535:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(537);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(36);
      END_STATE();
    case 537:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(537);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(36);
      END_STATE();
    case 538:
      if (lookahead == '#')
        ADVANCE(4);
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
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(541);
      END_STATE();
    case 540:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(540);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(84);
      END_STATE();
    case 542:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(544);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      END_STATE();
    case 544:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(544);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      END_STATE();
    case 545:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(546);
      END_STATE();
    case 546:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(547);
      END_STATE();
    case 547:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(548);
      END_STATE();
    case 548:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(548);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(232);
      END_STATE();
    case 549:
      if (lookahead == '#')
        ADVANCE(4);
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
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(552);
      END_STATE();
    case 551:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(551);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(89);
      END_STATE();
    case 553:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(555);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(37);
      END_STATE();
    case 555:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(555);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(37);
      END_STATE();
    case 556:
      if (lookahead == '#')
        ADVANCE(4);
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
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(34);
      END_STATE();
    case 558:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(558);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(34);
      END_STATE();
    case 559:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(561);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(32);
      END_STATE();
    case 561:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(561);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(32);
      END_STATE();
    case 562:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(564);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(39);
      END_STATE();
    case 564:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(564);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(39);
      END_STATE();
    case 565:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(567);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(568);
      END_STATE();
    case 567:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(567);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(568);
      END_STATE();
    case 568:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(88);
      END_STATE();
    case 569:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(570);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(571);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(40);
      END_STATE();
    case 571:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(571);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(40);
      END_STATE();
    case 572:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(574);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(35);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(39);
      END_STATE();
    case 574:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(574);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(32);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(35);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(36);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(37);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(39);
      END_STATE();
    case 575:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(576);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(577);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(578);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(579);
      END_STATE();
    case 576:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(54);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(59);
      END_STATE();
    case 578:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(64);
      END_STATE();
    case 579:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(68);
      END_STATE();
    case 580:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(488);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(581);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(491);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(17);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(18);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(492);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(20);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(493);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(26);
      END_STATE();
    case 581:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(582);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(495);
      END_STATE();
    case 582:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(583);
      END_STATE();
    case 583:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(584);
      END_STATE();
    case 584:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(584);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(207);
      END_STATE();
    case 585:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(11);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(488);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(489);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(586);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(491);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(17);
      if (lookahead == 'J' ||
          lookahead == 'j')
        ADVANCE(18);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(492);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(20);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(24);
      if (lookahead == 'W' ||
          lookahead == 'w')
        ADVANCE(26);
      END_STATE();
    case 586:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(495);
      END_STATE();
    case 587:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(588);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(589);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(568);
      END_STATE();
    case 589:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(589);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(33);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(568);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 472},
  [2] = {.lex_state = 475},
  [3] = {.lex_state = 487},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 472},
  [7] = {.lex_state = 472},
  [8] = {.lex_state = 499},
  [9] = {.lex_state = 475},
  [10] = {.lex_state = 472},
  [11] = {.lex_state = 503},
  [12] = {.lex_state = 503},
  [13] = {.lex_state = 516},
  [14] = {.lex_state = 503},
  [15] = {.lex_state = 516},
  [16] = {.lex_state = 516},
  [17] = {.lex_state = 516},
  [18] = {.lex_state = 503},
  [19] = {.lex_state = 516},
  [20] = {.lex_state = 503},
  [21] = {.lex_state = 516},
  [22] = {.lex_state = 516},
  [23] = {.lex_state = 503},
  [24] = {.lex_state = 516},
  [25] = {.lex_state = 503},
  [26] = {.lex_state = 516},
  [27] = {.lex_state = 503},
  [28] = {.lex_state = 503},
  [29] = {.lex_state = 516},
  [30] = {.lex_state = 503},
  [31] = {.lex_state = 503},
  [32] = {.lex_state = 516},
  [33] = {.lex_state = 516},
  [34] = {.lex_state = 516},
  [35] = {.lex_state = 516},
  [36] = {.lex_state = 516},
  [37] = {.lex_state = 503},
  [38] = {.lex_state = 503},
  [39] = {.lex_state = 503},
  [40] = {.lex_state = 503},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 487},
  [43] = {.lex_state = 487},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 472},
  [46] = {.lex_state = 472},
  [47] = {.lex_state = 517},
  [48] = {.lex_state = 475},
  [49] = {.lex_state = 521},
  [50] = {.lex_state = 523},
  [51] = {.lex_state = 523},
  [52] = {.lex_state = 499},
  [53] = {.lex_state = 530},
  [54] = {.lex_state = 499},
  [55] = {.lex_state = 532},
  [56] = {.lex_state = 472},
  [57] = {.lex_state = 523},
  [58] = {.lex_state = 535},
  [59] = {.lex_state = 535},
  [60] = {.lex_state = 538},
  [61] = {.lex_state = 538},
  [62] = {.lex_state = 542},
  [63] = {.lex_state = 472},
  [64] = {.lex_state = 549},
  [65] = {.lex_state = 549},
  [66] = {.lex_state = 538},
  [67] = {.lex_state = 472},
  [68] = {.lex_state = 542},
  [69] = {.lex_state = 530},
  [70] = {.lex_state = 503},
  [71] = {.lex_state = 542},
  [72] = {.lex_state = 542},
  [73] = {.lex_state = 472},
  [74] = {.lex_state = 553},
  [75] = {.lex_state = 553},
  [76] = {.lex_state = 472},
  [77] = {.lex_state = 556},
  [78] = {.lex_state = 556},
  [79] = {.lex_state = 472},
  [80] = {.lex_state = 538},
  [81] = {.lex_state = 559},
  [82] = {.lex_state = 559},
  [83] = {.lex_state = 472},
  [84] = {.lex_state = 559},
  [85] = {.lex_state = 549},
  [86] = {.lex_state = 562},
  [87] = {.lex_state = 562},
  [88] = {.lex_state = 472},
  [89] = {.lex_state = 472},
  [90] = {.lex_state = 472},
  [91] = {.lex_state = 538},
  [92] = {.lex_state = 556},
  [93] = {.lex_state = 559},
  [94] = {.lex_state = 499},
  [95] = {.lex_state = 565},
  [96] = {.lex_state = 538},
  [97] = {.lex_state = 472},
  [98] = {.lex_state = 487},
  [99] = {.lex_state = 472},
  [100] = {.lex_state = 487},
  [101] = {.lex_state = 487},
  [102] = {.lex_state = 487},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 517},
  [105] = {.lex_state = 569},
  [106] = {.lex_state = 472},
  [107] = {.lex_state = 503},
  [108] = {.lex_state = 503},
  [109] = {.lex_state = 503},
  [110] = {.lex_state = 572},
  [111] = {.lex_state = 530},
  [112] = {.lex_state = 575},
  [113] = {.lex_state = 472},
  [114] = {.lex_state = 503},
  [115] = {.lex_state = 503},
  [116] = {.lex_state = 503},
  [117] = {.lex_state = 503},
  [118] = {.lex_state = 516},
  [119] = {.lex_state = 503},
  [120] = {.lex_state = 503},
  [121] = {.lex_state = 516},
  [122] = {.lex_state = 516},
  [123] = {.lex_state = 503},
  [124] = {.lex_state = 503},
  [125] = {.lex_state = 472},
  [126] = {.lex_state = 530},
  [127] = {.lex_state = 472},
  [128] = {.lex_state = 503},
  [129] = {.lex_state = 503},
  [130] = {.lex_state = 516},
  [131] = {.lex_state = 516},
  [132] = {.lex_state = 580},
  [133] = {.lex_state = 503},
  [134] = {.lex_state = 472},
  [135] = {.lex_state = 503},
  [136] = {.lex_state = 516},
  [137] = {.lex_state = 516},
  [138] = {.lex_state = 503},
  [139] = {.lex_state = 503},
  [140] = {.lex_state = 503},
  [141] = {.lex_state = 516},
  [142] = {.lex_state = 503},
  [143] = {.lex_state = 472},
  [144] = {.lex_state = 516},
  [145] = {.lex_state = 503},
  [146] = {.lex_state = 503},
  [147] = {.lex_state = 575},
  [148] = {.lex_state = 472},
  [149] = {.lex_state = 516},
  [150] = {.lex_state = 487},
  [151] = {.lex_state = 487},
  [152] = {.lex_state = 472},
  [153] = {.lex_state = 487},
  [154] = {.lex_state = 487},
  [155] = {.lex_state = 569},
  [156] = {.lex_state = 472},
  [157] = {.lex_state = 475},
  [158] = {.lex_state = 572},
  [159] = {.lex_state = 538},
  [160] = {.lex_state = 572},
  [161] = {.lex_state = 530},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 585},
  [165] = {.lex_state = 538},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 499},
  [168] = {.lex_state = 503},
  [169] = {.lex_state = 472},
  [170] = {.lex_state = 472},
  [171] = {.lex_state = 472},
  [172] = {.lex_state = 472},
  [173] = {.lex_state = 472},
  [174] = {.lex_state = 472},
  [175] = {.lex_state = 472},
  [176] = {.lex_state = 472},
  [177] = {.lex_state = 580},
  [178] = {.lex_state = 521},
  [179] = {.lex_state = 580},
  [180] = {.lex_state = 538},
  [181] = {.lex_state = 472},
  [182] = {.lex_state = 538},
  [183] = {.lex_state = 538},
  [184] = {.lex_state = 472},
  [185] = {.lex_state = 472},
  [186] = {.lex_state = 538},
  [187] = {.lex_state = 538},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 487},
  [190] = {.lex_state = 472},
  [191] = {.lex_state = 487},
  [192] = {.lex_state = 487},
  [193] = {.lex_state = 472},
  [194] = {.lex_state = 472},
  [195] = {.lex_state = 516},
  [196] = {.lex_state = 503},
  [197] = {.lex_state = 472},
  [198] = {.lex_state = 585},
  [199] = {.lex_state = 585},
  [200] = {.lex_state = 516},
  [201] = {.lex_state = 503},
  [202] = {.lex_state = 472},
  [203] = {.lex_state = 472},
  [204] = {.lex_state = 580},
  [205] = {.lex_state = 516},
  [206] = {.lex_state = 516},
  [207] = {.lex_state = 516},
  [208] = {.lex_state = 516},
  [209] = {.lex_state = 516},
  [210] = {.lex_state = 503},
  [211] = {.lex_state = 487},
  [212] = {.lex_state = 487},
  [213] = {.lex_state = 487},
  [214] = {.lex_state = 472},
  [215] = {.lex_state = 532},
  [216] = {.lex_state = 587},
  [217] = {.lex_state = 472},
  [218] = {.lex_state = 585},
  [219] = {.lex_state = 472},
  [220] = {.lex_state = 472},
  [221] = {.lex_state = 472},
  [222] = {.lex_state = 472},
  [223] = {.lex_state = 472},
  [224] = {.lex_state = 472},
  [225] = {.lex_state = 565},
  [226] = {.lex_state = 487},
  [227] = {.lex_state = 503},
  [228] = {.lex_state = 503},
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
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [sym_comment] = ACTIONS(5),
    [sym_escape_sequence] = ACTIONS(210),
  },
  [54] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_var_definition_token1] = ACTIONS(214),
  },
  [55] = {
    [aux_sym_while_token2] = ACTIONS(216),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_LF] = ACTIONS(218),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_add_token2] = ACTIONS(220),
  },
  [58] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(222),
    [aux_sym_in_join_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [aux_sym_in_join_token2] = ACTIONS(224),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(226),
    [aux_sym_store_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(228),
  },
  [62] = {
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_LF] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_LF] = ACTIONS(232),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(234),
    [aux_sym_write_file_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_write_file_token2] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(238),
  },
  [67] = {
    [anon_sym_LF] = ACTIONS(240),
    [sym__whitespace] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym__whitespace] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_LF] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [aux_sym_text_repeat1] = STATE(126),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym_comment] = ACTIONS(5),
    [sym_escape_sequence] = ACTIONS(246),
  },
  [70] = {
    [sym__literal] = STATE(127),
    [sym__variable] = STATE(127),
    [sym__value] = STATE(127),
    [aux_sym_in_join_repeat1] = STATE(128),
    [sym_text] = STATE(127),
    [sym_vector_element] = STATE(127),
    [sym_number] = ACTIONS(250),
    [aux_sym_in_join_token3] = ACTIONS(250),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(252),
    [anon_sym_LF] = ACTIONS(204),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(254),
    [anon_sym_LF] = ACTIONS(256),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [anon_sym_LF] = ACTIONS(260),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(262),
    [aux_sym_wait_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_wait_token2] = ACTIONS(264),
  },
  [76] = {
    [anon_sym_LF] = ACTIONS(266),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [aux_sym_subtract_token2] = ACTIONS(204),
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [aux_sym_subtract_token2] = ACTIONS(270),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_LF] = ACTIONS(272),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(274),
  },
  [81] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(276),
    [aux_sym_multiply_token2] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_multiply_token2] = ACTIONS(278),
  },
  [83] = {
    [anon_sym_LF] = ACTIONS(280),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_multiply_token2] = ACTIONS(282),
  },
  [85] = {
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_write_file_token2] = ACTIONS(284),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(286),
    [anon_sym_LF] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(204),
  },
  [87] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(290),
  },
  [88] = {
    [anon_sym_LF] = ACTIONS(292),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [anon_sym_LF] = ACTIONS(294),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [anon_sym_LF] = ACTIONS(296),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(298),
  },
  [92] = {
    [aux_sym_subtract_token2] = ACTIONS(300),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_multiply_token2] = ACTIONS(302),
  },
  [94] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_var_definition_token1] = ACTIONS(304),
  },
  [95] = {
    [aux_sym__if_then_block_token2] = ACTIONS(306),
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [96] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(308),
  },
  [97] = {
    [anon_sym_LF] = ACTIONS(310),
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
    [anon_sym_LF] = ACTIONS(312),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym_else] = STATE(154),
    [sym_else_if] = STATE(153),
    [aux_sym_if_repeat1] = STATE(153),
    [aux_sym_if_token1] = ACTIONS(314),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(171),
    [aux_sym_if_token2] = ACTIONS(314),
    [sym_comment] = ACTIONS(3),
    [aux_sym_else_token1] = ACTIONS(173),
  },
  [101] = {
    [aux_sym_if_token1] = ACTIONS(314),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_if_token2] = ACTIONS(314),
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
    [sym_exit] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(319),
    [sym_break] = ACTIONS(316),
    [aux_sym_while_token1] = ACTIONS(322),
    [aux_sym_call_sub_token1] = ACTIONS(325),
    [aux_sym_join_token1] = ACTIONS(328),
    [aux_sym_in_join_token1] = ACTIONS(331),
    [aux_sym_store_length_token1] = ACTIONS(334),
    [aux_sym_abs_token1] = ACTIONS(337),
    [aux_sym_append_file_token1] = ACTIONS(340),
    [aux_sym_load_file_token1] = ACTIONS(343),
    [aux_sym_display_token1] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(349),
    [aux_sym_sub_proc_token1] = ACTIONS(352),
    [aux_sym_wait_token1] = ACTIONS(355),
    [aux_sym_goto_token1] = ACTIONS(358),
    [aux_sym_call_sub_token2] = ACTIONS(361),
    [aux_sym_get_char_token1] = ACTIONS(364),
    [aux_sym_floor_token1] = ACTIONS(367),
    [aux_sym_store_char_token1] = ACTIONS(370),
    [aux_sym_multiply_token1] = ACTIONS(373),
    [aux_sym_store_random_token1] = ACTIONS(376),
    [aux_sym_divide_token1] = ACTIONS(379),
    [aux_sym_write_file_token1] = ACTIONS(382),
    [aux_sym_accept_token1] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(388),
    [sym_return] = ACTIONS(316),
    [aux_sym_label_token1] = ACTIONS(391),
    [aux_sym_call_ext_token1] = ACTIONS(394),
    [sym_continue] = ACTIONS(316),
    [aux_sym_ceil_token1] = ACTIONS(397),
    [aux_sym_store_char_code_token1] = ACTIONS(400),
    [ts_builtin_sym_end] = ACTIONS(403),
    [aux_sym_subtract_token1] = ACTIONS(405),
    [aux_sym_modulo_token1] = ACTIONS(408),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(411),
    [aux_sym_store_token1] = ACTIONS(414),
  },
  [103] = {
    [sym__whitespace] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_type_token3] = ACTIONS(419),
    [aux_sym_type_token2] = ACTIONS(419),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [aux_sym_type_token4] = ACTIONS(423),
  },
  [106] = {
    [anon_sym_LF] = ACTIONS(425),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [107] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(427),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [sym__number_value] = STATE(159),
    [sym__variable] = STATE(159),
    [sym_vector_element] = STATE(159),
    [sym_number] = ACTIONS(429),
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
    [sym_number] = ACTIONS(427),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [anon_sym_LF] = ACTIONS(431),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(431),
    [aux_sym_in_join_token2] = ACTIONS(431),
    [aux_sym_subtract_token2] = ACTIONS(431),
    [aux_sym_var_definition_token1] = ACTIONS(431),
    [aux_sym_wait_token2] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(431),
    [aux_sym__if_then_block_token2] = ACTIONS(431),
    [aux_sym_store_token2] = ACTIONS(431),
    [aux_sym_multiply_token2] = ACTIONS(431),
    [aux_sym_write_file_token2] = ACTIONS(431),
    [aux_sym_add_token2] = ACTIONS(433),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(431),
    [aux_sym_while_token2] = ACTIONS(431),
  },
  [111] = {
    [aux_sym_text_repeat1] = STATE(161),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(437),
    [sym_comment] = ACTIONS(5),
    [sym_escape_sequence] = ACTIONS(435),
  },
  [112] = {
    [sym_rel_op] = STATE(163),
    [aux_sym_rel_op_token5] = ACTIONS(439),
    [aux_sym_rel_op_token1] = ACTIONS(439),
    [aux_sym_rel_op_token6] = ACTIONS(439),
    [aux_sym_rel_op_token3] = ACTIONS(441),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_rel_op_token2] = ACTIONS(439),
    [aux_sym_rel_op_token4] = ACTIONS(441),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [anon_sym_LF] = ACTIONS(443),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [114] = {
    [sym__literal] = STATE(165),
    [sym__variable] = STATE(165),
    [sym__value] = STATE(165),
    [sym_text] = STATE(165),
    [sym_vector_element] = STATE(165),
    [sym_number] = ACTIONS(445),
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
    [sym_number] = ACTIONS(427),
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
    [sym_number] = ACTIONS(447),
    [aux_sym_in_join_token3] = ACTIONS(447),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [117] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(427),
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
    [sym_number] = ACTIONS(427),
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
    [sym_number] = ACTIONS(427),
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
    [sym_number] = ACTIONS(451),
    [aux_sym_in_join_token3] = ACTIONS(451),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(451),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [sym_comment] = ACTIONS(3),
  },
  [124] = {
    [sym__literal] = STATE(172),
    [sym__variable] = STATE(172),
    [sym__value] = STATE(172),
    [sym_text] = STATE(172),
    [sym_vector_element] = STATE(172),
    [sym_number] = ACTIONS(455),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [125] = {
    [anon_sym_LF] = ACTIONS(431),
    [sym__whitespace] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
  },
  [126] = {
    [aux_sym_text_repeat1] = STATE(161),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(435),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_escape_sequence] = ACTIONS(435),
  },
  [127] = {
    [anon_sym_LF] = ACTIONS(459),
    [sym__whitespace] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [128] = {
    [sym__literal] = STATE(166),
    [sym__variable] = STATE(166),
    [sym__value] = STATE(166),
    [aux_sym_in_join_repeat1] = STATE(128),
    [sym_text] = STATE(166),
    [sym_vector_element] = STATE(166),
    [sym_number] = ACTIONS(461),
    [aux_sym_in_join_token3] = ACTIONS(461),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(464),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym_comment] = ACTIONS(3),
  },
  [129] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(427),
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
    [sym_body] = STATE(177),
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
    [sym__block] = STATE(178),
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
    [sym__statement] = STATE(179),
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
    [aux_sym__block_repeat1] = STATE(179),
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
    [anon_sym_LF] = ACTIONS(470),
    [aux_sym_sub_proc_token2] = ACTIONS(472),
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
    [sym_number] = ACTIONS(427),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [134] = {
    [anon_sym_LF] = ACTIONS(474),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(427),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [136] = {
    [sym__text_value] = STATE(180),
    [sym__variable] = STATE(180),
    [sym_text] = STATE(180),
    [sym_vector_element] = STATE(180),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [137] = {
    [sym__variable] = STATE(181),
    [sym_vector_element] = STATE(181),
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
    [sym_number] = ACTIONS(427),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [139] = {
    [sym__number_value] = STATE(182),
    [sym__variable] = STATE(182),
    [sym_vector_element] = STATE(182),
    [sym_number] = ACTIONS(476),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [140] = {
    [sym__number_value] = STATE(183),
    [sym__variable] = STATE(183),
    [sym_vector_element] = STATE(183),
    [sym_number] = ACTIONS(478),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [141] = {
    [sym__text_value] = STATE(184),
    [sym__variable] = STATE(184),
    [sym_text] = STATE(184),
    [sym_vector_element] = STATE(184),
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
    [sym_number] = ACTIONS(427),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [143] = {
    [anon_sym_LF] = ACTIONS(480),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [144] = {
    [sym__variable] = STATE(185),
    [sym_vector_element] = STATE(185),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [145] = {
    [sym__number_value] = STATE(186),
    [sym__variable] = STATE(186),
    [sym_vector_element] = STATE(186),
    [sym_number] = ACTIONS(482),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [146] = {
    [sym__number_value] = STATE(187),
    [sym__variable] = STATE(187),
    [sym_vector_element] = STATE(187),
    [sym_number] = ACTIONS(484),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [sym_rel_op] = STATE(188),
    [aux_sym_rel_op_token5] = ACTIONS(439),
    [aux_sym_rel_op_token1] = ACTIONS(439),
    [aux_sym_rel_op_token6] = ACTIONS(439),
    [aux_sym_rel_op_token3] = ACTIONS(441),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_rel_op_token2] = ACTIONS(439),
    [aux_sym_rel_op_token4] = ACTIONS(441),
    [sym_comment] = ACTIONS(3),
  },
  [148] = {
    [anon_sym_LF] = ACTIONS(486),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [149] = {
    [sym__variable] = STATE(190),
    [sym_vector_element] = STATE(190),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [150] = {
    [aux_sym_if_token1] = ACTIONS(488),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(488),
    [aux_sym_if_token2] = ACTIONS(488),
    [sym_comment] = ACTIONS(3),
    [aux_sym_else_token1] = ACTIONS(490),
  },
  [151] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_body] = STATE(191),
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
    [sym__block] = STATE(178),
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
    [sym__statement] = STATE(192),
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
    [aux_sym__block_repeat1] = STATE(192),
    [aux_sym_if_token1] = ACTIONS(492),
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
    [aux_sym_if_token2] = ACTIONS(492),
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
    [anon_sym_LF] = ACTIONS(494),
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
    [anon_sym_LF] = ACTIONS(496),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [153] = {
    [sym_else_if] = STATE(153),
    [aux_sym_if_repeat1] = STATE(153),
    [aux_sym_if_token1] = ACTIONS(498),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(500),
    [aux_sym_if_token2] = ACTIONS(498),
    [sym_comment] = ACTIONS(3),
    [aux_sym_else_token1] = ACTIONS(503),
  },
  [154] = {
    [aux_sym_if_token1] = ACTIONS(505),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_if_token2] = ACTIONS(505),
    [sym_comment] = ACTIONS(3),
  },
  [155] = {
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(507),
    [sym_comment] = ACTIONS(3),
    [aux_sym_type_token4] = ACTIONS(509),
  },
  [156] = {
    [anon_sym_LF] = ACTIONS(507),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [157] = {
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(511),
    [sym_identifier] = ACTIONS(513),
    [aux_sym_procedure_section_token1] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
  },
  [158] = {
    [anon_sym_LF] = ACTIONS(515),
    [aux_sym_in_join_token2] = ACTIONS(515),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(515),
    [aux_sym_subtract_token2] = ACTIONS(515),
    [aux_sym_var_definition_token1] = ACTIONS(515),
    [aux_sym_wait_token2] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(515),
    [aux_sym__if_then_block_token2] = ACTIONS(515),
    [aux_sym_store_token2] = ACTIONS(515),
    [aux_sym_multiply_token2] = ACTIONS(515),
    [aux_sym_write_file_token2] = ACTIONS(515),
    [aux_sym_add_token2] = ACTIONS(517),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(515),
    [aux_sym_while_token2] = ACTIONS(515),
  },
  [159] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(519),
  },
  [160] = {
    [anon_sym_LF] = ACTIONS(521),
    [aux_sym_execute_store_ouput_token1] = ACTIONS(521),
    [aux_sym_in_join_token2] = ACTIONS(521),
    [aux_sym_subtract_token2] = ACTIONS(521),
    [aux_sym_var_definition_token1] = ACTIONS(521),
    [aux_sym_wait_token2] = ACTIONS(521),
    [sym_comment] = ACTIONS(3),
    [aux_sym_accept_until_eof_token1] = ACTIONS(521),
    [aux_sym__if_then_block_token2] = ACTIONS(521),
    [aux_sym_store_token2] = ACTIONS(521),
    [aux_sym_multiply_token2] = ACTIONS(521),
    [aux_sym_write_file_token2] = ACTIONS(521),
    [aux_sym_add_token2] = ACTIONS(523),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_execute_store_exit_code_token1] = ACTIONS(521),
    [aux_sym_while_token2] = ACTIONS(521),
  },
  [161] = {
    [aux_sym_text_repeat1] = STATE(161),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(525),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [sym_comment] = ACTIONS(5),
    [sym_escape_sequence] = ACTIONS(525),
  },
  [162] = {
    [sym__whitespace] = ACTIONS(530),
    [sym_comment] = ACTIONS(3),
  },
  [163] = {
    [sym__whitespace] = ACTIONS(532),
    [sym_comment] = ACTIONS(3),
  },
  [164] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_body] = STATE(198),
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
    [sym__block] = STATE(178),
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
    [sym__statement] = STATE(199),
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
    [aux_sym__block_repeat1] = STATE(199),
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
    [anon_sym_LF] = ACTIONS(534),
    [sym_return] = ACTIONS(19),
    [aux_sym_label_token1] = ACTIONS(69),
    [aux_sym_while_token3] = ACTIONS(536),
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
    [aux_sym_store_token2] = ACTIONS(538),
  },
  [166] = {
    [sym__whitespace] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [167] = {
    [sym__whitespace] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(540),
  },
  [168] = {
    [sym__literal] = STATE(202),
    [sym__variable] = STATE(202),
    [sym__value] = STATE(202),
    [aux_sym_in_join_repeat1] = STATE(128),
    [sym_text] = STATE(202),
    [sym_vector_element] = STATE(202),
    [sym_number] = ACTIONS(542),
    [aux_sym_in_join_token3] = ACTIONS(542),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [169] = {
    [anon_sym_LF] = ACTIONS(544),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [170] = {
    [anon_sym_LF] = ACTIONS(546),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [171] = {
    [anon_sym_LF] = ACTIONS(548),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [172] = {
    [anon_sym_LF] = ACTIONS(515),
    [sym__whitespace] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
  },
  [173] = {
    [anon_sym_LF] = ACTIONS(521),
    [sym__whitespace] = ACTIONS(521),
    [sym_comment] = ACTIONS(3),
  },
  [174] = {
    [anon_sym_LF] = ACTIONS(550),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [175] = {
    [anon_sym_LF] = ACTIONS(552),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [176] = {
    [anon_sym_LF] = ACTIONS(554),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [177] = {
    [aux_sym_sub_proc_token2] = ACTIONS(556),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [178] = {
    [aux_sym_if_token1] = ACTIONS(558),
    [aux_sym_else_token1] = ACTIONS(560),
    [aux_sym_if_token2] = ACTIONS(558),
    [aux_sym_sub_proc_token2] = ACTIONS(558),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(558),
    [sym_comment] = ACTIONS(3),
    [aux_sym_while_token3] = ACTIONS(558),
  },
  [179] = {
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
    [sym__statement] = STATE(204),
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
    [aux_sym__block_repeat1] = STATE(204),
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
    [anon_sym_LF] = ACTIONS(562),
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
  [180] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(564),
  },
  [181] = {
    [anon_sym_LF] = ACTIONS(566),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [182] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(568),
  },
  [183] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(570),
  },
  [184] = {
    [anon_sym_LF] = ACTIONS(572),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [185] = {
    [anon_sym_LF] = ACTIONS(574),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [186] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(576),
  },
  [187] = {
    [sym__whitespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [aux_sym_store_token2] = ACTIONS(578),
  },
  [188] = {
    [sym__whitespace] = ACTIONS(580),
    [sym_comment] = ACTIONS(3),
  },
  [189] = {
    [sym_store] = STATE(10),
    [sym_if] = STATE(10),
    [sym_body] = STATE(211),
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
    [sym__block] = STATE(178),
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
    [sym__statement] = STATE(212),
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
    [aux_sym__block_repeat1] = STATE(212),
    [aux_sym_if_token1] = ACTIONS(582),
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
    [aux_sym_if_token2] = ACTIONS(582),
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
    [anon_sym_LF] = ACTIONS(584),
    [aux_sym_else_if_token1] = ACTIONS(582),
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
    [aux_sym_else_token1] = ACTIONS(586),
  },
  [190] = {
    [anon_sym_LF] = ACTIONS(588),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [191] = {
    [aux_sym_if_token1] = ACTIONS(590),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_if_token2] = ACTIONS(590),
    [sym_comment] = ACTIONS(3),
  },
  [192] = {
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
    [sym__statement] = STATE(213),
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
    [aux_sym__block_repeat1] = STATE(213),
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
    [anon_sym_LF] = ACTIONS(592),
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
  [193] = {
    [anon_sym_LF] = ACTIONS(594),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [194] = {
    [anon_sym_LF] = ACTIONS(596),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [195] = {
    [sym__variable] = STATE(214),
    [sym_vector_element] = STATE(214),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [196] = {
    [sym__literal] = STATE(216),
    [sym__variable] = STATE(216),
    [sym__value] = STATE(216),
    [sym_text] = STATE(216),
    [sym_vector_element] = STATE(216),
    [sym_number] = ACTIONS(598),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [197] = {
    [anon_sym_LF] = ACTIONS(602),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [198] = {
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_while_token3] = ACTIONS(604),
    [sym_comment] = ACTIONS(3),
  },
  [199] = {
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
    [sym__statement] = STATE(218),
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
    [aux_sym__block_repeat1] = STATE(218),
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
    [anon_sym_LF] = ACTIONS(606),
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
  [200] = {
    [sym__variable] = STATE(219),
    [sym_vector_element] = STATE(219),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [201] = {
    [sym__literal] = STATE(172),
    [sym__variable] = STATE(172),
    [sym__value] = STATE(172),
    [sym_text] = STATE(172),
    [sym_vector_element] = STATE(172),
    [sym_number] = ACTIONS(455),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(449),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
  },
  [202] = {
    [anon_sym_LF] = ACTIONS(608),
    [sym__whitespace] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [203] = {
    [anon_sym_LF] = ACTIONS(610),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [204] = {
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
    [sym__statement] = STATE(204),
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
    [aux_sym__block_repeat1] = STATE(204),
    [sym_exit] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(319),
    [sym_break] = ACTIONS(316),
    [aux_sym_while_token1] = ACTIONS(322),
    [aux_sym_call_sub_token1] = ACTIONS(325),
    [aux_sym_join_token1] = ACTIONS(328),
    [aux_sym_in_join_token1] = ACTIONS(331),
    [aux_sym_store_length_token1] = ACTIONS(334),
    [aux_sym_abs_token1] = ACTIONS(337),
    [aux_sym_append_file_token1] = ACTIONS(340),
    [aux_sym_load_file_token1] = ACTIONS(343),
    [aux_sym_display_token1] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(349),
    [aux_sym_sub_proc_token1] = ACTIONS(352),
    [aux_sym_wait_token1] = ACTIONS(355),
    [aux_sym_goto_token1] = ACTIONS(358),
    [aux_sym_call_sub_token2] = ACTIONS(361),
    [aux_sym_get_char_token1] = ACTIONS(364),
    [aux_sym_floor_token1] = ACTIONS(367),
    [aux_sym_store_char_token1] = ACTIONS(370),
    [aux_sym_multiply_token1] = ACTIONS(373),
    [aux_sym_store_random_token1] = ACTIONS(376),
    [aux_sym_divide_token1] = ACTIONS(379),
    [aux_sym_write_file_token1] = ACTIONS(382),
    [aux_sym_accept_token1] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(612),
    [aux_sym_sub_proc_token2] = ACTIONS(403),
    [sym_return] = ACTIONS(316),
    [aux_sym_label_token1] = ACTIONS(391),
    [aux_sym_call_ext_token1] = ACTIONS(394),
    [sym_continue] = ACTIONS(316),
    [aux_sym_ceil_token1] = ACTIONS(397),
    [aux_sym_store_char_code_token1] = ACTIONS(400),
    [aux_sym_subtract_token1] = ACTIONS(405),
    [aux_sym_modulo_token1] = ACTIONS(408),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(411),
    [aux_sym_store_token1] = ACTIONS(414),
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
    [sym__variable] = STATE(223),
    [sym_vector_element] = STATE(223),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [209] = {
    [sym__variable] = STATE(224),
    [sym_vector_element] = STATE(224),
    [sym_identifier] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [210] = {
    [sym__literal] = STATE(216),
    [sym__variable] = STATE(216),
    [sym__value] = STATE(216),
    [sym_text] = STATE(216),
    [sym_vector_element] = STATE(216),
    [sym_number] = ACTIONS(598),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(615),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [211] = {
    [aux_sym_if_token1] = ACTIONS(617),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym_else_if_token1] = ACTIONS(617),
    [aux_sym_if_token2] = ACTIONS(617),
    [sym_comment] = ACTIONS(3),
    [aux_sym_else_token1] = ACTIONS(619),
  },
  [212] = {
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
    [sym__statement] = STATE(226),
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
    [aux_sym__block_repeat1] = STATE(226),
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
    [anon_sym_LF] = ACTIONS(621),
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
    [aux_sym_else_token1] = ACTIONS(623),
  },
  [213] = {
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
    [sym__statement] = STATE(213),
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
    [aux_sym__block_repeat1] = STATE(213),
    [aux_sym_if_token1] = ACTIONS(403),
    [sym_exit] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(319),
    [sym_break] = ACTIONS(316),
    [aux_sym_while_token1] = ACTIONS(322),
    [aux_sym_call_sub_token1] = ACTIONS(325),
    [aux_sym_join_token1] = ACTIONS(328),
    [aux_sym_in_join_token1] = ACTIONS(331),
    [aux_sym_store_length_token1] = ACTIONS(334),
    [aux_sym_abs_token1] = ACTIONS(337),
    [aux_sym_append_file_token1] = ACTIONS(340),
    [aux_sym_load_file_token1] = ACTIONS(343),
    [aux_sym_display_token1] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(349),
    [aux_sym_sub_proc_token1] = ACTIONS(352),
    [aux_sym_if_token2] = ACTIONS(403),
    [aux_sym_wait_token1] = ACTIONS(355),
    [aux_sym_goto_token1] = ACTIONS(358),
    [aux_sym_call_sub_token2] = ACTIONS(361),
    [aux_sym_get_char_token1] = ACTIONS(364),
    [aux_sym_floor_token1] = ACTIONS(367),
    [aux_sym_store_char_token1] = ACTIONS(370),
    [aux_sym_multiply_token1] = ACTIONS(373),
    [aux_sym_store_random_token1] = ACTIONS(376),
    [aux_sym_divide_token1] = ACTIONS(379),
    [aux_sym_write_file_token1] = ACTIONS(382),
    [aux_sym_accept_token1] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(625),
    [sym_return] = ACTIONS(316),
    [aux_sym_label_token1] = ACTIONS(391),
    [aux_sym_call_ext_token1] = ACTIONS(394),
    [sym_continue] = ACTIONS(316),
    [aux_sym_ceil_token1] = ACTIONS(397),
    [aux_sym_store_char_code_token1] = ACTIONS(400),
    [aux_sym_subtract_token1] = ACTIONS(405),
    [aux_sym_modulo_token1] = ACTIONS(408),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(411),
    [aux_sym_store_token1] = ACTIONS(414),
  },
  [214] = {
    [anon_sym_LF] = ACTIONS(628),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [215] = {
    [aux_sym_while_token2] = ACTIONS(204),
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(630),
    [sym_comment] = ACTIONS(3),
  },
  [216] = {
    [aux_sym_while_token2] = ACTIONS(632),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym__if_then_block_token2] = ACTIONS(632),
    [sym_comment] = ACTIONS(3),
  },
  [217] = {
    [anon_sym_LF] = ACTIONS(634),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [218] = {
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
    [sym__statement] = STATE(218),
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
    [aux_sym__block_repeat1] = STATE(218),
    [sym_exit] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(319),
    [sym_break] = ACTIONS(316),
    [aux_sym_while_token1] = ACTIONS(322),
    [aux_sym_call_sub_token1] = ACTIONS(325),
    [aux_sym_join_token1] = ACTIONS(328),
    [aux_sym_in_join_token1] = ACTIONS(331),
    [aux_sym_store_length_token1] = ACTIONS(334),
    [aux_sym_abs_token1] = ACTIONS(337),
    [aux_sym_append_file_token1] = ACTIONS(340),
    [aux_sym_load_file_token1] = ACTIONS(343),
    [aux_sym_display_token1] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(349),
    [aux_sym_sub_proc_token1] = ACTIONS(352),
    [aux_sym_wait_token1] = ACTIONS(355),
    [aux_sym_goto_token1] = ACTIONS(358),
    [aux_sym_call_sub_token2] = ACTIONS(361),
    [aux_sym_get_char_token1] = ACTIONS(364),
    [aux_sym_floor_token1] = ACTIONS(367),
    [aux_sym_store_char_token1] = ACTIONS(370),
    [aux_sym_multiply_token1] = ACTIONS(373),
    [aux_sym_store_random_token1] = ACTIONS(376),
    [aux_sym_divide_token1] = ACTIONS(379),
    [aux_sym_write_file_token1] = ACTIONS(382),
    [aux_sym_accept_token1] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(636),
    [sym_return] = ACTIONS(316),
    [aux_sym_label_token1] = ACTIONS(391),
    [aux_sym_while_token3] = ACTIONS(403),
    [aux_sym_call_ext_token1] = ACTIONS(394),
    [sym_continue] = ACTIONS(316),
    [aux_sym_ceil_token1] = ACTIONS(397),
    [aux_sym_store_char_code_token1] = ACTIONS(400),
    [aux_sym_subtract_token1] = ACTIONS(405),
    [aux_sym_modulo_token1] = ACTIONS(408),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(411),
    [aux_sym_store_token1] = ACTIONS(414),
  },
  [219] = {
    [anon_sym_LF] = ACTIONS(639),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [220] = {
    [anon_sym_LF] = ACTIONS(641),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [221] = {
    [anon_sym_LF] = ACTIONS(643),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [222] = {
    [anon_sym_LF] = ACTIONS(645),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_LF] = ACTIONS(647),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [224] = {
    [anon_sym_LF] = ACTIONS(649),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
  },
  [225] = {
    [aux_sym__if_then_block_token2] = ACTIONS(204),
    [sym__whitespace] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(651),
    [sym_comment] = ACTIONS(3),
  },
  [226] = {
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
    [sym__statement] = STATE(226),
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
    [aux_sym__block_repeat1] = STATE(226),
    [aux_sym_if_token1] = ACTIONS(403),
    [sym_exit] = ACTIONS(316),
    [aux_sym_add_token1] = ACTIONS(319),
    [sym_break] = ACTIONS(316),
    [aux_sym_while_token1] = ACTIONS(322),
    [aux_sym_call_sub_token1] = ACTIONS(325),
    [aux_sym_join_token1] = ACTIONS(328),
    [aux_sym_in_join_token1] = ACTIONS(331),
    [aux_sym_store_length_token1] = ACTIONS(334),
    [aux_sym_abs_token1] = ACTIONS(337),
    [aux_sym_append_file_token1] = ACTIONS(340),
    [aux_sym_load_file_token1] = ACTIONS(343),
    [aux_sym_display_token1] = ACTIONS(346),
    [sym_comment] = ACTIONS(3),
    [aux_sym_execute_token1] = ACTIONS(349),
    [aux_sym_sub_proc_token1] = ACTIONS(352),
    [aux_sym_if_token2] = ACTIONS(403),
    [aux_sym_wait_token1] = ACTIONS(355),
    [aux_sym_goto_token1] = ACTIONS(358),
    [aux_sym_call_sub_token2] = ACTIONS(361),
    [aux_sym_get_char_token1] = ACTIONS(364),
    [aux_sym_floor_token1] = ACTIONS(367),
    [aux_sym_store_char_token1] = ACTIONS(370),
    [aux_sym_multiply_token1] = ACTIONS(373),
    [aux_sym_store_random_token1] = ACTIONS(376),
    [aux_sym_divide_token1] = ACTIONS(379),
    [aux_sym_write_file_token1] = ACTIONS(382),
    [aux_sym_accept_token1] = ACTIONS(385),
    [anon_sym_LF] = ACTIONS(653),
    [aux_sym_else_if_token1] = ACTIONS(403),
    [sym_return] = ACTIONS(316),
    [aux_sym_label_token1] = ACTIONS(391),
    [aux_sym_call_ext_token1] = ACTIONS(394),
    [sym_continue] = ACTIONS(316),
    [aux_sym_ceil_token1] = ACTIONS(397),
    [aux_sym_store_char_code_token1] = ACTIONS(400),
    [aux_sym_subtract_token1] = ACTIONS(405),
    [aux_sym_modulo_token1] = ACTIONS(408),
    [sym__whitespace] = ACTIONS(3),
    [aux_sym__if_then_block_token1] = ACTIONS(411),
    [aux_sym_store_token1] = ACTIONS(414),
    [aux_sym_else_token1] = ACTIONS(656),
  },
  [227] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(427),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [228] = {
    [sym__literal] = STATE(158),
    [sym__variable] = STATE(158),
    [sym__value] = STATE(158),
    [sym_text] = STATE(158),
    [sym_vector_element] = STATE(158),
    [sym_number] = ACTIONS(427),
    [sym__whitespace] = ACTIONS(3),
    [sym_identifier] = ACTIONS(615),
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
  [210] = {.count = 1, .reusable = true}, SHIFT(111),
  [212] = {.count = 1, .reusable = true}, SHIFT(110),
  [214] = {.count = 1, .reusable = true}, SHIFT(112),
  [216] = {.count = 1, .reusable = true}, SHIFT(113),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_call_sub, 2),
  [220] = {.count = 1, .reusable = true}, SHIFT(114),
  [222] = {.count = 1, .reusable = true}, SHIFT(115),
  [224] = {.count = 1, .reusable = true}, SHIFT(116),
  [226] = {.count = 1, .reusable = true}, SHIFT(117),
  [228] = {.count = 1, .reusable = true}, SHIFT(118),
  [230] = {.count = 1, .reusable = true}, SHIFT(119),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_abs, 2),
  [234] = {.count = 1, .reusable = true}, SHIFT(120),
  [236] = {.count = 1, .reusable = true}, SHIFT(121),
  [238] = {.count = 1, .reusable = true}, SHIFT(122),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_display, 2),
  [242] = {.count = 1, .reusable = true}, SHIFT(123),
  [244] = {.count = 1, .reusable = true}, SHIFT(124),
  [246] = {.count = 1, .reusable = true}, SHIFT(126),
  [248] = {.count = 1, .reusable = true}, SHIFT(125),
  [250] = {.count = 1, .reusable = false}, SHIFT(127),
  [252] = {.count = 1, .reusable = true}, SHIFT(129),
  [254] = {.count = 1, .reusable = true}, SHIFT(131),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_execute, 2),
  [258] = {.count = 1, .reusable = true}, SHIFT(130),
  [260] = {.count = 1, .reusable = true}, SHIFT(132),
  [262] = {.count = 1, .reusable = true}, SHIFT(133),
  [264] = {.count = 1, .reusable = true}, SHIFT(134),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_goto, 2),
  [268] = {.count = 1, .reusable = true}, SHIFT(135),
  [270] = {.count = 1, .reusable = true}, SHIFT(136),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_floor, 2),
  [274] = {.count = 1, .reusable = true}, SHIFT(137),
  [276] = {.count = 1, .reusable = true}, SHIFT(138),
  [278] = {.count = 1, .reusable = true}, SHIFT(139),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_store_random, 2),
  [282] = {.count = 1, .reusable = true}, SHIFT(140),
  [284] = {.count = 1, .reusable = true}, SHIFT(141),
  [286] = {.count = 1, .reusable = true}, SHIFT(142),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_accept, 2),
  [290] = {.count = 1, .reusable = true}, SHIFT(143),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_call_ext, 2),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_ceil, 2),
  [298] = {.count = 1, .reusable = true}, SHIFT(144),
  [300] = {.count = 1, .reusable = true}, SHIFT(145),
  [302] = {.count = 1, .reusable = true}, SHIFT(146),
  [304] = {.count = 1, .reusable = true}, SHIFT(147),
  [306] = {.count = 1, .reusable = true}, SHIFT(148),
  [308] = {.count = 1, .reusable = true}, SHIFT(149),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_if, 2),
  [312] = {.count = 1, .reusable = true}, SHIFT(151),
  [314] = {.count = 1, .reusable = true}, SHIFT(152),
  [316] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(10),
  [319] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(11),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(12),
  [325] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(13),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(14),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(15),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(16),
  [337] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(17),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(18),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(19),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(20),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(21),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(22),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(23),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(24),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(13),
  [364] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(25),
  [367] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(26),
  [370] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(27),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(28),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(29),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(30),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(31),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(32),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(102),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(33),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(34),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(35),
  [400] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(36),
  [403] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(37),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(38),
  [411] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(39),
  [414] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(40),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [419] = {.count = 1, .reusable = true}, SHIFT(155),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [423] = {.count = 1, .reusable = true}, SHIFT(156),
  [425] = {.count = 1, .reusable = true}, SHIFT(157),
  [427] = {.count = 1, .reusable = false}, SHIFT(158),
  [429] = {.count = 1, .reusable = false}, SHIFT(159),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_text, 2),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_text, 2),
  [435] = {.count = 1, .reusable = true}, SHIFT(161),
  [437] = {.count = 1, .reusable = true}, SHIFT(160),
  [439] = {.count = 1, .reusable = true}, SHIFT(162),
  [441] = {.count = 1, .reusable = false}, SHIFT(162),
  [443] = {.count = 1, .reusable = true}, SHIFT(164),
  [445] = {.count = 1, .reusable = false}, SHIFT(165),
  [447] = {.count = 1, .reusable = false}, SHIFT(166),
  [449] = {.count = 1, .reusable = false}, SHIFT(167),
  [451] = {.count = 1, .reusable = false}, REDUCE(aux_sym_in_join_repeat1, 2),
  [453] = {.count = 1, .reusable = true}, REDUCE(aux_sym_in_join_repeat1, 2),
  [455] = {.count = 1, .reusable = false}, SHIFT(172),
  [457] = {.count = 1, .reusable = true}, SHIFT(173),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_display, 3),
  [461] = {.count = 2, .reusable = false}, REDUCE(aux_sym_in_join_repeat1, 2), SHIFT_REPEAT(166),
  [464] = {.count = 2, .reusable = false}, REDUCE(aux_sym_in_join_repeat1, 2), SHIFT_REPEAT(167),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_in_join_repeat1, 2), SHIFT_REPEAT(69),
  [470] = {.count = 1, .reusable = true}, SHIFT(179),
  [472] = {.count = 1, .reusable = true}, SHIFT(176),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_wait, 3),
  [476] = {.count = 1, .reusable = false}, SHIFT(182),
  [478] = {.count = 1, .reusable = false}, SHIFT(183),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_accept_until_eof, 3),
  [482] = {.count = 1, .reusable = false}, SHIFT(186),
  [484] = {.count = 1, .reusable = false}, SHIFT(187),
  [486] = {.count = 1, .reusable = true}, SHIFT(189),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_else_if, 2),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_else_if, 2),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_else, 2),
  [494] = {.count = 1, .reusable = true}, SHIFT(192),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_if, 3),
  [498] = {.count = 1, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2),
  [500] = {.count = 2, .reusable = true}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(98),
  [503] = {.count = 1, .reusable = false}, REDUCE(aux_sym_if_repeat1, 2),
  [505] = {.count = 1, .reusable = true}, SHIFT(193),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [509] = {.count = 1, .reusable = true}, SHIFT(194),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_var_definition, 4),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_var_definition, 4),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_vector_element, 3),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_vector_element, 3),
  [519] = {.count = 1, .reusable = true}, SHIFT(195),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_text, 3),
  [523] = {.count = 1, .reusable = false}, REDUCE(sym_text, 3),
  [525] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(161),
  [528] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_rel_op, 1),
  [532] = {.count = 1, .reusable = true}, SHIFT(196),
  [534] = {.count = 1, .reusable = true}, SHIFT(199),
  [536] = {.count = 1, .reusable = true}, SHIFT(197),
  [538] = {.count = 1, .reusable = true}, SHIFT(200),
  [540] = {.count = 1, .reusable = true}, SHIFT(201),
  [542] = {.count = 1, .reusable = false}, SHIFT(202),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_store_length, 4),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_append_file, 4),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_load_file, 4),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_execute_store_ouput, 4),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_execute_store_exit_code, 4),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_sub_proc, 4),
  [556] = {.count = 1, .reusable = true}, SHIFT(203),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_body, 1),
  [560] = {.count = 1, .reusable = false}, REDUCE(sym_body, 1),
  [562] = {.count = 1, .reusable = true}, SHIFT(204),
  [564] = {.count = 1, .reusable = true}, SHIFT(205),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_store_char, 4),
  [568] = {.count = 1, .reusable = true}, SHIFT(206),
  [570] = {.count = 1, .reusable = true}, SHIFT(207),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_write_file, 4),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_store_char_code, 4),
  [576] = {.count = 1, .reusable = true}, SHIFT(208),
  [578] = {.count = 1, .reusable = true}, SHIFT(209),
  [580] = {.count = 1, .reusable = true}, SHIFT(210),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym__if_then_block, 4),
  [584] = {.count = 1, .reusable = true}, SHIFT(212),
  [586] = {.count = 1, .reusable = false}, REDUCE(sym__if_then_block, 4),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_store, 4),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_else, 3),
  [592] = {.count = 1, .reusable = true}, SHIFT(213),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_if, 4),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [598] = {.count = 1, .reusable = false}, SHIFT(216),
  [600] = {.count = 1, .reusable = false}, SHIFT(215),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym_while, 5),
  [604] = {.count = 1, .reusable = true}, SHIFT(217),
  [606] = {.count = 1, .reusable = true}, SHIFT(218),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_in_join, 5),
  [610] = {.count = 1, .reusable = true}, REDUCE(sym_sub_proc, 5),
  [612] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(204),
  [615] = {.count = 1, .reusable = false}, SHIFT(225),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym__if_then_block, 5),
  [619] = {.count = 1, .reusable = false}, REDUCE(sym__if_then_block, 5),
  [621] = {.count = 1, .reusable = true}, SHIFT(226),
  [623] = {.count = 1, .reusable = false}, REDUCE(sym__block, 1),
  [625] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(213),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_add, 6),
  [630] = {.count = 1, .reusable = true}, SHIFT(227),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_guard, 5),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_while, 6),
  [636] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(218),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_join, 6),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_get_char, 6),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_multiply, 6),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_divide, 6),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_subtract, 6),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_modulo, 6),
  [651] = {.count = 1, .reusable = true}, SHIFT(228),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_repeat1, 2), SHIFT_REPEAT(226),
  [656] = {.count = 1, .reusable = false}, REDUCE(aux_sym__block_repeat1, 2),
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
