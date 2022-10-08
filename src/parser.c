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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 226
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 1
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_settings_section_token1 = 1,
  aux_sym_settings_section_token2 = 2,
  aux_sym_settings_section_token3 = 3,
  aux_sym_setting_statement_token1 = 4,
  aux_sym_setting_statement_token2 = 5,
  aux_sym_setting_statement_token3 = 6,
  aux_sym_setting_statement_token4 = 7,
  aux_sym_setting_statement_token5 = 8,
  aux_sym_setting_statement_token6 = 9,
  aux_sym_setting_statement_token7 = 10,
  aux_sym_setting_statement_token8 = 11,
  aux_sym_setting_statement_token9 = 12,
  aux_sym_setting_statement_token10 = 13,
  aux_sym_setting_statement_token11 = 14,
  aux_sym_setting_statement_token12 = 15,
  aux_sym_setting_statement_token13 = 16,
  aux_sym_setting_statement_token14 = 17,
  aux_sym_setting_statement_token15 = 18,
  aux_sym_setting_statement_token16 = 19,
  aux_sym_setting_statement_token17 = 20,
  aux_sym_variables_section_token1 = 21,
  aux_sym_variable_definition_token1 = 22,
  anon_sym_RBRACE = 23,
  anon_sym_EQ = 24,
  anon_sym_EQ2 = 25,
  aux_sym_keywords_section_token1 = 26,
  anon_sym_ = 27,
  aux_sym_keyword_setting_token1 = 28,
  aux_sym_keyword_setting_token2 = 29,
  aux_sym_keyword_setting_token3 = 30,
  aux_sym_keyword_setting_token4 = 31,
  aux_sym_keyword_setting_token5 = 32,
  aux_sym_keyword_setting_token6 = 33,
  aux_sym_test_cases_or_tasks_section_token1 = 34,
  aux_sym_test_cases_or_tasks_section_token2 = 35,
  aux_sym_test_case_or_task_setting_token1 = 36,
  aux_sym_test_case_or_task_setting_token2 = 37,
  anon_sym_DOLLAR_LBRACE = 38,
  sym_ellipses = 39,
  sym_indented_ellipses = 40,
  sym_test_case_or_task = 41,
  sym_text_chunk = 42,
  anon_sym_RETURN = 43,
  sym_variable_name = 44,
  anon_sym_AT_LBRACE = 45,
  anon_sym_AMP_LBRACE = 46,
  anon_sym_EMPTY = 47,
  sym_comment = 48,
  sym__separator = 49,
  sym__whitespace = 50,
  sym__line_break = 51,
  sym_source_file = 52,
  sym_section = 53,
  sym_settings_section = 54,
  sym_setting_statement = 55,
  sym_variables_section = 56,
  sym_variable_definition = 57,
  sym_keywords_section = 58,
  sym_keyword_definition = 59,
  sym_keyword_definition_body = 60,
  sym_keyword_setting = 61,
  sym_test_cases_or_tasks_section = 62,
  sym_test_case_or_task_definition = 63,
  sym_test_case_or_task_definition_body = 64,
  sym_test_case_or_task_setting = 65,
  sym_statement = 66,
  sym_variable_assignment = 67,
  sym_keyword_invocation = 68,
  sym_arguments = 69,
  sym_continuation = 70,
  sym_argument = 71,
  sym_return_statement = 72,
  sym_list_variable = 73,
  sym_scalar_variable = 74,
  sym_dictionary_variable = 75,
  sym_empty_variable = 76,
  sym__empty_line = 77,
  aux_sym_source_file_repeat1 = 78,
  aux_sym_source_file_repeat2 = 79,
  aux_sym_settings_section_repeat1 = 80,
  aux_sym_variables_section_repeat1 = 81,
  aux_sym_keywords_section_repeat1 = 82,
  aux_sym_keyword_definition_body_repeat1 = 83,
  aux_sym_test_cases_or_tasks_section_repeat1 = 84,
  aux_sym_test_case_or_task_definition_body_repeat1 = 85,
  aux_sym_arguments_repeat1 = 86,
  aux_sym_arguments_repeat2 = 87,
  aux_sym_argument_repeat1 = 88,
  alias_sym_keyword = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_settings_section_token1] = "section_header",
  [aux_sym_settings_section_token2] = "extra_text",
  [aux_sym_settings_section_token3] = "extra_text",
  [aux_sym_setting_statement_token1] = "setting_statement_token1",
  [aux_sym_setting_statement_token2] = "setting_statement_token2",
  [aux_sym_setting_statement_token3] = "setting_statement_token3",
  [aux_sym_setting_statement_token4] = "setting_statement_token4",
  [aux_sym_setting_statement_token5] = "setting_statement_token5",
  [aux_sym_setting_statement_token6] = "setting_statement_token6",
  [aux_sym_setting_statement_token7] = "setting_statement_token7",
  [aux_sym_setting_statement_token8] = "setting_statement_token8",
  [aux_sym_setting_statement_token9] = "setting_statement_token9",
  [aux_sym_setting_statement_token10] = "setting_statement_token10",
  [aux_sym_setting_statement_token11] = "setting_statement_token11",
  [aux_sym_setting_statement_token12] = "setting_statement_token12",
  [aux_sym_setting_statement_token13] = "setting_statement_token13",
  [aux_sym_setting_statement_token14] = "setting_statement_token14",
  [aux_sym_setting_statement_token15] = "setting_statement_token15",
  [aux_sym_setting_statement_token16] = "setting_statement_token16",
  [aux_sym_setting_statement_token17] = "setting_statement_token17",
  [aux_sym_variables_section_token1] = "section_header",
  [aux_sym_variable_definition_token1] = "variable_definition_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ2] = " =",
  [aux_sym_keywords_section_token1] = "section_header",
  [anon_sym_] = " ",
  [aux_sym_keyword_setting_token1] = "keyword_setting_token1",
  [aux_sym_keyword_setting_token2] = "keyword_setting_token2",
  [aux_sym_keyword_setting_token3] = "keyword_setting_token3",
  [aux_sym_keyword_setting_token4] = "keyword_setting_token4",
  [aux_sym_keyword_setting_token5] = "keyword_setting_token5",
  [aux_sym_keyword_setting_token6] = "keyword_setting_token6",
  [aux_sym_test_cases_or_tasks_section_token1] = "section_header",
  [aux_sym_test_cases_or_tasks_section_token2] = "section_header",
  [aux_sym_test_case_or_task_setting_token1] = "test_case_or_task_setting_token1",
  [aux_sym_test_case_or_task_setting_token2] = "test_case_or_task_setting_token2",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_ellipses] = "ellipses",
  [sym_indented_ellipses] = "ellipses",
  [sym_test_case_or_task] = "name",
  [sym_text_chunk] = "text_chunk",
  [anon_sym_RETURN] = "RETURN",
  [sym_variable_name] = "variable_name",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AMP_LBRACE] = "&{",
  [anon_sym_EMPTY] = "variable_name",
  [sym_comment] = "comment",
  [sym__separator] = "_separator",
  [sym__whitespace] = "_whitespace",
  [sym__line_break] = "_line_break",
  [sym_source_file] = "source_file",
  [sym_section] = "section",
  [sym_settings_section] = "settings_section",
  [sym_setting_statement] = "setting_statement",
  [sym_variables_section] = "variables_section",
  [sym_variable_definition] = "variable_definition",
  [sym_keywords_section] = "keywords_section",
  [sym_keyword_definition] = "keyword_definition",
  [sym_keyword_definition_body] = "body",
  [sym_keyword_setting] = "keyword_setting",
  [sym_test_cases_or_tasks_section] = "test_cases_or_tasks_section",
  [sym_test_case_or_task_definition] = "test_case_or_task_definition",
  [sym_test_case_or_task_definition_body] = "body",
  [sym_test_case_or_task_setting] = "test_case_or_task_setting",
  [sym_statement] = "statement",
  [sym_variable_assignment] = "variable_assignment",
  [sym_keyword_invocation] = "keyword_invocation",
  [sym_arguments] = "arguments",
  [sym_continuation] = "continuation",
  [sym_argument] = "argument",
  [sym_return_statement] = "return_statement",
  [sym_list_variable] = "list_variable",
  [sym_scalar_variable] = "scalar_variable",
  [sym_dictionary_variable] = "dictionary_variable",
  [sym_empty_variable] = "empty_variable",
  [sym__empty_line] = "_empty_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_settings_section_repeat1] = "settings_section_repeat1",
  [aux_sym_variables_section_repeat1] = "variables_section_repeat1",
  [aux_sym_keywords_section_repeat1] = "keywords_section_repeat1",
  [aux_sym_keyword_definition_body_repeat1] = "keyword_definition_body_repeat1",
  [aux_sym_test_cases_or_tasks_section_repeat1] = "test_cases_or_tasks_section_repeat1",
  [aux_sym_test_case_or_task_definition_body_repeat1] = "test_case_or_task_definition_body_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [alias_sym_keyword] = "keyword",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_settings_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_settings_section_token2] = aux_sym_settings_section_token2,
  [aux_sym_settings_section_token3] = aux_sym_settings_section_token2,
  [aux_sym_setting_statement_token1] = aux_sym_setting_statement_token1,
  [aux_sym_setting_statement_token2] = aux_sym_setting_statement_token2,
  [aux_sym_setting_statement_token3] = aux_sym_setting_statement_token3,
  [aux_sym_setting_statement_token4] = aux_sym_setting_statement_token4,
  [aux_sym_setting_statement_token5] = aux_sym_setting_statement_token5,
  [aux_sym_setting_statement_token6] = aux_sym_setting_statement_token6,
  [aux_sym_setting_statement_token7] = aux_sym_setting_statement_token7,
  [aux_sym_setting_statement_token8] = aux_sym_setting_statement_token8,
  [aux_sym_setting_statement_token9] = aux_sym_setting_statement_token9,
  [aux_sym_setting_statement_token10] = aux_sym_setting_statement_token10,
  [aux_sym_setting_statement_token11] = aux_sym_setting_statement_token11,
  [aux_sym_setting_statement_token12] = aux_sym_setting_statement_token12,
  [aux_sym_setting_statement_token13] = aux_sym_setting_statement_token13,
  [aux_sym_setting_statement_token14] = aux_sym_setting_statement_token14,
  [aux_sym_setting_statement_token15] = aux_sym_setting_statement_token15,
  [aux_sym_setting_statement_token16] = aux_sym_setting_statement_token16,
  [aux_sym_setting_statement_token17] = aux_sym_setting_statement_token17,
  [aux_sym_variables_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_variable_definition_token1] = aux_sym_variable_definition_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ2] = anon_sym_EQ2,
  [aux_sym_keywords_section_token1] = aux_sym_settings_section_token1,
  [anon_sym_] = anon_sym_,
  [aux_sym_keyword_setting_token1] = aux_sym_keyword_setting_token1,
  [aux_sym_keyword_setting_token2] = aux_sym_keyword_setting_token2,
  [aux_sym_keyword_setting_token3] = aux_sym_keyword_setting_token3,
  [aux_sym_keyword_setting_token4] = aux_sym_keyword_setting_token4,
  [aux_sym_keyword_setting_token5] = aux_sym_keyword_setting_token5,
  [aux_sym_keyword_setting_token6] = aux_sym_keyword_setting_token6,
  [aux_sym_test_cases_or_tasks_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_test_cases_or_tasks_section_token2] = aux_sym_settings_section_token1,
  [aux_sym_test_case_or_task_setting_token1] = aux_sym_test_case_or_task_setting_token1,
  [aux_sym_test_case_or_task_setting_token2] = aux_sym_test_case_or_task_setting_token2,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_ellipses] = sym_ellipses,
  [sym_indented_ellipses] = sym_ellipses,
  [sym_test_case_or_task] = sym_test_case_or_task,
  [sym_text_chunk] = sym_text_chunk,
  [anon_sym_RETURN] = anon_sym_RETURN,
  [sym_variable_name] = sym_variable_name,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AMP_LBRACE] = anon_sym_AMP_LBRACE,
  [anon_sym_EMPTY] = sym_variable_name,
  [sym_comment] = sym_comment,
  [sym__separator] = sym__separator,
  [sym__whitespace] = sym__whitespace,
  [sym__line_break] = sym__line_break,
  [sym_source_file] = sym_source_file,
  [sym_section] = sym_section,
  [sym_settings_section] = sym_settings_section,
  [sym_setting_statement] = sym_setting_statement,
  [sym_variables_section] = sym_variables_section,
  [sym_variable_definition] = sym_variable_definition,
  [sym_keywords_section] = sym_keywords_section,
  [sym_keyword_definition] = sym_keyword_definition,
  [sym_keyword_definition_body] = sym_keyword_definition_body,
  [sym_keyword_setting] = sym_keyword_setting,
  [sym_test_cases_or_tasks_section] = sym_test_cases_or_tasks_section,
  [sym_test_case_or_task_definition] = sym_test_case_or_task_definition,
  [sym_test_case_or_task_definition_body] = sym_keyword_definition_body,
  [sym_test_case_or_task_setting] = sym_test_case_or_task_setting,
  [sym_statement] = sym_statement,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym_keyword_invocation] = sym_keyword_invocation,
  [sym_arguments] = sym_arguments,
  [sym_continuation] = sym_continuation,
  [sym_argument] = sym_argument,
  [sym_return_statement] = sym_return_statement,
  [sym_list_variable] = sym_list_variable,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym_dictionary_variable] = sym_dictionary_variable,
  [sym_empty_variable] = sym_empty_variable,
  [sym__empty_line] = sym__empty_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_settings_section_repeat1] = aux_sym_settings_section_repeat1,
  [aux_sym_variables_section_repeat1] = aux_sym_variables_section_repeat1,
  [aux_sym_keywords_section_repeat1] = aux_sym_keywords_section_repeat1,
  [aux_sym_keyword_definition_body_repeat1] = aux_sym_keyword_definition_body_repeat1,
  [aux_sym_test_cases_or_tasks_section_repeat1] = aux_sym_test_cases_or_tasks_section_repeat1,
  [aux_sym_test_case_or_task_definition_body_repeat1] = aux_sym_test_case_or_task_definition_body_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [alias_sym_keyword] = alias_sym_keyword,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_settings_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_settings_section_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_settings_section_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_setting_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setting_statement_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keywords_section_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_keyword_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_setting_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_or_tasks_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_cases_or_tasks_section_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_case_or_task_setting_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_or_task_setting_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_ellipses] = {
    .visible = true,
    .named = true,
  },
  [sym_indented_ellipses] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_or_task] = {
    .visible = true,
    .named = true,
  },
  [sym_text_chunk] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RETURN] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMPTY] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__line_break] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_section] = {
    .visible = true,
    .named = true,
  },
  [sym_setting_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variables_section] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keywords_section] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_test_cases_or_tasks_section] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_or_task_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_or_task_definition_body] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_or_task_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_invocation] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_list_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keywords_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_definition_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_cases_or_tasks_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_case_or_task_definition_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_keyword] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_test_case_or_task,
  },
  [2] = {
    [1] = sym_test_case_or_task,
  },
  [3] = {
    [0] = alias_sym_keyword,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 3,
  [20] = 5,
  [21] = 4,
  [22] = 22,
  [23] = 23,
  [24] = 4,
  [25] = 2,
  [26] = 5,
  [27] = 27,
  [28] = 28,
  [29] = 6,
  [30] = 6,
  [31] = 2,
  [32] = 3,
  [33] = 4,
  [34] = 6,
  [35] = 2,
  [36] = 3,
  [37] = 5,
  [38] = 38,
  [39] = 39,
  [40] = 12,
  [41] = 41,
  [42] = 42,
  [43] = 15,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 12,
  [53] = 53,
  [54] = 54,
  [55] = 15,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 15,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 12,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 16,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 70,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 78,
  [82] = 71,
  [83] = 76,
  [84] = 74,
  [85] = 85,
  [86] = 16,
  [87] = 85,
  [88] = 72,
  [89] = 79,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 90,
  [98] = 98,
  [99] = 99,
  [100] = 96,
  [101] = 101,
  [102] = 16,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 93,
  [110] = 92,
  [111] = 16,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 142,
  [143] = 16,
  [144] = 144,
  [145] = 141,
  [146] = 146,
  [147] = 142,
  [148] = 144,
  [149] = 142,
  [150] = 144,
  [151] = 146,
  [152] = 141,
  [153] = 141,
  [154] = 154,
  [155] = 155,
  [156] = 146,
  [157] = 144,
  [158] = 142,
  [159] = 146,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 165,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 176,
  [184] = 184,
  [185] = 185,
  [186] = 181,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 191,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 191,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 191,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 191,
  [223] = 191,
  [224] = 216,
  [225] = 194,
};

static inline bool sym_text_chunk_character_set_1(int32_t c) {
  return (c < 'D'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '&'
        ? c == '$'
        : (c <= '&' || (c >= '@' && c <= 'A')))))
    : (c <= 'D' || (c < 'd'
      ? (c < 'T'
        ? c == 'R'
        : (c <= 'T' || c == 'a'))
      : (c <= 'd' || (c < 't'
        ? c == 'r'
        : c <= 't')))));
}

static inline bool sym_text_chunk_character_set_2(int32_t c) {
  return (c < '@'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '&'
        ? c == '$'
        : c <= '&')))
    : (c <= '@' || (c < 'k'
      ? (c < 'S'
        ? c == 'K'
        : (c <= 'T' || c == 'V'))
      : (c <= 'k' || (c < 'v'
        ? (c >= 's' && c <= 't')
        : c <= 'v')))));
}

static inline bool sym_text_chunk_character_set_3(int32_t c) {
  return (c < '&'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '$'
        ? c == ' '
        : c <= '$')))
    : (c <= '&' || (c < 'S'
      ? (c < 'D'
        ? c == '@'
        : c <= 'D')
      : (c <= 'T' || (c < 's'
        ? c == 'd'
        : c <= 't')))));
}

static inline bool sym_text_chunk_character_set_4(int32_t c) {
  return (c < '$'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '$' || (c < 'C'
      ? (c < '@'
        ? c == '&'
        : c <= '@')
      : (c <= 'C' || c == 'c'))));
}

static inline bool sym_text_chunk_character_set_5(int32_t c) {
  return (c < '@'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '&'
        ? c == '$'
        : c <= '&')))
    : (c <= 'A' || (c < 'a'
      ? (c < 'I'
        ? c == 'E'
        : c <= 'I')
      : (c <= 'a' || (c < 'i'
        ? c == 'e'
        : c <= 'i')))));
}

static inline bool sym_text_chunk_character_set_6(int32_t c) {
  return (c < '&'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == '$'))
    : (c <= '&' || (c < 'a'
      ? (c < 'E'
        ? (c >= '@' && c <= 'A')
        : c <= 'E')
      : (c <= 'a' || c == 'e'))));
}

static inline bool sym_text_chunk_character_set_7(int32_t c) {
  return (c < '&'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == '$'))
    : (c <= '&' || (c < 'a'
      ? (c < 'M'
        ? (c >= '@' && c <= 'A')
        : c <= 'M')
      : (c <= 'a' || c == 'm'))));
}

static inline bool sym_text_chunk_character_set_8(int32_t c) {
  return (c < 'K'
    ? (c < '$'
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= '$' || (c < '@'
        ? c == '&'
        : c <= '@')))
    : (c <= 'K' || (c < 'k'
      ? (c < 'V'
        ? (c >= 'S' && c <= 'T')
        : c <= 'V')
      : (c <= 'k' || (c < 'v'
        ? (c >= 's' && c <= 't')
        : c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(245);
      if (lookahead == '\t') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '=') ADVANCE(275);
      if (lookahead == '}') ADVANCE(274);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '}') ADVANCE(274);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(517);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '=') ADVANCE(276);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(517);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '=') ADVANCE(275);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(517);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(519);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(390);
      if (lookahead == 'R') ADVANCE(385);
      if (lookahead == '[') ADVANCE(490);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(517);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(390);
      if (lookahead == '&') ADVANCE(391);
      if (lookahead == '@') ADVANCE(392);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(506);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == '#') ADVANCE(505);
      if (lookahead == 'E') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(506);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == '#') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(390);
      if (lookahead == 'R') ADVANCE(385);
      if (lookahead == '[') ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(250);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(505);
      if (lookahead == 'E') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(302);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(277);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(246);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(270);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(299);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(358);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(358);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(358);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(358);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(358);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == '.') ADVANCE(310);
      END_STATE();
    case 58:
      if (lookahead == '.') ADVANCE(313);
      END_STATE();
    case 59:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '.') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == ']') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 62:
      if (lookahead == ']') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 63:
      if (lookahead == ']') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 64:
      if (lookahead == ']') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 66:
      if (lookahead == ']') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 67:
      if (lookahead == ']') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 68:
      if (lookahead == ']') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 69:
      if (lookahead == '{') ADVANCE(273);
      END_STATE();
    case 70:
      if (lookahead == '{') ADVANCE(404);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 80:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(172);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(358);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 100:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 103:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 107:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 108:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(80);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 110:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 126:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 127:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 128:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 129:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 135:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 136:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 137:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(332);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(358);
      END_STATE();
    case 138:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(107);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 139:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(179);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 145:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 146:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 147:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 148:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 155:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 156:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 158:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 159:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 160:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 161:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 162:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 163:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 164:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 165:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 166:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 167:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 168:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 170:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 171:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 172:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 174:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 176:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 178:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      END_STATE();
    case 179:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 180:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      END_STATE();
    case 181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 182:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(261);
      END_STATE();
    case 183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      END_STATE();
    case 184:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      END_STATE();
    case 185:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(213);
      END_STATE();
    case 186:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 187:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(123);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(118);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      END_STATE();
    case 191:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 192:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      END_STATE();
    case 193:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 194:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 195:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 196:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(265);
      END_STATE();
    case 197:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 198:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 199:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 200:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 201:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      END_STATE();
    case 202:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      END_STATE();
    case 203:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(219);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      END_STATE();
    case 208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 210:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 211:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 212:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 214:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 215:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 216:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 217:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 219:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 220:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 221:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 222:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 223:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 224:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 225:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(151);
      END_STATE();
    case 226:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(158);
      END_STATE();
    case 227:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 228:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 229:
      if (!sym_text_chunk_character_set_1(lookahead)) ADVANCE(404);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(397);
      END_STATE();
    case 230:
      if (!sym_text_chunk_character_set_2(lookahead)) ADVANCE(404);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(393);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(394);
      END_STATE();
    case 231:
      if (!sym_text_chunk_character_set_3(lookahead)) ADVANCE(404);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(396);
      END_STATE();
    case 232:
      if (!sym_text_chunk_character_set_4(lookahead)) ADVANCE(404);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      END_STATE();
    case 233:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(404);
      END_STATE();
    case 234:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(358);
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(515);
      END_STATE();
    case 236:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(404);
      END_STATE();
    case 237:
      if (eof) ADVANCE(245);
      if (lookahead == '\t') ADVANCE(520);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(518);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '}') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '@') ADVANCE(69);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(104);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(154);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(74);
      END_STATE();
    case 238:
      if (eof) ADVANCE(245);
      if (lookahead == '\t') ADVANCE(520);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 239:
      if (eof) ADVANCE(245);
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 240:
      if (eof) ADVANCE(245);
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 241:
      if (eof) ADVANCE(245);
      if (lookahead == '\t') ADVANCE(516);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 242:
      if (eof) ADVANCE(245);
      if (lookahead == '\t') ADVANCE(516);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead == '.') ADVANCE(383);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 243:
      if (eof) ADVANCE(245);
      if (lookahead == '\t') ADVANCE(517);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 244:
      if (eof) ADVANCE(245);
      if (lookahead == '\t') ADVANCE(517);
      if (lookahead == '\n') ADVANCE(522);
      if (lookahead == '\r') ADVANCE(523);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(26);
      if (lookahead == ' ') ADVANCE(517);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == ' ') ADVANCE(516);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == ' ') ADVANCE(517);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(404);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '*') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(345);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(332);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '*') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead == '*') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(358);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '.') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '.') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'E') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'N') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'R') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'T') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'U') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '{') ADVANCE(513);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '{') ADVANCE(512);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(486);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (!sym_text_chunk_character_set_5(lookahead)) ADVANCE(486);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (!sym_text_chunk_character_set_6(lookahead)) ADVANCE(486);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (!sym_text_chunk_character_set_7(lookahead)) ADVANCE(486);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(446);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'B' &&
          lookahead != 'b') ADVANCE(486);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'C' &&
          lookahead != 'c') ADVANCE(486);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(486);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(443);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'D' &&
          lookahead != 'd') ADVANCE(486);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(458);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(440);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'E' &&
          lookahead != 'e') ADVANCE(486);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(486);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(454);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(486);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'G' &&
          lookahead != 'g') ADVANCE(486);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(486);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(486);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(482);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'I' &&
          lookahead != 'i') ADVANCE(486);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'K' &&
          lookahead != 'k') ADVANCE(486);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(455);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(486);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'L' &&
          lookahead != 'l') ADVANCE(486);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(486);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(486);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'M' &&
          lookahead != 'm') ADVANCE(486);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(495);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'N' &&
          lookahead != 'n') ADVANCE(486);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(486);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(486);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(486);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(486);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(475);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'O' &&
          lookahead != 'o') ADVANCE(486);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(486);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(431);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'P' &&
          lookahead != 'p') ADVANCE(486);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(486);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(486);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(486);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(486);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'R' &&
          lookahead != 'r') ADVANCE(486);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(463);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(500);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(501);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'S' &&
          lookahead != 's') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(465);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'T' &&
          lookahead != 't') ADVANCE(486);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(486);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(486);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(452);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(486);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(486);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'U' &&
          lookahead != 'u') ADVANCE(486);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(486);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'W' &&
          lookahead != 'w') ADVANCE(486);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'Y' &&
          lookahead != 'y') ADVANCE(486);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(486);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(486);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(486);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(486);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(472);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != 'A' &&
          lookahead != 'a') ADVANCE(486);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(230);
      if (!sym_text_chunk_character_set_8(lookahead)) ADVANCE(486);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(413);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == ']') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(441);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(419);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(70);
      if (lookahead != 0) ADVANCE(486);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == ']') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ']') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == ']') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == ']') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == ']') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(46);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_RETURN);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(486);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(511);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(515);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'M') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'T') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'Y') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      if (lookahead == '{') ADVANCE(404);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      if (lookahead == '{') ADVANCE(404);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(511);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == ' ') ADVANCE(520);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(521);
      if (lookahead == ' ') ADVANCE(517);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(522);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 237},
  [2] = {.lex_state = 237},
  [3] = {.lex_state = 237},
  [4] = {.lex_state = 237},
  [5] = {.lex_state = 237},
  [6] = {.lex_state = 237},
  [7] = {.lex_state = 237},
  [8] = {.lex_state = 237},
  [9] = {.lex_state = 237},
  [10] = {.lex_state = 237},
  [11] = {.lex_state = 237},
  [12] = {.lex_state = 237},
  [13] = {.lex_state = 237},
  [14] = {.lex_state = 237},
  [15] = {.lex_state = 237},
  [16] = {.lex_state = 237},
  [17] = {.lex_state = 237},
  [18] = {.lex_state = 237},
  [19] = {.lex_state = 241},
  [20] = {.lex_state = 242},
  [21] = {.lex_state = 241},
  [22] = {.lex_state = 243},
  [23] = {.lex_state = 244},
  [24] = {.lex_state = 242},
  [25] = {.lex_state = 241},
  [26] = {.lex_state = 241},
  [27] = {.lex_state = 244},
  [28] = {.lex_state = 243},
  [29] = {.lex_state = 242},
  [30] = {.lex_state = 241},
  [31] = {.lex_state = 242},
  [32] = {.lex_state = 242},
  [33] = {.lex_state = 238},
  [34] = {.lex_state = 238},
  [35] = {.lex_state = 238},
  [36] = {.lex_state = 238},
  [37] = {.lex_state = 238},
  [38] = {.lex_state = 239},
  [39] = {.lex_state = 240},
  [40] = {.lex_state = 242},
  [41] = {.lex_state = 240},
  [42] = {.lex_state = 239},
  [43] = {.lex_state = 242},
  [44] = {.lex_state = 240},
  [45] = {.lex_state = 239},
  [46] = {.lex_state = 239},
  [47] = {.lex_state = 239},
  [48] = {.lex_state = 239},
  [49] = {.lex_state = 240},
  [50] = {.lex_state = 240},
  [51] = {.lex_state = 240},
  [52] = {.lex_state = 241},
  [53] = {.lex_state = 240},
  [54] = {.lex_state = 239},
  [55] = {.lex_state = 241},
  [56] = {.lex_state = 237},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 237},
  [59] = {.lex_state = 237},
  [60] = {.lex_state = 238},
  [61] = {.lex_state = 237},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 237},
  [64] = {.lex_state = 237},
  [65] = {.lex_state = 238},
  [66] = {.lex_state = 237},
  [67] = {.lex_state = 237},
  [68] = {.lex_state = 237},
  [69] = {.lex_state = 237},
  [70] = {.lex_state = 244},
  [71] = {.lex_state = 244},
  [72] = {.lex_state = 244},
  [73] = {.lex_state = 244},
  [74] = {.lex_state = 243},
  [75] = {.lex_state = 243},
  [76] = {.lex_state = 243},
  [77] = {.lex_state = 243},
  [78] = {.lex_state = 244},
  [79] = {.lex_state = 244},
  [80] = {.lex_state = 244},
  [81] = {.lex_state = 243},
  [82] = {.lex_state = 243},
  [83] = {.lex_state = 244},
  [84] = {.lex_state = 244},
  [85] = {.lex_state = 243},
  [86] = {.lex_state = 243},
  [87] = {.lex_state = 244},
  [88] = {.lex_state = 243},
  [89] = {.lex_state = 243},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 237},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 240},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 239},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 239},
  [105] = {.lex_state = 239},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 240},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 240},
  [112] = {.lex_state = 237},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 237},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 237},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 243},
  [142] = {.lex_state = 243},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 243},
  [145] = {.lex_state = 243},
  [146] = {.lex_state = 243},
  [147] = {.lex_state = 243},
  [148] = {.lex_state = 243},
  [149] = {.lex_state = 243},
  [150] = {.lex_state = 243},
  [151] = {.lex_state = 243},
  [152] = {.lex_state = 243},
  [153] = {.lex_state = 243},
  [154] = {.lex_state = 243},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 243},
  [157] = {.lex_state = 243},
  [158] = {.lex_state = 243},
  [159] = {.lex_state = 243},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 243},
  [165] = {.lex_state = 243},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 243},
  [169] = {.lex_state = 243},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 243},
  [176] = {.lex_state = 243},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 243},
  [181] = {.lex_state = 243},
  [182] = {.lex_state = 243},
  [183] = {.lex_state = 243},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 243},
  [187] = {.lex_state = 25},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 243},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 237},
  [192] = {.lex_state = 27},
  [193] = {.lex_state = 237},
  [194] = {.lex_state = 29},
  [195] = {.lex_state = 237},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 237},
  [198] = {.lex_state = 29},
  [199] = {.lex_state = 237},
  [200] = {.lex_state = 237},
  [201] = {.lex_state = 237},
  [202] = {.lex_state = 237},
  [203] = {.lex_state = 237},
  [204] = {.lex_state = 243},
  [205] = {.lex_state = 243},
  [206] = {.lex_state = 243},
  [207] = {.lex_state = 237},
  [208] = {.lex_state = 25},
  [209] = {.lex_state = 237},
  [210] = {.lex_state = 237},
  [211] = {.lex_state = 29},
  [212] = {.lex_state = 237},
  [213] = {.lex_state = 237},
  [214] = {.lex_state = 237},
  [215] = {.lex_state = 29},
  [216] = {.lex_state = 237},
  [217] = {.lex_state = 237},
  [218] = {.lex_state = 25},
  [219] = {.lex_state = 237},
  [220] = {.lex_state = 237},
  [221] = {.lex_state = 237},
  [222] = {.lex_state = 237},
  [223] = {.lex_state = 237},
  [224] = {.lex_state = 237},
  [225] = {.lex_state = 29},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_settings_section_token2] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(190),
    [sym_section] = STATE(63),
    [sym_settings_section] = STATE(122),
    [sym_variables_section] = STATE(122),
    [sym_keywords_section] = STATE(122),
    [sym_test_cases_or_tasks_section] = STATE(122),
    [sym__empty_line] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_source_file_repeat2] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_settings_section_token1] = ACTIONS(7),
    [aux_sym_variables_section_token1] = ACTIONS(9),
    [aux_sym_keywords_section_token1] = ACTIONS(11),
    [aux_sym_test_cases_or_tasks_section_token1] = ACTIONS(13),
    [aux_sym_test_cases_or_tasks_section_token2] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(15),
    [sym__line_break] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(19), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [42] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [84] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(25), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      sym__whitespace,
    ACTIONS(31), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [168] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(5), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(36), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym__whitespace,
    ACTIONS(54), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(48), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(59), 1,
      sym__line_break,
    STATE(13), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(65), 1,
      sym__line_break,
    STATE(7), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__whitespace,
    ACTIONS(67), 27,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(73), 1,
      sym__line_break,
    STATE(10), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(42), 17,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym__whitespace,
    ACTIONS(75), 27,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__whitespace,
    ACTIONS(79), 25,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym__whitespace,
    ACTIONS(83), 24,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_setting_statement_token1,
      aux_sym_setting_statement_token2,
      aux_sym_setting_statement_token3,
      aux_sym_setting_statement_token4,
      aux_sym_setting_statement_token5,
      aux_sym_setting_statement_token6,
      aux_sym_setting_statement_token7,
      aux_sym_setting_statement_token8,
      aux_sym_setting_statement_token9,
      aux_sym_setting_statement_token10,
      aux_sym_setting_statement_token11,
      aux_sym_setting_statement_token12,
      aux_sym_setting_statement_token13,
      aux_sym_setting_statement_token14,
      aux_sym_setting_statement_token15,
      aux_sym_setting_statement_token16,
      aux_sym_setting_statement_token17,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [643] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym__line_break,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(64), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(94), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    STATE(122), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [683] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(26), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_ellipses,
    ACTIONS(98), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(20), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [741] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(30), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [770] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym__separator,
    ACTIONS(108), 1,
      sym__whitespace,
    ACTIONS(111), 1,
      sym__line_break,
    STATE(22), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(103), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      sym__separator,
    ACTIONS(121), 1,
      sym__whitespace,
    ACTIONS(124), 1,
      sym__line_break,
    STATE(23), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(116), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [832] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_ellipses,
    ACTIONS(129), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(29), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [861] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(19), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [890] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_ellipses,
    ACTIONS(134), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(26), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [919] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym__separator,
    ACTIONS(143), 1,
      sym__whitespace,
    ACTIONS(145), 1,
      sym__line_break,
    STATE(23), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(139), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
  [950] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      sym__whitespace,
    ACTIONS(155), 1,
      sym__line_break,
    STATE(22), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(149), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_ellipses,
    ACTIONS(129), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(20), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1010] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(26), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1039] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_ellipses,
    ACTIONS(129), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(32), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1068] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_ellipses,
    ACTIONS(129), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(20), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1097] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(34), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(37), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(36), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1181] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_ellipses,
    ACTIONS(159), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(37), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1209] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_ellipses,
    ACTIONS(164), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(37), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1237] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      sym__line_break,
    STATE(42), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(169), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1268] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      anon_sym_,
    ACTIONS(186), 1,
      sym_text_chunk,
    ACTIONS(189), 1,
      sym__whitespace,
    ACTIONS(192), 1,
      sym__line_break,
    STATE(39), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(181), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(69), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1320] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      sym__whitespace,
    ACTIONS(205), 1,
      sym__line_break,
    STATE(39), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(197), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1351] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 1,
      anon_sym_,
    ACTIONS(214), 1,
      sym_test_case_or_task,
    ACTIONS(217), 1,
      sym__whitespace,
    ACTIONS(220), 1,
      sym__line_break,
    STATE(42), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(209), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(77), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [1403] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      sym__whitespace,
    ACTIONS(205), 1,
      sym__line_break,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(39), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(225), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1434] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      sym__line_break,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(42), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(229), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1465] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      sym__line_break,
    STATE(45), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(233), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1496] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(177), 1,
      sym__line_break,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(42), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(239), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(241), 1,
      sym__line_break,
    STATE(47), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(169), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1558] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      sym__whitespace,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      sym__line_break,
    STATE(41), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(245), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1589] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      sym__whitespace,
    ACTIONS(205), 1,
      sym__line_break,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    STATE(39), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(251), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1620] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      sym__whitespace,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 1,
      sym__line_break,
    STATE(44), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(251), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(69), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1672] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_,
    ACTIONS(201), 1,
      sym_text_chunk,
    ACTIONS(203), 1,
      sym__whitespace,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 1,
      sym__line_break,
    STATE(50), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(257), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1703] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_,
    ACTIONS(173), 1,
      sym_test_case_or_task,
    ACTIONS(175), 1,
      sym__whitespace,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 1,
      sym__line_break,
    STATE(38), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(263), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(77), 10,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1755] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      aux_sym_settings_section_token1,
    ACTIONS(272), 1,
      aux_sym_variables_section_token1,
    ACTIONS(275), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(278), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(56), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(122), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(285), 1,
      sym_text_chunk,
    ACTIONS(287), 1,
      anon_sym_RETURN,
    STATE(85), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(281), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [1811] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(291), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(293), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(289), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1837] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(291), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(293), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(295), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(77), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [1883] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(291), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(299), 1,
      sym__line_break,
    STATE(69), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(297), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1909] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(305), 1,
      sym_text_chunk,
    ACTIONS(307), 1,
      anon_sym_RETURN,
    STATE(87), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(301), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [1935] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(56), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(122), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1965] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(56), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(122), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1995] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(69), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [2015] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(316), 1,
      sym__whitespace,
    ACTIONS(319), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(311), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(291), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(324), 1,
      sym__line_break,
    STATE(59), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2067] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(291), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(328), 1,
      sym__line_break,
    STATE(58), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(326), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2093] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(291), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(293), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(326), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(332), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(336), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(340), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(344), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(348), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(352), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(332), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(356), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(360), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(364), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(356), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(336), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(352), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(344), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(368), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(368), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__separator,
      sym__whitespace,
  [2461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(340), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(360), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2499] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(79), 1,
      sym_arguments,
    STATE(158), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(112), 1,
      sym_arguments,
    STATE(142), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2555] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(88), 1,
      sym_arguments,
    STATE(147), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2583] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(82), 1,
      sym_arguments,
    STATE(147), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2611] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym__whitespace,
    ACTIONS(383), 1,
      sym__line_break,
    STATE(94), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    ACTIONS(378), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2633] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(75), 1,
      sym_arguments,
    STATE(147), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2661] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(81), 1,
      sym_arguments,
    STATE(147), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2689] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(89), 1,
      sym_arguments,
    STATE(147), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2717] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(114), 1,
      sym_arguments,
    STATE(142), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(388), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2763] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(78), 1,
      sym_arguments,
    STATE(158), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2791] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(80), 1,
      sym_arguments,
    STATE(158), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [2837] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(142), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(392), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [2883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(396), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [2901] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(105), 1,
      sym_arguments,
    STATE(149), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2929] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(104), 1,
      sym_arguments,
    STATE(149), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(400), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [2975] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      sym_arguments,
    STATE(158), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3003] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(72), 1,
      sym_arguments,
    STATE(158), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_text_chunk,
      sym__whitespace,
  [3049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym__whitespace,
    ACTIONS(402), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3066] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(372), 1,
      sym_text_chunk,
    ACTIONS(374), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(376), 1,
      anon_sym_AMP_LBRACE,
    STATE(169), 1,
      sym_argument,
    STATE(119), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym__whitespace,
    ACTIONS(406), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3108] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(410), 1,
      anon_sym_,
    ACTIONS(412), 1,
      sym_text_chunk,
    ACTIONS(414), 1,
      sym__separator,
    ACTIONS(416), 1,
      sym__line_break,
    STATE(116), 3,
      sym_scalar_variable,
      sym_empty_variable,
      aux_sym_argument_repeat1,
  [3132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(421), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(424), 1,
      sym_text_chunk,
    ACTIONS(427), 1,
      sym__separator,
    ACTIONS(429), 1,
      sym__line_break,
    STATE(116), 3,
      sym_scalar_variable,
      sym_empty_variable,
      aux_sym_argument_repeat1,
  [3156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym__separator,
    ACTIONS(143), 1,
      sym__whitespace,
    ACTIONS(431), 1,
      sym__line_break,
    STATE(99), 1,
      sym_keyword_definition_body,
    STATE(27), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [3178] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      sym__whitespace,
    ACTIONS(433), 1,
      sym__line_break,
    STATE(105), 1,
      sym_test_case_or_task_definition_body,
    STATE(28), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [3200] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(410), 1,
      anon_sym_,
    ACTIONS(435), 1,
      sym_text_chunk,
    ACTIONS(437), 1,
      sym__separator,
    ACTIONS(439), 1,
      sym__line_break,
    STATE(115), 3,
      sym_scalar_variable,
      sym_empty_variable,
      aux_sym_argument_repeat1,
  [3224] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      sym__whitespace,
    ACTIONS(433), 1,
      sym__line_break,
    STATE(104), 1,
      sym_test_case_or_task_definition_body,
    STATE(28), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [3246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym__separator,
    ACTIONS(143), 1,
      sym__whitespace,
    ACTIONS(431), 1,
      sym__line_break,
    STATE(108), 1,
      sym_keyword_definition_body,
    STATE(27), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [3268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(443), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(447), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(451), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(455), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(459), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(463), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(467), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(471), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(475), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3397] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(479), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(483), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(427), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(487), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym__separator,
    ACTIONS(493), 1,
      sym__whitespace,
    ACTIONS(495), 1,
      sym__line_break,
    STATE(118), 1,
      sym__empty_line,
  [3465] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym__whitespace,
    ACTIONS(497), 1,
      sym__separator,
    ACTIONS(499), 1,
      sym__line_break,
    STATE(120), 1,
      sym__empty_line,
  [3481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(501), 1,
      sym_text_chunk,
    STATE(134), 2,
      sym_scalar_variable,
      sym_empty_variable,
  [3495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__separator,
    ACTIONS(507), 1,
      sym__line_break,
    ACTIONS(503), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      sym__separator,
    ACTIONS(513), 1,
      sym__line_break,
    ACTIONS(509), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(517), 1,
      sym__line_break,
    STATE(148), 1,
      aux_sym_arguments_repeat1,
  [3536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(519), 1,
      sym__line_break,
    STATE(159), 1,
      aux_sym_arguments_repeat1,
  [3549] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(81), 2,
      sym__separator,
      sym__whitespace,
  [3560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(521), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(523), 1,
      sym__line_break,
    STATE(144), 1,
      aux_sym_arguments_repeat1,
  [3586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(525), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(527), 1,
      sym__line_break,
    STATE(146), 1,
      aux_sym_arguments_repeat1,
  [3612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(529), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(531), 1,
      sym__line_break,
    STATE(151), 1,
      aux_sym_arguments_repeat1,
  [3638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(533), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(535), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(537), 1,
      sym__line_break,
    STATE(157), 1,
      aux_sym_arguments_repeat1,
  [3677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(539), 1,
      sym__line_break,
    STATE(150), 1,
      aux_sym_arguments_repeat1,
  [3690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym__separator,
    ACTIONS(544), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3703] = 4,
    ACTIONS(546), 1,
      anon_sym_,
    ACTIONS(548), 1,
      sym_variable_name,
    ACTIONS(550), 1,
      anon_sym_EMPTY,
    ACTIONS(552), 1,
      sym_comment,
  [3716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(554), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3729] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(556), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(558), 1,
      sym__line_break,
    STATE(156), 1,
      aux_sym_arguments_repeat1,
  [3755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym__separator,
    ACTIONS(560), 1,
      sym__line_break,
    STATE(154), 1,
      aux_sym_arguments_repeat1,
  [3768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__separator,
    ACTIONS(562), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [3779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      aux_sym_settings_section_token3,
    ACTIONS(568), 1,
      sym__line_break,
  [3789] = 3,
    ACTIONS(552), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_variable_name,
    ACTIONS(572), 1,
      anon_sym_EMPTY,
  [3799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(576), 1,
      anon_sym_,
  [3809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym__separator,
    ACTIONS(580), 1,
      sym__line_break,
  [3819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym__separator,
    ACTIONS(584), 1,
      sym__line_break,
  [3829] = 3,
    ACTIONS(552), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_,
    ACTIONS(588), 1,
      sym_variable_name,
  [3839] = 3,
    ACTIONS(552), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_,
    ACTIONS(592), 1,
      sym_variable_name,
  [3849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      sym__separator,
    ACTIONS(596), 1,
      sym__line_break,
  [3859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym__line_break,
    ACTIONS(598), 1,
      sym__separator,
  [3869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      aux_sym_settings_section_token3,
    ACTIONS(602), 1,
      sym__line_break,
  [3879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
    ACTIONS(606), 1,
      anon_sym_,
  [3889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(610), 1,
      anon_sym_,
  [3899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    ACTIONS(614), 1,
      anon_sym_,
  [3909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    ACTIONS(618), 1,
      anon_sym_,
  [3919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym__separator,
    ACTIONS(622), 1,
      sym__line_break,
  [3929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym__separator,
    ACTIONS(626), 1,
      sym__line_break,
  [3939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    ACTIONS(630), 1,
      anon_sym_,
  [3949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    ACTIONS(634), 1,
      anon_sym_,
  [3959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      aux_sym_settings_section_token3,
    ACTIONS(638), 1,
      sym__line_break,
  [3969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      sym__separator,
    ACTIONS(642), 1,
      sym__line_break,
  [3979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym__separator,
    ACTIONS(646), 1,
      sym__line_break,
  [3989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__separator,
    ACTIONS(650), 1,
      sym__line_break,
  [3999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__separator,
    ACTIONS(654), 1,
      sym__line_break,
  [4009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      aux_sym_settings_section_token3,
    ACTIONS(658), 1,
      sym__line_break,
  [4019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    ACTIONS(662), 1,
      anon_sym_,
  [4029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym__separator,
    ACTIONS(666), 1,
      sym__line_break,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      aux_sym_settings_section_token2,
  [4046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      aux_sym_settings_section_token2,
  [4053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym__separator,
  [4060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      ts_builtin_sym_end,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym__line_break,
  [4074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      sym_test_case_or_task,
  [4081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym__line_break,
  [4088] = 2,
    ACTIONS(552), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_variable_name,
  [4095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_text_chunk,
  [4109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      sym__line_break,
  [4116] = 2,
    ACTIONS(552), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_variable_name,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym__line_break,
  [4130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__line_break,
  [4137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
  [4144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__line_break,
  [4151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      sym__line_break,
  [4158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym__separator,
  [4165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      sym__separator,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym__separator,
  [4179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym__line_break,
  [4186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_settings_section_token2,
  [4193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
  [4200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
  [4207] = 2,
    ACTIONS(552), 1,
      sym_comment,
    ACTIONS(712), 1,
      sym_variable_name,
  [4214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__line_break,
  [4221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
  [4228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
  [4235] = 2,
    ACTIONS(552), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_variable_name,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
  [4249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym__line_break,
  [4256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      aux_sym_settings_section_token2,
  [4263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
  [4270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
  [4277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
  [4284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym__line_break,
  [4291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      sym__line_break,
  [4298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
  [4305] = 2,
    ACTIONS(552), 1,
      sym_comment,
    ACTIONS(736), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 498,
  [SMALL_STATE(15)] = 540,
  [SMALL_STATE(16)] = 576,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 712,
  [SMALL_STATE(21)] = 741,
  [SMALL_STATE(22)] = 770,
  [SMALL_STATE(23)] = 801,
  [SMALL_STATE(24)] = 832,
  [SMALL_STATE(25)] = 861,
  [SMALL_STATE(26)] = 890,
  [SMALL_STATE(27)] = 919,
  [SMALL_STATE(28)] = 950,
  [SMALL_STATE(29)] = 981,
  [SMALL_STATE(30)] = 1010,
  [SMALL_STATE(31)] = 1039,
  [SMALL_STATE(32)] = 1068,
  [SMALL_STATE(33)] = 1097,
  [SMALL_STATE(34)] = 1125,
  [SMALL_STATE(35)] = 1153,
  [SMALL_STATE(36)] = 1181,
  [SMALL_STATE(37)] = 1209,
  [SMALL_STATE(38)] = 1237,
  [SMALL_STATE(39)] = 1268,
  [SMALL_STATE(40)] = 1299,
  [SMALL_STATE(41)] = 1320,
  [SMALL_STATE(42)] = 1351,
  [SMALL_STATE(43)] = 1382,
  [SMALL_STATE(44)] = 1403,
  [SMALL_STATE(45)] = 1434,
  [SMALL_STATE(46)] = 1465,
  [SMALL_STATE(47)] = 1496,
  [SMALL_STATE(48)] = 1527,
  [SMALL_STATE(49)] = 1558,
  [SMALL_STATE(50)] = 1589,
  [SMALL_STATE(51)] = 1620,
  [SMALL_STATE(52)] = 1651,
  [SMALL_STATE(53)] = 1672,
  [SMALL_STATE(54)] = 1703,
  [SMALL_STATE(55)] = 1734,
  [SMALL_STATE(56)] = 1755,
  [SMALL_STATE(57)] = 1785,
  [SMALL_STATE(58)] = 1811,
  [SMALL_STATE(59)] = 1837,
  [SMALL_STATE(60)] = 1863,
  [SMALL_STATE(61)] = 1883,
  [SMALL_STATE(62)] = 1909,
  [SMALL_STATE(63)] = 1935,
  [SMALL_STATE(64)] = 1965,
  [SMALL_STATE(65)] = 1995,
  [SMALL_STATE(66)] = 2015,
  [SMALL_STATE(67)] = 2041,
  [SMALL_STATE(68)] = 2067,
  [SMALL_STATE(69)] = 2093,
  [SMALL_STATE(70)] = 2119,
  [SMALL_STATE(71)] = 2138,
  [SMALL_STATE(72)] = 2157,
  [SMALL_STATE(73)] = 2176,
  [SMALL_STATE(74)] = 2195,
  [SMALL_STATE(75)] = 2214,
  [SMALL_STATE(76)] = 2233,
  [SMALL_STATE(77)] = 2252,
  [SMALL_STATE(78)] = 2271,
  [SMALL_STATE(79)] = 2290,
  [SMALL_STATE(80)] = 2309,
  [SMALL_STATE(81)] = 2328,
  [SMALL_STATE(82)] = 2347,
  [SMALL_STATE(83)] = 2366,
  [SMALL_STATE(84)] = 2385,
  [SMALL_STATE(85)] = 2404,
  [SMALL_STATE(86)] = 2423,
  [SMALL_STATE(87)] = 2442,
  [SMALL_STATE(88)] = 2461,
  [SMALL_STATE(89)] = 2480,
  [SMALL_STATE(90)] = 2499,
  [SMALL_STATE(91)] = 2527,
  [SMALL_STATE(92)] = 2555,
  [SMALL_STATE(93)] = 2583,
  [SMALL_STATE(94)] = 2611,
  [SMALL_STATE(95)] = 2633,
  [SMALL_STATE(96)] = 2661,
  [SMALL_STATE(97)] = 2689,
  [SMALL_STATE(98)] = 2717,
  [SMALL_STATE(99)] = 2745,
  [SMALL_STATE(100)] = 2763,
  [SMALL_STATE(101)] = 2791,
  [SMALL_STATE(102)] = 2819,
  [SMALL_STATE(103)] = 2837,
  [SMALL_STATE(104)] = 2865,
  [SMALL_STATE(105)] = 2883,
  [SMALL_STATE(106)] = 2901,
  [SMALL_STATE(107)] = 2929,
  [SMALL_STATE(108)] = 2957,
  [SMALL_STATE(109)] = 2975,
  [SMALL_STATE(110)] = 3003,
  [SMALL_STATE(111)] = 3031,
  [SMALL_STATE(112)] = 3049,
  [SMALL_STATE(113)] = 3066,
  [SMALL_STATE(114)] = 3091,
  [SMALL_STATE(115)] = 3108,
  [SMALL_STATE(116)] = 3132,
  [SMALL_STATE(117)] = 3156,
  [SMALL_STATE(118)] = 3178,
  [SMALL_STATE(119)] = 3200,
  [SMALL_STATE(120)] = 3224,
  [SMALL_STATE(121)] = 3246,
  [SMALL_STATE(122)] = 3268,
  [SMALL_STATE(123)] = 3280,
  [SMALL_STATE(124)] = 3293,
  [SMALL_STATE(125)] = 3306,
  [SMALL_STATE(126)] = 3319,
  [SMALL_STATE(127)] = 3332,
  [SMALL_STATE(128)] = 3345,
  [SMALL_STATE(129)] = 3358,
  [SMALL_STATE(130)] = 3371,
  [SMALL_STATE(131)] = 3384,
  [SMALL_STATE(132)] = 3397,
  [SMALL_STATE(133)] = 3410,
  [SMALL_STATE(134)] = 3423,
  [SMALL_STATE(135)] = 3436,
  [SMALL_STATE(136)] = 3449,
  [SMALL_STATE(137)] = 3465,
  [SMALL_STATE(138)] = 3481,
  [SMALL_STATE(139)] = 3495,
  [SMALL_STATE(140)] = 3509,
  [SMALL_STATE(141)] = 3523,
  [SMALL_STATE(142)] = 3536,
  [SMALL_STATE(143)] = 3549,
  [SMALL_STATE(144)] = 3560,
  [SMALL_STATE(145)] = 3573,
  [SMALL_STATE(146)] = 3586,
  [SMALL_STATE(147)] = 3599,
  [SMALL_STATE(148)] = 3612,
  [SMALL_STATE(149)] = 3625,
  [SMALL_STATE(150)] = 3638,
  [SMALL_STATE(151)] = 3651,
  [SMALL_STATE(152)] = 3664,
  [SMALL_STATE(153)] = 3677,
  [SMALL_STATE(154)] = 3690,
  [SMALL_STATE(155)] = 3703,
  [SMALL_STATE(156)] = 3716,
  [SMALL_STATE(157)] = 3729,
  [SMALL_STATE(158)] = 3742,
  [SMALL_STATE(159)] = 3755,
  [SMALL_STATE(160)] = 3768,
  [SMALL_STATE(161)] = 3779,
  [SMALL_STATE(162)] = 3789,
  [SMALL_STATE(163)] = 3799,
  [SMALL_STATE(164)] = 3809,
  [SMALL_STATE(165)] = 3819,
  [SMALL_STATE(166)] = 3829,
  [SMALL_STATE(167)] = 3839,
  [SMALL_STATE(168)] = 3849,
  [SMALL_STATE(169)] = 3859,
  [SMALL_STATE(170)] = 3869,
  [SMALL_STATE(171)] = 3879,
  [SMALL_STATE(172)] = 3889,
  [SMALL_STATE(173)] = 3899,
  [SMALL_STATE(174)] = 3909,
  [SMALL_STATE(175)] = 3919,
  [SMALL_STATE(176)] = 3929,
  [SMALL_STATE(177)] = 3939,
  [SMALL_STATE(178)] = 3949,
  [SMALL_STATE(179)] = 3959,
  [SMALL_STATE(180)] = 3969,
  [SMALL_STATE(181)] = 3979,
  [SMALL_STATE(182)] = 3989,
  [SMALL_STATE(183)] = 3999,
  [SMALL_STATE(184)] = 4009,
  [SMALL_STATE(185)] = 4019,
  [SMALL_STATE(186)] = 4029,
  [SMALL_STATE(187)] = 4039,
  [SMALL_STATE(188)] = 4046,
  [SMALL_STATE(189)] = 4053,
  [SMALL_STATE(190)] = 4060,
  [SMALL_STATE(191)] = 4067,
  [SMALL_STATE(192)] = 4074,
  [SMALL_STATE(193)] = 4081,
  [SMALL_STATE(194)] = 4088,
  [SMALL_STATE(195)] = 4095,
  [SMALL_STATE(196)] = 4102,
  [SMALL_STATE(197)] = 4109,
  [SMALL_STATE(198)] = 4116,
  [SMALL_STATE(199)] = 4123,
  [SMALL_STATE(200)] = 4130,
  [SMALL_STATE(201)] = 4137,
  [SMALL_STATE(202)] = 4144,
  [SMALL_STATE(203)] = 4151,
  [SMALL_STATE(204)] = 4158,
  [SMALL_STATE(205)] = 4165,
  [SMALL_STATE(206)] = 4172,
  [SMALL_STATE(207)] = 4179,
  [SMALL_STATE(208)] = 4186,
  [SMALL_STATE(209)] = 4193,
  [SMALL_STATE(210)] = 4200,
  [SMALL_STATE(211)] = 4207,
  [SMALL_STATE(212)] = 4214,
  [SMALL_STATE(213)] = 4221,
  [SMALL_STATE(214)] = 4228,
  [SMALL_STATE(215)] = 4235,
  [SMALL_STATE(216)] = 4242,
  [SMALL_STATE(217)] = 4249,
  [SMALL_STATE(218)] = 4256,
  [SMALL_STATE(219)] = 4263,
  [SMALL_STATE(220)] = 4270,
  [SMALL_STATE(221)] = 4277,
  [SMALL_STATE(222)] = 4284,
  [SMALL_STATE(223)] = 4291,
  [SMALL_STATE(224)] = 4298,
  [SMALL_STATE(225)] = 4305,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(141),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(189),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(191),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(153),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(153),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(57),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(223),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(22),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(62),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(222),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(23),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(145),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(145),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(152),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(152),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(196),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(193),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(199),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(39),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(192),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(137),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(212),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(42),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keywords_section, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(180),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(182),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(164),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(175),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(198),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(191),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(66),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2, .production_id = 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2, .production_id = 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3, .production_id = 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3, .production_id = 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(138),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(155),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(116),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 5),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 5),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 3),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 4),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(113),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [674] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_robot(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
