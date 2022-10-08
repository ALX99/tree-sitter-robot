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
#define STATE_COUNT 304
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

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
  aux_sym_keyword_token1 = 42,
  aux_sym_keyword_token2 = 43,
  aux_sym_keyword_token3 = 44,
  aux_sym_keyword_token4 = 45,
  sym_text_chunk = 46,
  anon_sym_RETURN = 47,
  sym_variable_name = 48,
  anon_sym_AT_LBRACE = 49,
  anon_sym_AMP_LBRACE = 50,
  anon_sym_EMPTY = 51,
  sym_comment = 52,
  sym__separator = 53,
  sym__whitespace = 54,
  sym__line_break = 55,
  sym_source_file = 56,
  sym_section = 57,
  sym_settings_section = 58,
  sym_setting_statement = 59,
  sym_variables_section = 60,
  sym_variable_definition = 61,
  sym_keywords_section = 62,
  sym_keyword_definition = 63,
  sym_keyword_definition_body = 64,
  sym_keyword_setting = 65,
  sym_test_cases_or_tasks_section = 66,
  sym_test_case_or_task_definition = 67,
  sym_test_case_or_task_definition_body = 68,
  sym_test_case_or_task_setting = 69,
  sym_statement = 70,
  sym_variable_assignment = 71,
  sym_keyword_invocation = 72,
  sym_arguments = 73,
  sym_continuation = 74,
  sym_argument = 75,
  sym_keyword = 76,
  sym_return_statement = 77,
  sym_list_variable = 78,
  sym_scalar_variable = 79,
  sym_dictionary_variable = 80,
  sym_empty_variable = 81,
  sym__empty_line = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_source_file_repeat2 = 84,
  aux_sym_settings_section_repeat1 = 85,
  aux_sym_variables_section_repeat1 = 86,
  aux_sym_keywords_section_repeat1 = 87,
  aux_sym_keyword_definition_body_repeat1 = 88,
  aux_sym_test_cases_or_tasks_section_repeat1 = 89,
  aux_sym_test_case_or_task_definition_body_repeat1 = 90,
  aux_sym_arguments_repeat1 = 91,
  aux_sym_arguments_repeat2 = 92,
  aux_sym_argument_repeat1 = 93,
  aux_sym_keyword_repeat1 = 94,
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
  [aux_sym_keyword_token1] = "keyword_token1",
  [aux_sym_keyword_token2] = "keyword_token2",
  [aux_sym_keyword_token3] = "keyword_token3",
  [aux_sym_keyword_token4] = "keyword_token4",
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
  [sym_keyword] = "keyword",
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
  [aux_sym_keyword_repeat1] = "keyword_repeat1",
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
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [aux_sym_keyword_token2] = aux_sym_keyword_token2,
  [aux_sym_keyword_token3] = aux_sym_keyword_token3,
  [aux_sym_keyword_token4] = aux_sym_keyword_token4,
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
  [sym_keyword] = sym_keyword,
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
  [aux_sym_keyword_repeat1] = aux_sym_keyword_repeat1,
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
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyword_token4] = {
    .visible = false,
    .named = false,
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
  [sym_keyword] = {
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
  [aux_sym_keyword_repeat1] = {
    .visible = false,
    .named = false,
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_keyword, 2,
    sym_keyword,
    sym_test_case_or_task,
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
  [19] = 19,
  [20] = 6,
  [21] = 5,
  [22] = 22,
  [23] = 2,
  [24] = 6,
  [25] = 3,
  [26] = 2,
  [27] = 3,
  [28] = 4,
  [29] = 4,
  [30] = 5,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 6,
  [38] = 38,
  [39] = 39,
  [40] = 2,
  [41] = 3,
  [42] = 4,
  [43] = 43,
  [44] = 5,
  [45] = 45,
  [46] = 46,
  [47] = 7,
  [48] = 38,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 8,
  [53] = 53,
  [54] = 54,
  [55] = 8,
  [56] = 56,
  [57] = 7,
  [58] = 58,
  [59] = 59,
  [60] = 33,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 7,
  [66] = 66,
  [67] = 67,
  [68] = 8,
  [69] = 69,
  [70] = 70,
  [71] = 64,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 16,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 81,
  [86] = 84,
  [87] = 87,
  [88] = 87,
  [89] = 89,
  [90] = 78,
  [91] = 77,
  [92] = 76,
  [93] = 16,
  [94] = 82,
  [95] = 89,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 16,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 16,
  [111] = 111,
  [112] = 112,
  [113] = 105,
  [114] = 114,
  [115] = 115,
  [116] = 107,
  [117] = 96,
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
  [134] = 126,
  [135] = 128,
  [136] = 127,
  [137] = 137,
  [138] = 138,
  [139] = 124,
  [140] = 140,
  [141] = 125,
  [142] = 119,
  [143] = 130,
  [144] = 133,
  [145] = 122,
  [146] = 132,
  [147] = 120,
  [148] = 148,
  [149] = 118,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 129,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 119,
  [158] = 158,
  [159] = 126,
  [160] = 127,
  [161] = 118,
  [162] = 129,
  [163] = 128,
  [164] = 133,
  [165] = 130,
  [166] = 132,
  [167] = 125,
  [168] = 124,
  [169] = 122,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 173,
  [175] = 175,
  [176] = 176,
  [177] = 175,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 176,
  [183] = 176,
  [184] = 179,
  [185] = 185,
  [186] = 175,
  [187] = 175,
  [188] = 178,
  [189] = 16,
  [190] = 180,
  [191] = 176,
  [192] = 192,
  [193] = 179,
  [194] = 178,
  [195] = 180,
  [196] = 178,
  [197] = 197,
  [198] = 197,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 200,
  [206] = 206,
  [207] = 201,
  [208] = 202,
  [209] = 202,
  [210] = 201,
  [211] = 197,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 200,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 224,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 223,
  [231] = 203,
  [232] = 212,
  [233] = 222,
  [234] = 221,
  [235] = 224,
  [236] = 223,
  [237] = 222,
  [238] = 221,
  [239] = 214,
  [240] = 216,
  [241] = 214,
  [242] = 216,
  [243] = 219,
  [244] = 212,
  [245] = 220,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 247,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 256,
  [259] = 259,
  [260] = 260,
  [261] = 246,
  [262] = 246,
  [263] = 248,
  [264] = 249,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 256,
  [272] = 259,
  [273] = 273,
  [274] = 248,
  [275] = 259,
  [276] = 249,
  [277] = 277,
  [278] = 247,
  [279] = 252,
  [280] = 253,
  [281] = 254,
  [282] = 252,
  [283] = 246,
  [284] = 253,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 246,
  [289] = 246,
  [290] = 290,
  [291] = 254,
  [292] = 292,
  [293] = 293,
  [294] = 260,
  [295] = 257,
  [296] = 293,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 260,
  [302] = 257,
  [303] = 268,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(306);
      if (lookahead == '\t') ADVANCE(310);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '=') ADVANCE(334);
      if (lookahead == '}') ADVANCE(333);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(309);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(345);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '}') ADVANCE(333);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '=') ADVANCE(335);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(448);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(448);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '=') ADVANCE(334);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(448);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(421);
      if (lookahead == '[') ADVANCE(417);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(448);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '$') ADVANCE(428);
      if (lookahead == '&') ADVANCE(429);
      if (lookahead == '@') ADVANCE(430);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '#') ADVANCE(434);
      if (lookahead == 'E') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '#') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(170);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '.') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == ']') ADVANCE(348);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == ']') ADVANCE(357);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ']') ADVANCE(352);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ']') ADVANCE(351);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ']') ADVANCE(358);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ']') ADVANCE(347);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ']') ADVANCE(350);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == ']') ADVANCE(349);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(259);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(269);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '$') ADVANCE(422);
      if (lookahead == 'R') ADVANCE(421);
      if (lookahead == '[') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(416);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(416);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(434);
      if (lookahead == 'E') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(355);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(336);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(307);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(330);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(353);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(361);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(363);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(433);
      END_STATE();
    case 68:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(348);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(357);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(352);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(351);
      END_STATE();
    case 75:
      if (lookahead == ']') ADVANCE(358);
      END_STATE();
    case 76:
      if (lookahead == ']') ADVANCE(347);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(350);
      END_STATE();
    case 78:
      if (lookahead == ']') ADVANCE(349);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(332);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(359);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 81:
      if (lookahead == '{') ADVANCE(443);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 82:
      if (lookahead == '{') ADVANCE(441);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 83:
      if (lookahead == '{') ADVANCE(431);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(220);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 111:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 112:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 113:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(273);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(155);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 155:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 156:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 157:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 158:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 159:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(284);
      END_STATE();
    case 160:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 168:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 169:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 170:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(130);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 171:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(229);
      END_STATE();
    case 172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 176:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 177:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 178:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 179:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 180:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(143);
      END_STATE();
    case 181:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 182:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 183:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 194:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 207:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 208:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 209:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 210:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 211:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 212:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 213:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 214:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 224:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 227:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(315);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(321);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(272);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(250);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 241:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      END_STATE();
    case 242:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      END_STATE();
    case 243:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 244:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 245:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 246:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(154);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 273:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 274:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 275:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 276:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 277:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 278:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 279:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 280:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 281:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 282:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 283:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 284:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 285:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 286:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 287:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(185);
      END_STATE();
    case 288:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(186);
      END_STATE();
    case 289:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(187);
      END_STATE();
    case 290:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(188);
      END_STATE();
    case 291:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 292:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 294:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(431);
      END_STATE();
    case 295:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(408);
      END_STATE();
    case 296:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(446);
      END_STATE();
    case 297:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(431);
      END_STATE();
    case 298:
      if (eof) ADVANCE(306);
      if (lookahead == '\t') ADVANCE(451);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(449);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '}') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '@') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(275);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 299:
      if (eof) ADVANCE(306);
      if (lookahead == '\t') ADVANCE(451);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 300:
      if (eof) ADVANCE(306);
      if (lookahead == '\t') ADVANCE(452);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 301:
      if (eof) ADVANCE(306);
      if (lookahead == '\t') ADVANCE(452);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 302:
      if (eof) ADVANCE(306);
      if (lookahead == '\t') ADVANCE(448);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 303:
      if (eof) ADVANCE(306);
      if (lookahead == '\t') ADVANCE(448);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 304:
      if (eof) ADVANCE(306);
      if (lookahead == '\t') ADVANCE(447);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 305:
      if (eof) ADVANCE(306);
      if (lookahead == '\t') ADVANCE(447);
      if (lookahead == '\n') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(454);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '#') ADVANCE(296);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(423);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(452);
      if (lookahead == ' ') ADVANCE(451);
      if (lookahead == '#') ADVANCE(296);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(452);
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '#') ADVANCE(296);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(452);
      if (lookahead == ' ') ADVANCE(447);
      if (lookahead == '#') ADVANCE(296);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(452);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(423);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '{') ADVANCE(431);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '.') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(395);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(382);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(376);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(408);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(207);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '{') ADVANCE(359);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(446);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(446);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '{') ADVANCE(444);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '{') ADVANCE(442);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '{') ADVANCE(83);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text_chunk);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(446);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'M') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'T') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'Y') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      if (lookahead == '{') ADVANCE(431);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      if (lookahead == '{') ADVANCE(431);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(440);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(452);
      if (lookahead == ' ') ADVANCE(451);
      if (lookahead == '#') ADVANCE(296);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(452);
      if (lookahead == ' ') ADVANCE(448);
      if (lookahead == '#') ADVANCE(296);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(453);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 298},
  [2] = {.lex_state = 298},
  [3] = {.lex_state = 298},
  [4] = {.lex_state = 298},
  [5] = {.lex_state = 298},
  [6] = {.lex_state = 298},
  [7] = {.lex_state = 298},
  [8] = {.lex_state = 298},
  [9] = {.lex_state = 298},
  [10] = {.lex_state = 298},
  [11] = {.lex_state = 298},
  [12] = {.lex_state = 298},
  [13] = {.lex_state = 298},
  [14] = {.lex_state = 298},
  [15] = {.lex_state = 298},
  [16] = {.lex_state = 298},
  [17] = {.lex_state = 298},
  [18] = {.lex_state = 298},
  [19] = {.lex_state = 302},
  [20] = {.lex_state = 305},
  [21] = {.lex_state = 305},
  [22] = {.lex_state = 303},
  [23] = {.lex_state = 305},
  [24] = {.lex_state = 304},
  [25] = {.lex_state = 305},
  [26] = {.lex_state = 304},
  [27] = {.lex_state = 304},
  [28] = {.lex_state = 305},
  [29] = {.lex_state = 304},
  [30] = {.lex_state = 304},
  [31] = {.lex_state = 302},
  [32] = {.lex_state = 303},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 301},
  [35] = {.lex_state = 301},
  [36] = {.lex_state = 301},
  [37] = {.lex_state = 299},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 301},
  [40] = {.lex_state = 299},
  [41] = {.lex_state = 299},
  [42] = {.lex_state = 299},
  [43] = {.lex_state = 301},
  [44] = {.lex_state = 299},
  [45] = {.lex_state = 301},
  [46] = {.lex_state = 301},
  [47] = {.lex_state = 304},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 300},
  [51] = {.lex_state = 300},
  [52] = {.lex_state = 305},
  [53] = {.lex_state = 300},
  [54] = {.lex_state = 300},
  [55] = {.lex_state = 304},
  [56] = {.lex_state = 300},
  [57] = {.lex_state = 305},
  [58] = {.lex_state = 300},
  [59] = {.lex_state = 300},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 298},
  [63] = {.lex_state = 298},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 299},
  [66] = {.lex_state = 298},
  [67] = {.lex_state = 298},
  [68] = {.lex_state = 299},
  [69] = {.lex_state = 298},
  [70] = {.lex_state = 298},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 298},
  [73] = {.lex_state = 298},
  [74] = {.lex_state = 298},
  [75] = {.lex_state = 298},
  [76] = {.lex_state = 303},
  [77] = {.lex_state = 303},
  [78] = {.lex_state = 303},
  [79] = {.lex_state = 303},
  [80] = {.lex_state = 303},
  [81] = {.lex_state = 302},
  [82] = {.lex_state = 303},
  [83] = {.lex_state = 302},
  [84] = {.lex_state = 302},
  [85] = {.lex_state = 303},
  [86] = {.lex_state = 303},
  [87] = {.lex_state = 303},
  [88] = {.lex_state = 302},
  [89] = {.lex_state = 302},
  [90] = {.lex_state = 302},
  [91] = {.lex_state = 302},
  [92] = {.lex_state = 302},
  [93] = {.lex_state = 302},
  [94] = {.lex_state = 302},
  [95] = {.lex_state = 303},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 301},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 300},
  [103] = {.lex_state = 298},
  [104] = {.lex_state = 301},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 301},
  [110] = {.lex_state = 300},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 300},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 298},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 298},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 298},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 302},
  [176] = {.lex_state = 302},
  [177] = {.lex_state = 302},
  [178] = {.lex_state = 302},
  [179] = {.lex_state = 302},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 302},
  [182] = {.lex_state = 302},
  [183] = {.lex_state = 302},
  [184] = {.lex_state = 302},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 302},
  [187] = {.lex_state = 302},
  [188] = {.lex_state = 302},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 302},
  [192] = {.lex_state = 302},
  [193] = {.lex_state = 302},
  [194] = {.lex_state = 302},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 302},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 39},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 302},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 39},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 38},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 302},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 39},
  [218] = {.lex_state = 302},
  [219] = {.lex_state = 302},
  [220] = {.lex_state = 302},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 302},
  [227] = {.lex_state = 302},
  [228] = {.lex_state = 302},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 302},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 302},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 302},
  [246] = {.lex_state = 298},
  [247] = {.lex_state = 298},
  [248] = {.lex_state = 298},
  [249] = {.lex_state = 298},
  [250] = {.lex_state = 37},
  [251] = {.lex_state = 298},
  [252] = {.lex_state = 298},
  [253] = {.lex_state = 298},
  [254] = {.lex_state = 298},
  [255] = {.lex_state = 302},
  [256] = {.lex_state = 298},
  [257] = {.lex_state = 40},
  [258] = {.lex_state = 298},
  [259] = {.lex_state = 298},
  [260] = {.lex_state = 40},
  [261] = {.lex_state = 298},
  [262] = {.lex_state = 298},
  [263] = {.lex_state = 298},
  [264] = {.lex_state = 298},
  [265] = {.lex_state = 35},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 302},
  [268] = {.lex_state = 40},
  [269] = {.lex_state = 302},
  [270] = {.lex_state = 298},
  [271] = {.lex_state = 298},
  [272] = {.lex_state = 298},
  [273] = {.lex_state = 35},
  [274] = {.lex_state = 298},
  [275] = {.lex_state = 298},
  [276] = {.lex_state = 298},
  [277] = {.lex_state = 298},
  [278] = {.lex_state = 298},
  [279] = {.lex_state = 298},
  [280] = {.lex_state = 298},
  [281] = {.lex_state = 298},
  [282] = {.lex_state = 298},
  [283] = {.lex_state = 298},
  [284] = {.lex_state = 298},
  [285] = {.lex_state = 298},
  [286] = {.lex_state = 298},
  [287] = {.lex_state = 298},
  [288] = {.lex_state = 298},
  [289] = {.lex_state = 298},
  [290] = {.lex_state = 298},
  [291] = {.lex_state = 298},
  [292] = {.lex_state = 35},
  [293] = {.lex_state = 298},
  [294] = {.lex_state = 40},
  [295] = {.lex_state = 40},
  [296] = {.lex_state = 298},
  [297] = {.lex_state = 298},
  [298] = {.lex_state = 40},
  [299] = {.lex_state = 35},
  [300] = {.lex_state = 302},
  [301] = {.lex_state = 40},
  [302] = {.lex_state = 40},
  [303] = {.lex_state = 40},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_settings_section_token2] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [aux_sym_keyword_token3] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(266),
    [sym_section] = STATE(69),
    [sym_settings_section] = STATE(156),
    [sym_variables_section] = STATE(156),
    [sym_keywords_section] = STATE(156),
    [sym_test_cases_or_tasks_section] = STATE(156),
    [sym__empty_line] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_source_file_repeat2] = STATE(69),
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
  [210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__whitespace,
    ACTIONS(40), 27,
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
  [246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym__whitespace,
    ACTIONS(44), 27,
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
  [282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(52), 1,
      sym__line_break,
    STATE(15), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(50), 17,
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
  [324] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym__line_break,
    STATE(9), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(50), 17,
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
  [366] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(60), 1,
      sym__line_break,
    STATE(14), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(50), 17,
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
  [408] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(52), 1,
      sym__line_break,
    STATE(15), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(50), 17,
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
  [450] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(64), 1,
      sym__line_break,
    STATE(12), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(50), 17,
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
  [492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(52), 1,
      sym__line_break,
    STATE(15), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(50), 17,
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
  [534] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym__whitespace,
    ACTIONS(76), 1,
      sym__line_break,
    STATE(15), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    ACTIONS(70), 17,
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
    STATE(66), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(103), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    STATE(156), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [683] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym__separator,
    ACTIONS(97), 1,
      sym__whitespace,
    ACTIONS(99), 1,
      sym__line_break,
    STATE(31), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(93), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(36), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(29), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [768] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__separator,
    ACTIONS(112), 1,
      sym__whitespace,
    ACTIONS(114), 1,
      sym__line_break,
    ACTIONS(108), 2,
      anon_sym_,
      aux_sym_keyword_token1,
    STATE(32), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(25), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(19), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_ellipses,
    ACTIONS(118), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(30), 2,
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
  [855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(21), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [882] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_ellipses,
    ACTIONS(118), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(27), 2,
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
  [911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_ellipses,
    ACTIONS(118), 1,
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
  [940] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(20), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [967] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_ellipses,
    ACTIONS(118), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(24), 2,
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
  [996] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_ellipses,
    ACTIONS(123), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(30), 2,
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
  [1025] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym__separator,
    ACTIONS(133), 1,
      sym__whitespace,
    ACTIONS(136), 1,
      sym__line_break,
    STATE(31), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(128), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [1056] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym__separator,
    ACTIONS(146), 1,
      sym__whitespace,
    ACTIONS(149), 1,
      sym__line_break,
    ACTIONS(141), 2,
      anon_sym_,
      aux_sym_keyword_token1,
    STATE(32), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1087] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_,
    ACTIONS(155), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(161), 1,
      aux_sym_keyword_token4,
    ACTIONS(164), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(167), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(170), 1,
      sym__separator,
    ACTIONS(172), 1,
      sym__line_break,
    ACTIONS(158), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(33), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [1123] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(178), 1,
      aux_sym_keyword_token1,
    ACTIONS(180), 1,
      sym__whitespace,
    ACTIONS(182), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(43), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1155] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(178), 1,
      aux_sym_keyword_token1,
    ACTIONS(180), 1,
      sym__whitespace,
    ACTIONS(186), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(46), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1187] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(178), 1,
      aux_sym_keyword_token1,
    ACTIONS(180), 1,
      sym__whitespace,
    ACTIONS(182), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(43), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1219] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_ellipses,
    ACTIONS(190), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(44), 2,
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
  [1247] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(204), 1,
      sym__separator,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(196), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(33), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [1283] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(178), 1,
      aux_sym_keyword_token1,
    ACTIONS(180), 1,
      sym__whitespace,
    ACTIONS(210), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(36), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1315] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_ellipses,
    ACTIONS(190), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(41), 2,
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
  [1343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_ellipses,
    ACTIONS(190), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(44), 2,
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
  [1371] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_ellipses,
    ACTIONS(190), 1,
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
  [1399] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_,
    ACTIONS(217), 1,
      aux_sym_keyword_token1,
    ACTIONS(220), 1,
      sym__whitespace,
    ACTIONS(223), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(43), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1431] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_ellipses,
    ACTIONS(229), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(44), 2,
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
  [1459] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(178), 1,
      aux_sym_keyword_token1,
    ACTIONS(180), 1,
      sym__whitespace,
    ACTIONS(234), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(34), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1491] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(178), 1,
      aux_sym_keyword_token1,
    ACTIONS(180), 1,
      sym__whitespace,
    ACTIONS(182), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(43), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(42), 10,
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
  [1544] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(238), 1,
      anon_sym_,
    ACTIONS(240), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(244), 1,
      aux_sym_keyword_token4,
    ACTIONS(246), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(248), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(242), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(60), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [1577] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(254), 1,
      aux_sym_keyword_token1,
    ACTIONS(256), 1,
      anon_sym_RETURN,
    STATE(243), 1,
      sym_keyword,
    STATE(89), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(250), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [1606] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      anon_sym_,
    ACTIONS(265), 1,
      sym_test_case_or_task,
    ACTIONS(268), 1,
      sym__whitespace,
    ACTIONS(271), 1,
      sym__line_break,
    STATE(50), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(260), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1637] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(280), 1,
      sym_test_case_or_task,
    ACTIONS(282), 1,
      sym__whitespace,
    ACTIONS(284), 1,
      sym__line_break,
    STATE(50), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(276), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(44), 9,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [1689] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(280), 1,
      sym_test_case_or_task,
    ACTIONS(282), 1,
      sym__whitespace,
    ACTIONS(284), 1,
      sym__line_break,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    STATE(50), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(288), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1720] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(280), 1,
      sym_test_case_or_task,
    ACTIONS(282), 1,
      sym__whitespace,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      sym__line_break,
    STATE(51), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(292), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(46), 10,
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
  [1772] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(280), 1,
      sym_test_case_or_task,
    ACTIONS(282), 1,
      sym__whitespace,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(300), 1,
      sym__line_break,
    STATE(58), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(298), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(40), 9,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [1824] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(280), 1,
      sym_test_case_or_task,
    ACTIONS(282), 1,
      sym__whitespace,
    ACTIONS(284), 1,
      sym__line_break,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    STATE(50), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(304), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1855] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(280), 1,
      sym_test_case_or_task,
    ACTIONS(282), 1,
      sym__whitespace,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(306), 1,
      sym__line_break,
    STATE(53), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(304), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1886] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym__line_break,
    ACTIONS(308), 1,
      anon_sym_,
    ACTIONS(311), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(317), 1,
      aux_sym_keyword_token4,
    ACTIONS(320), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(323), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(314), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(60), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [1919] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      aux_sym_keyword_token1,
    ACTIONS(328), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(330), 1,
      anon_sym_RETURN,
    STATE(219), 1,
      sym_keyword,
    STATE(95), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(326), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [1948] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      aux_sym_settings_section_token1,
    ACTIONS(337), 1,
      aux_sym_variables_section_token1,
    ACTIONS(340), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(343), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(62), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(156), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1978] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(348), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(350), 1,
      sym__line_break,
    STATE(67), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(346), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2004] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_,
    ACTIONS(240), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(248), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(352), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(48), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [2034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(42), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [2054] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(62), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(156), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [2084] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(363), 1,
      sym__whitespace,
    ACTIONS(366), 1,
      sym__line_break,
    STATE(67), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(358), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(46), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [2130] = 8,
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
    STATE(62), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(156), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [2160] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(348), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(371), 1,
      sym__line_break,
    STATE(73), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(369), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2186] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(375), 1,
      aux_sym_keyword_token4,
    ACTIONS(373), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(38), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [2216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(348), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(379), 1,
      sym__line_break,
    STATE(63), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(348), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(350), 1,
      sym__line_break,
    STATE(67), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(348), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(350), 1,
      sym__line_break,
    STATE(67), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(381), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(348), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(385), 1,
      sym__line_break,
    STATE(74), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(387), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(391), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(395), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(399), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(405), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(407), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(413), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(417), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(403), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(415), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(419), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(421), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(425), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(397), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(393), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(389), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2643] = 3,
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
  [2662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(409), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(423), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2700] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(94), 1,
      sym_arguments,
    STATE(176), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2728] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(76), 1,
      sym_arguments,
    STATE(182), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2756] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(92), 1,
      sym_arguments,
    STATE(176), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(435), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2802] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(115), 1,
      sym_arguments,
    STATE(183), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2830] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(191), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(441), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [2876] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym__whitespace,
    ACTIONS(448), 1,
      sym__line_break,
    STATE(103), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    ACTIONS(443), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2916] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(87), 1,
      sym_arguments,
    STATE(182), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2944] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(102), 1,
      sym_arguments,
    STATE(183), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2972] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(86), 1,
      sym_arguments,
    STATE(182), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3000] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(131), 1,
      sym_arguments,
    STATE(191), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(451), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3046] = 3,
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
  [3064] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(83), 1,
      sym_arguments,
    STATE(176), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3092] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(123), 1,
      sym_arguments,
    STATE(191), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3120] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(88), 1,
      sym_arguments,
    STATE(176), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3148] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(79), 1,
      sym_arguments,
    STATE(182), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(457), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [3194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(84), 1,
      sym_arguments,
    STATE(176), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3222] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(82), 1,
      sym_arguments,
    STATE(182), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(461), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(465), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(172), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3301] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(429), 1,
      sym_text_chunk,
    ACTIONS(431), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(433), 1,
      anon_sym_AMP_LBRACE,
    STATE(215), 1,
      sym_argument,
    STATE(152), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(469), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__whitespace,
    ACTIONS(471), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(477), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(481), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(485), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(489), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(493), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(497), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(501), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      sym__whitespace,
    ACTIONS(503), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(509), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(513), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(485), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(493), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(489), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3578] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(515), 1,
      anon_sym_,
    ACTIONS(517), 1,
      sym_text_chunk,
    ACTIONS(519), 1,
      sym__separator,
    ACTIONS(521), 1,
      sym__line_break,
    STATE(138), 3,
      sym_scalar_variable,
      sym_empty_variable,
      aux_sym_argument_repeat1,
  [3602] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_,
    ACTIONS(526), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(529), 1,
      sym_text_chunk,
    ACTIONS(532), 1,
      sym__separator,
    ACTIONS(534), 1,
      sym__line_break,
    STATE(138), 3,
      sym_scalar_variable,
      sym_empty_variable,
      aux_sym_argument_repeat1,
  [3626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(477), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3642] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__separator,
    ACTIONS(112), 1,
      sym__whitespace,
    ACTIONS(536), 1,
      sym__line_break,
    STATE(99), 1,
      sym_keyword_definition_body,
    STATE(22), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [3664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(481), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(465), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(501), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(513), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(469), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(509), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(172), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3776] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__separator,
    ACTIONS(97), 1,
      sym__whitespace,
    ACTIONS(538), 1,
      sym__line_break,
    STATE(115), 1,
      sym_test_case_or_task_definition_body,
    STATE(19), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [3798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(461), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3814] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__separator,
    ACTIONS(97), 1,
      sym__whitespace,
    ACTIONS(538), 1,
      sym__line_break,
    STATE(102), 1,
      sym_test_case_or_task_definition_body,
    STATE(19), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [3836] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym__separator,
    ACTIONS(112), 1,
      sym__whitespace,
    ACTIONS(536), 1,
      sym__line_break,
    STATE(109), 1,
      sym_keyword_definition_body,
    STATE(22), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [3858] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(515), 1,
      anon_sym_,
    ACTIONS(540), 1,
      sym_text_chunk,
    ACTIONS(542), 1,
      sym__separator,
    ACTIONS(544), 1,
      sym__line_break,
    STATE(137), 3,
      sym_scalar_variable,
      sym_empty_variable,
      aux_sym_argument_repeat1,
  [3882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(497), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(120), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3917] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(246), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(248), 1,
      anon_sym_AMP_LBRACE,
    STATE(147), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(463), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(532), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(483), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [3987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(487), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(459), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(495), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(491), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(511), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(499), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(507), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(479), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(475), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      sym_text_chunk,
      sym__line_break,
    ACTIONS(467), 3,
      anon_sym_,
      anon_sym_DOLLAR_LBRACE,
      sym__separator,
  [4117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym__separator,
    ACTIONS(550), 1,
      sym__whitespace,
    ACTIONS(552), 1,
      sym__line_break,
    STATE(148), 1,
      sym__empty_line,
  [4133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      sym__whitespace,
    ACTIONS(554), 1,
      sym__separator,
    ACTIONS(556), 1,
      sym__line_break,
    STATE(150), 1,
      sym__empty_line,
  [4149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(558), 1,
      sym_text_chunk,
    STATE(158), 2,
      sym_scalar_variable,
      sym_empty_variable,
  [4163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      sym__separator,
    ACTIONS(564), 1,
      sym__line_break,
    ACTIONS(560), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym__separator,
    ACTIONS(570), 1,
      sym__line_break,
    ACTIONS(566), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(574), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [4204] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(576), 1,
      sym__line_break,
    STATE(187), 1,
      aux_sym_arguments_repeat1,
  [4217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(578), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [4230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(580), 1,
      sym__line_break,
    STATE(181), 1,
      aux_sym_arguments_repeat1,
  [4243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(582), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [4256] = 4,
    ACTIONS(584), 1,
      anon_sym_,
    ACTIONS(586), 1,
      sym_variable_name,
    ACTIONS(588), 1,
      anon_sym_EMPTY,
    ACTIONS(590), 1,
      sym_comment,
  [4269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(592), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [4282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(594), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [4295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(596), 1,
      sym__line_break,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
  [4308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(598), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [4321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym__separator,
    ACTIONS(600), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(604), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [4345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(606), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [4358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(608), 1,
      sym__line_break,
    STATE(193), 1,
      aux_sym_arguments_repeat1,
  [4371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(81), 2,
      sym__separator,
      sym__whitespace,
  [4382] = 4,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_,
    ACTIONS(612), 1,
      sym_variable_name,
    ACTIONS(614), 1,
      anon_sym_EMPTY,
  [4395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(616), 1,
      sym__line_break,
    STATE(177), 1,
      aux_sym_arguments_repeat1,
  [4408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(621), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [4421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(623), 1,
      sym__line_break,
    STATE(192), 1,
      aux_sym_arguments_repeat1,
  [4434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(625), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [4447] = 4,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_,
    ACTIONS(629), 1,
      sym_variable_name,
    ACTIONS(631), 1,
      anon_sym_EMPTY,
  [4460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(633), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [4473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 1,
      anon_sym_,
  [4483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 1,
      anon_sym_,
  [4493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      aux_sym_settings_section_token3,
    ACTIONS(645), 1,
      sym__line_break,
  [4503] = 3,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(647), 1,
      sym_variable_name,
    ACTIONS(649), 1,
      anon_sym_EMPTY,
  [4513] = 3,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_,
    ACTIONS(653), 1,
      sym_variable_name,
  [4523] = 3,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_,
    ACTIONS(657), 1,
      sym_variable_name,
  [4533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      sym__separator,
    ACTIONS(661), 1,
      sym__line_break,
  [4543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      aux_sym_settings_section_token3,
    ACTIONS(665), 1,
      sym__line_break,
  [4553] = 3,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_variable_name,
    ACTIONS(669), 1,
      anon_sym_EMPTY,
  [4563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      aux_sym_settings_section_token3,
    ACTIONS(673), 1,
      sym__line_break,
  [4573] = 3,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_,
    ACTIONS(677), 1,
      sym_variable_name,
  [4583] = 3,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_,
    ACTIONS(681), 1,
      sym_variable_name,
  [4593] = 3,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_,
    ACTIONS(685), 1,
      sym_variable_name,
  [4603] = 3,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_,
    ACTIONS(689), 1,
      sym_variable_name,
  [4613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(693), 1,
      anon_sym_,
  [4623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    ACTIONS(697), 1,
      anon_sym_,
  [4633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      aux_sym_keyword_token1,
    STATE(285), 1,
      sym_keyword,
  [4643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(703), 1,
      anon_sym_,
  [4653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      sym__line_break,
    ACTIONS(705), 1,
      sym__separator,
  [4663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
    ACTIONS(709), 1,
      anon_sym_,
  [4673] = 3,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(711), 1,
      sym_variable_name,
    ACTIONS(713), 1,
      anon_sym_EMPTY,
  [4683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      sym__separator,
    ACTIONS(717), 1,
      sym__line_break,
  [4693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      sym__separator,
    ACTIONS(721), 1,
      sym__line_break,
  [4703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym__separator,
    ACTIONS(725), 1,
      sym__line_break,
  [4713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    ACTIONS(729), 1,
      anon_sym_,
  [4723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    ACTIONS(733), 1,
      anon_sym_,
  [4733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    ACTIONS(737), 1,
      anon_sym_,
  [4743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    ACTIONS(741), 1,
      anon_sym_,
  [4753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 1,
      anon_sym_,
  [4763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym__separator,
    ACTIONS(749), 1,
      sym__line_break,
  [4773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym__separator,
    ACTIONS(753), 1,
      sym__line_break,
  [4783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym__separator,
    ACTIONS(757), 1,
      sym__line_break,
  [4793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym_settings_section_token3,
    ACTIONS(761), 1,
      sym__line_break,
  [4803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RBRACE,
    ACTIONS(765), 1,
      anon_sym_,
  [4813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym__separator,
    ACTIONS(769), 1,
      sym__line_break,
  [4823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    ACTIONS(773), 1,
      anon_sym_,
  [4833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_RBRACE,
    ACTIONS(777), 1,
      anon_sym_,
  [4843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_RBRACE,
    ACTIONS(781), 1,
      anon_sym_,
  [4853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_RBRACE,
    ACTIONS(785), 1,
      anon_sym_,
  [4863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
    ACTIONS(789), 1,
      anon_sym_,
  [4873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
    ACTIONS(793), 1,
      anon_sym_,
  [4883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_RBRACE,
    ACTIONS(797), 1,
      anon_sym_,
  [4893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    ACTIONS(801), 1,
      anon_sym_,
  [4903] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    ACTIONS(805), 1,
      anon_sym_,
  [4913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
    ACTIONS(809), 1,
      anon_sym_,
  [4923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
    ACTIONS(813), 1,
      anon_sym_,
  [4933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym__separator,
    ACTIONS(817), 1,
      sym__line_break,
  [4943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    ACTIONS(821), 1,
      anon_sym_,
  [4953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      sym__separator,
    ACTIONS(825), 1,
      sym__line_break,
  [4963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym__line_break,
  [4970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_RBRACE,
  [4977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
  [4984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
  [4991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym_test_case_or_task,
  [4998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
  [5005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RBRACE,
  [5012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
  [5019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
  [5026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym__separator,
  [5033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
  [5040] = 2,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym_variable_name,
  [5047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RBRACE,
  [5054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
  [5061] = 2,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym_variable_name,
  [5068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym__line_break,
  [5075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      sym__line_break,
  [5082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
  [5089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
  [5096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym_settings_section_token2,
  [5103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      ts_builtin_sym_end,
  [5110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__separator,
  [5117] = 2,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_variable_name,
  [5124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__separator,
  [5131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym__line_break,
  [5138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
  [5145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
  [5152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_settings_section_token2,
  [5159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
  [5166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RBRACE,
  [5173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
  [5180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym__line_break,
  [5187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
  [5194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
  [5201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
  [5208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RBRACE,
  [5215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
  [5222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__line_break,
  [5229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
  [5236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym__line_break,
  [5243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__line_break,
  [5250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RBRACE,
  [5257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym__line_break,
  [5264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym__line_break,
  [5271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym__line_break,
  [5278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
  [5285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_settings_section_token2,
  [5292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [5299] = 2,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym_variable_name,
  [5306] = 2,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_variable_name,
  [5313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym__line_break,
  [5327] = 2,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(907), 1,
      sym_variable_name,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      aux_sym_settings_section_token2,
  [5341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__separator,
  [5348] = 2,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_variable_name,
  [5355] = 2,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_variable_name,
  [5362] = 2,
    ACTIONS(590), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 282,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 366,
  [SMALL_STATE(12)] = 408,
  [SMALL_STATE(13)] = 450,
  [SMALL_STATE(14)] = 492,
  [SMALL_STATE(15)] = 534,
  [SMALL_STATE(16)] = 576,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 714,
  [SMALL_STATE(21)] = 741,
  [SMALL_STATE(22)] = 768,
  [SMALL_STATE(23)] = 799,
  [SMALL_STATE(24)] = 826,
  [SMALL_STATE(25)] = 855,
  [SMALL_STATE(26)] = 882,
  [SMALL_STATE(27)] = 911,
  [SMALL_STATE(28)] = 940,
  [SMALL_STATE(29)] = 967,
  [SMALL_STATE(30)] = 996,
  [SMALL_STATE(31)] = 1025,
  [SMALL_STATE(32)] = 1056,
  [SMALL_STATE(33)] = 1087,
  [SMALL_STATE(34)] = 1123,
  [SMALL_STATE(35)] = 1155,
  [SMALL_STATE(36)] = 1187,
  [SMALL_STATE(37)] = 1219,
  [SMALL_STATE(38)] = 1247,
  [SMALL_STATE(39)] = 1283,
  [SMALL_STATE(40)] = 1315,
  [SMALL_STATE(41)] = 1343,
  [SMALL_STATE(42)] = 1371,
  [SMALL_STATE(43)] = 1399,
  [SMALL_STATE(44)] = 1431,
  [SMALL_STATE(45)] = 1459,
  [SMALL_STATE(46)] = 1491,
  [SMALL_STATE(47)] = 1523,
  [SMALL_STATE(48)] = 1544,
  [SMALL_STATE(49)] = 1577,
  [SMALL_STATE(50)] = 1606,
  [SMALL_STATE(51)] = 1637,
  [SMALL_STATE(52)] = 1668,
  [SMALL_STATE(53)] = 1689,
  [SMALL_STATE(54)] = 1720,
  [SMALL_STATE(55)] = 1751,
  [SMALL_STATE(56)] = 1772,
  [SMALL_STATE(57)] = 1803,
  [SMALL_STATE(58)] = 1824,
  [SMALL_STATE(59)] = 1855,
  [SMALL_STATE(60)] = 1886,
  [SMALL_STATE(61)] = 1919,
  [SMALL_STATE(62)] = 1948,
  [SMALL_STATE(63)] = 1978,
  [SMALL_STATE(64)] = 2004,
  [SMALL_STATE(65)] = 2034,
  [SMALL_STATE(66)] = 2054,
  [SMALL_STATE(67)] = 2084,
  [SMALL_STATE(68)] = 2110,
  [SMALL_STATE(69)] = 2130,
  [SMALL_STATE(70)] = 2160,
  [SMALL_STATE(71)] = 2186,
  [SMALL_STATE(72)] = 2216,
  [SMALL_STATE(73)] = 2242,
  [SMALL_STATE(74)] = 2268,
  [SMALL_STATE(75)] = 2294,
  [SMALL_STATE(76)] = 2320,
  [SMALL_STATE(77)] = 2339,
  [SMALL_STATE(78)] = 2358,
  [SMALL_STATE(79)] = 2377,
  [SMALL_STATE(80)] = 2396,
  [SMALL_STATE(81)] = 2415,
  [SMALL_STATE(82)] = 2434,
  [SMALL_STATE(83)] = 2453,
  [SMALL_STATE(84)] = 2472,
  [SMALL_STATE(85)] = 2491,
  [SMALL_STATE(86)] = 2510,
  [SMALL_STATE(87)] = 2529,
  [SMALL_STATE(88)] = 2548,
  [SMALL_STATE(89)] = 2567,
  [SMALL_STATE(90)] = 2586,
  [SMALL_STATE(91)] = 2605,
  [SMALL_STATE(92)] = 2624,
  [SMALL_STATE(93)] = 2643,
  [SMALL_STATE(94)] = 2662,
  [SMALL_STATE(95)] = 2681,
  [SMALL_STATE(96)] = 2700,
  [SMALL_STATE(97)] = 2728,
  [SMALL_STATE(98)] = 2756,
  [SMALL_STATE(99)] = 2784,
  [SMALL_STATE(100)] = 2802,
  [SMALL_STATE(101)] = 2830,
  [SMALL_STATE(102)] = 2858,
  [SMALL_STATE(103)] = 2876,
  [SMALL_STATE(104)] = 2898,
  [SMALL_STATE(105)] = 2916,
  [SMALL_STATE(106)] = 2944,
  [SMALL_STATE(107)] = 2972,
  [SMALL_STATE(108)] = 3000,
  [SMALL_STATE(109)] = 3028,
  [SMALL_STATE(110)] = 3046,
  [SMALL_STATE(111)] = 3064,
  [SMALL_STATE(112)] = 3092,
  [SMALL_STATE(113)] = 3120,
  [SMALL_STATE(114)] = 3148,
  [SMALL_STATE(115)] = 3176,
  [SMALL_STATE(116)] = 3194,
  [SMALL_STATE(117)] = 3222,
  [SMALL_STATE(118)] = 3250,
  [SMALL_STATE(119)] = 3267,
  [SMALL_STATE(120)] = 3284,
  [SMALL_STATE(121)] = 3301,
  [SMALL_STATE(122)] = 3326,
  [SMALL_STATE(123)] = 3343,
  [SMALL_STATE(124)] = 3360,
  [SMALL_STATE(125)] = 3377,
  [SMALL_STATE(126)] = 3394,
  [SMALL_STATE(127)] = 3411,
  [SMALL_STATE(128)] = 3428,
  [SMALL_STATE(129)] = 3445,
  [SMALL_STATE(130)] = 3462,
  [SMALL_STATE(131)] = 3479,
  [SMALL_STATE(132)] = 3496,
  [SMALL_STATE(133)] = 3513,
  [SMALL_STATE(134)] = 3530,
  [SMALL_STATE(135)] = 3546,
  [SMALL_STATE(136)] = 3562,
  [SMALL_STATE(137)] = 3578,
  [SMALL_STATE(138)] = 3602,
  [SMALL_STATE(139)] = 3626,
  [SMALL_STATE(140)] = 3642,
  [SMALL_STATE(141)] = 3664,
  [SMALL_STATE(142)] = 3680,
  [SMALL_STATE(143)] = 3696,
  [SMALL_STATE(144)] = 3712,
  [SMALL_STATE(145)] = 3728,
  [SMALL_STATE(146)] = 3744,
  [SMALL_STATE(147)] = 3760,
  [SMALL_STATE(148)] = 3776,
  [SMALL_STATE(149)] = 3798,
  [SMALL_STATE(150)] = 3814,
  [SMALL_STATE(151)] = 3836,
  [SMALL_STATE(152)] = 3858,
  [SMALL_STATE(153)] = 3882,
  [SMALL_STATE(154)] = 3898,
  [SMALL_STATE(155)] = 3917,
  [SMALL_STATE(156)] = 3936,
  [SMALL_STATE(157)] = 3948,
  [SMALL_STATE(158)] = 3961,
  [SMALL_STATE(159)] = 3974,
  [SMALL_STATE(160)] = 3987,
  [SMALL_STATE(161)] = 4000,
  [SMALL_STATE(162)] = 4013,
  [SMALL_STATE(163)] = 4026,
  [SMALL_STATE(164)] = 4039,
  [SMALL_STATE(165)] = 4052,
  [SMALL_STATE(166)] = 4065,
  [SMALL_STATE(167)] = 4078,
  [SMALL_STATE(168)] = 4091,
  [SMALL_STATE(169)] = 4104,
  [SMALL_STATE(170)] = 4117,
  [SMALL_STATE(171)] = 4133,
  [SMALL_STATE(172)] = 4149,
  [SMALL_STATE(173)] = 4163,
  [SMALL_STATE(174)] = 4177,
  [SMALL_STATE(175)] = 4191,
  [SMALL_STATE(176)] = 4204,
  [SMALL_STATE(177)] = 4217,
  [SMALL_STATE(178)] = 4230,
  [SMALL_STATE(179)] = 4243,
  [SMALL_STATE(180)] = 4256,
  [SMALL_STATE(181)] = 4269,
  [SMALL_STATE(182)] = 4282,
  [SMALL_STATE(183)] = 4295,
  [SMALL_STATE(184)] = 4308,
  [SMALL_STATE(185)] = 4321,
  [SMALL_STATE(186)] = 4332,
  [SMALL_STATE(187)] = 4345,
  [SMALL_STATE(188)] = 4358,
  [SMALL_STATE(189)] = 4371,
  [SMALL_STATE(190)] = 4382,
  [SMALL_STATE(191)] = 4395,
  [SMALL_STATE(192)] = 4408,
  [SMALL_STATE(193)] = 4421,
  [SMALL_STATE(194)] = 4434,
  [SMALL_STATE(195)] = 4447,
  [SMALL_STATE(196)] = 4460,
  [SMALL_STATE(197)] = 4473,
  [SMALL_STATE(198)] = 4483,
  [SMALL_STATE(199)] = 4493,
  [SMALL_STATE(200)] = 4503,
  [SMALL_STATE(201)] = 4513,
  [SMALL_STATE(202)] = 4523,
  [SMALL_STATE(203)] = 4533,
  [SMALL_STATE(204)] = 4543,
  [SMALL_STATE(205)] = 4553,
  [SMALL_STATE(206)] = 4563,
  [SMALL_STATE(207)] = 4573,
  [SMALL_STATE(208)] = 4583,
  [SMALL_STATE(209)] = 4593,
  [SMALL_STATE(210)] = 4603,
  [SMALL_STATE(211)] = 4613,
  [SMALL_STATE(212)] = 4623,
  [SMALL_STATE(213)] = 4633,
  [SMALL_STATE(214)] = 4643,
  [SMALL_STATE(215)] = 4653,
  [SMALL_STATE(216)] = 4663,
  [SMALL_STATE(217)] = 4673,
  [SMALL_STATE(218)] = 4683,
  [SMALL_STATE(219)] = 4693,
  [SMALL_STATE(220)] = 4703,
  [SMALL_STATE(221)] = 4713,
  [SMALL_STATE(222)] = 4723,
  [SMALL_STATE(223)] = 4733,
  [SMALL_STATE(224)] = 4743,
  [SMALL_STATE(225)] = 4753,
  [SMALL_STATE(226)] = 4763,
  [SMALL_STATE(227)] = 4773,
  [SMALL_STATE(228)] = 4783,
  [SMALL_STATE(229)] = 4793,
  [SMALL_STATE(230)] = 4803,
  [SMALL_STATE(231)] = 4813,
  [SMALL_STATE(232)] = 4823,
  [SMALL_STATE(233)] = 4833,
  [SMALL_STATE(234)] = 4843,
  [SMALL_STATE(235)] = 4853,
  [SMALL_STATE(236)] = 4863,
  [SMALL_STATE(237)] = 4873,
  [SMALL_STATE(238)] = 4883,
  [SMALL_STATE(239)] = 4893,
  [SMALL_STATE(240)] = 4903,
  [SMALL_STATE(241)] = 4913,
  [SMALL_STATE(242)] = 4923,
  [SMALL_STATE(243)] = 4933,
  [SMALL_STATE(244)] = 4943,
  [SMALL_STATE(245)] = 4953,
  [SMALL_STATE(246)] = 4963,
  [SMALL_STATE(247)] = 4970,
  [SMALL_STATE(248)] = 4977,
  [SMALL_STATE(249)] = 4984,
  [SMALL_STATE(250)] = 4991,
  [SMALL_STATE(251)] = 4998,
  [SMALL_STATE(252)] = 5005,
  [SMALL_STATE(253)] = 5012,
  [SMALL_STATE(254)] = 5019,
  [SMALL_STATE(255)] = 5026,
  [SMALL_STATE(256)] = 5033,
  [SMALL_STATE(257)] = 5040,
  [SMALL_STATE(258)] = 5047,
  [SMALL_STATE(259)] = 5054,
  [SMALL_STATE(260)] = 5061,
  [SMALL_STATE(261)] = 5068,
  [SMALL_STATE(262)] = 5075,
  [SMALL_STATE(263)] = 5082,
  [SMALL_STATE(264)] = 5089,
  [SMALL_STATE(265)] = 5096,
  [SMALL_STATE(266)] = 5103,
  [SMALL_STATE(267)] = 5110,
  [SMALL_STATE(268)] = 5117,
  [SMALL_STATE(269)] = 5124,
  [SMALL_STATE(270)] = 5131,
  [SMALL_STATE(271)] = 5138,
  [SMALL_STATE(272)] = 5145,
  [SMALL_STATE(273)] = 5152,
  [SMALL_STATE(274)] = 5159,
  [SMALL_STATE(275)] = 5166,
  [SMALL_STATE(276)] = 5173,
  [SMALL_STATE(277)] = 5180,
  [SMALL_STATE(278)] = 5187,
  [SMALL_STATE(279)] = 5194,
  [SMALL_STATE(280)] = 5201,
  [SMALL_STATE(281)] = 5208,
  [SMALL_STATE(282)] = 5215,
  [SMALL_STATE(283)] = 5222,
  [SMALL_STATE(284)] = 5229,
  [SMALL_STATE(285)] = 5236,
  [SMALL_STATE(286)] = 5243,
  [SMALL_STATE(287)] = 5250,
  [SMALL_STATE(288)] = 5257,
  [SMALL_STATE(289)] = 5264,
  [SMALL_STATE(290)] = 5271,
  [SMALL_STATE(291)] = 5278,
  [SMALL_STATE(292)] = 5285,
  [SMALL_STATE(293)] = 5292,
  [SMALL_STATE(294)] = 5299,
  [SMALL_STATE(295)] = 5306,
  [SMALL_STATE(296)] = 5313,
  [SMALL_STATE(297)] = 5320,
  [SMALL_STATE(298)] = 5327,
  [SMALL_STATE(299)] = 5334,
  [SMALL_STATE(300)] = 5341,
  [SMALL_STATE(301)] = 5348,
  [SMALL_STATE(302)] = 5355,
  [SMALL_STATE(303)] = 5362,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(196),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(300),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(246),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(194),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(188),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(188),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(49),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(289),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(31),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(61),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(288),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(32),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(154),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(190),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(33),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(33),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(202),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(201),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(213),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(64),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(261),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(43),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(178),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(178),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(250),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(171),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(262),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(50),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(155),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(180),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(60),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(60),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(209),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(210),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(218),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(228),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(227),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(226),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(298),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(246),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(67),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(246),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 4),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 4),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 5),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(172),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(195),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(138),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(121),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [853] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
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
