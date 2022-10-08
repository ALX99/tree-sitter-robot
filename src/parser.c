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
#define STATE_COUNT 308
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
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
  anon_sym_RETURN = 46,
  sym_variable_name = 47,
  anon_sym_AT_LBRACE = 48,
  anon_sym_AMP_LBRACE = 49,
  anon_sym_EMPTY = 50,
  sym_comment = 51,
  sym__separator = 52,
  sym__whitespace = 53,
  sym__line_break = 54,
  sym_source_file = 55,
  sym_section = 56,
  sym_settings_section = 57,
  sym_setting_statement = 58,
  sym_variables_section = 59,
  sym_variable_definition = 60,
  sym_keywords_section = 61,
  sym_keyword_definition = 62,
  sym_keyword_definition_body = 63,
  sym_keyword_setting = 64,
  sym_test_cases_or_tasks_section = 65,
  sym_test_case_or_task_definition = 66,
  sym_test_case_or_task_definition_body = 67,
  sym_test_case_or_task_setting = 68,
  sym_statement = 69,
  sym_variable_assignment = 70,
  sym_keyword_invocation = 71,
  sym_arguments = 72,
  sym_continuation = 73,
  sym_argument = 74,
  sym_keyword = 75,
  sym_text = 76,
  sym_return_statement = 77,
  sym_variable = 78,
  sym_list_variable = 79,
  sym_scalar_variable = 80,
  sym_dictionary_variable = 81,
  sym_empty_variable = 82,
  sym__empty_line = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_source_file_repeat2 = 85,
  aux_sym_settings_section_repeat1 = 86,
  aux_sym_variables_section_repeat1 = 87,
  aux_sym_keywords_section_repeat1 = 88,
  aux_sym_keyword_definition_body_repeat1 = 89,
  aux_sym_test_cases_or_tasks_section_repeat1 = 90,
  aux_sym_test_case_or_task_definition_body_repeat1 = 91,
  aux_sym_arguments_repeat1 = 92,
  aux_sym_arguments_repeat2 = 93,
  aux_sym_argument_repeat1 = 94,
  aux_sym_keyword_repeat1 = 95,
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
  [sym_text] = "text",
  [sym_return_statement] = "return_statement",
  [sym_variable] = "variable",
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
  [sym_text] = sym_text,
  [sym_return_statement] = sym_return_statement,
  [sym_variable] = sym_variable,
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
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
  [19] = 2,
  [20] = 5,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 6,
  [29] = 6,
  [30] = 5,
  [31] = 4,
  [32] = 3,
  [33] = 2,
  [34] = 4,
  [35] = 3,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 27,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 36,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 2,
  [54] = 3,
  [55] = 44,
  [56] = 4,
  [57] = 5,
  [58] = 6,
  [59] = 26,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 60,
  [65] = 65,
  [66] = 38,
  [67] = 8,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 8,
  [72] = 7,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 7,
  [81] = 81,
  [82] = 82,
  [83] = 79,
  [84] = 7,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 8,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 16,
  [100] = 16,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 102,
  [105] = 105,
  [106] = 96,
  [107] = 107,
  [108] = 108,
  [109] = 103,
  [110] = 107,
  [111] = 105,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 101,
  [116] = 116,
  [117] = 117,
  [118] = 16,
  [119] = 119,
  [120] = 16,
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
  [140] = 123,
  [141] = 128,
  [142] = 128,
  [143] = 124,
  [144] = 127,
  [145] = 137,
  [146] = 130,
  [147] = 136,
  [148] = 131,
  [149] = 133,
  [150] = 132,
  [151] = 151,
  [152] = 123,
  [153] = 126,
  [154] = 127,
  [155] = 126,
  [156] = 138,
  [157] = 129,
  [158] = 129,
  [159] = 132,
  [160] = 131,
  [161] = 161,
  [162] = 130,
  [163] = 133,
  [164] = 136,
  [165] = 137,
  [166] = 124,
  [167] = 151,
  [168] = 168,
  [169] = 125,
  [170] = 170,
  [171] = 171,
  [172] = 125,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 176,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
  [182] = 16,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 179,
  [187] = 179,
  [188] = 180,
  [189] = 189,
  [190] = 184,
  [191] = 185,
  [192] = 183,
  [193] = 180,
  [194] = 184,
  [195] = 185,
  [196] = 179,
  [197] = 197,
  [198] = 183,
  [199] = 184,
  [200] = 185,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 202,
  [206] = 206,
  [207] = 204,
  [208] = 208,
  [209] = 209,
  [210] = 202,
  [211] = 211,
  [212] = 206,
  [213] = 204,
  [214] = 214,
  [215] = 209,
  [216] = 216,
  [217] = 217,
  [218] = 211,
  [219] = 216,
  [220] = 217,
  [221] = 221,
  [222] = 222,
  [223] = 222,
  [224] = 224,
  [225] = 206,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 224,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 229,
  [238] = 226,
  [239] = 229,
  [240] = 226,
  [241] = 224,
  [242] = 222,
  [243] = 232,
  [244] = 217,
  [245] = 216,
  [246] = 214,
  [247] = 203,
  [248] = 211,
  [249] = 209,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 250,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 261,
  [267] = 261,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 253,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 252,
  [280] = 276,
  [281] = 281,
  [282] = 255,
  [283] = 256,
  [284] = 257,
  [285] = 258,
  [286] = 286,
  [287] = 261,
  [288] = 288,
  [289] = 258,
  [290] = 257,
  [291] = 256,
  [292] = 261,
  [293] = 261,
  [294] = 255,
  [295] = 253,
  [296] = 276,
  [297] = 250,
  [298] = 262,
  [299] = 271,
  [300] = 286,
  [301] = 252,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 262,
  [306] = 271,
  [307] = 304,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(303);
      if (lookahead == '\t') ADVANCE(307);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '=') ADVANCE(331);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(306);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(306);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '}') ADVANCE(330);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(418);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '#') ADVANCE(422);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '#') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '#') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '.') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == ']') ADVANCE(345);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == ']') ADVANCE(354);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ']') ADVANCE(349);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ']') ADVANCE(348);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ']') ADVANCE(355);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ']') ADVANCE(344);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ']') ADVANCE(347);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == ']') ADVANCE(346);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(239);
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
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(418);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(412);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(412);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(425);
      if (lookahead == 'E') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(352);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(333);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(304);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(327);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(350);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(404);
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
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(404);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(404);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(404);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(404);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(357);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(359);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(424);
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
      if (lookahead == ']') ADVANCE(345);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(354);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(349);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(348);
      END_STATE();
    case 75:
      if (lookahead == ']') ADVANCE(355);
      END_STATE();
    case 76:
      if (lookahead == ']') ADVANCE(344);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(347);
      END_STATE();
    case 78:
      if (lookahead == ']') ADVANCE(346);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(329);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(356);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 81:
      if (lookahead == '{') ADVANCE(433);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 82:
      if (lookahead == '{') ADVANCE(432);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(219);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 110:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 111:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 112:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(404);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(154);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 154:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 155:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(230);
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
          lookahead == 'g') ADVANCE(283);
      END_STATE();
    case 159:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 166:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 167:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 168:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(378);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(404);
      END_STATE();
    case 169:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(129);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 170:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(228);
      END_STATE();
    case 171:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 176:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 177:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 178:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 179:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 180:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 181:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 182:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 193:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 206:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 207:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 208:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 209:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(315);
      END_STATE();
    case 210:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 211:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 212:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 213:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
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
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 227:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(312);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(271);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(139);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(147);
      END_STATE();
    case 241:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(30);
      END_STATE();
    case 242:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 243:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 244:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(33);
      END_STATE();
    case 245:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(153);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(85);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 272:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 273:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 274:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 275:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
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
          lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 280:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 281:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 282:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 283:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 284:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 285:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 286:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(184);
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
          lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 291:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(310);
      END_STATE();
    case 293:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(404);
      END_STATE();
    case 294:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(435);
      END_STATE();
    case 295:
      if (eof) ADVANCE(303);
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '}') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '@') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(194);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(274);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 296:
      if (eof) ADVANCE(303);
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(337);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 297:
      if (eof) ADVANCE(303);
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 298:
      if (eof) ADVANCE(303);
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(415);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 299:
      if (eof) ADVANCE(303);
      if (lookahead == '\t') ADVANCE(436);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 300:
      if (eof) ADVANCE(303);
      if (lookahead == '\t') ADVANCE(436);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(415);
      if (lookahead == '.') ADVANCE(416);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 301:
      if (eof) ADVANCE(303);
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 302:
      if (eof) ADVANCE(303);
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\r') ADVANCE(443);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(415);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(441);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(419);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(391);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(378);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(372);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(404);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '{') ADVANCE(356);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(435);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(435);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(435);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'M') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'T') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'Y') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(431);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(442);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 295},
  [2] = {.lex_state = 295},
  [3] = {.lex_state = 295},
  [4] = {.lex_state = 295},
  [5] = {.lex_state = 295},
  [6] = {.lex_state = 295},
  [7] = {.lex_state = 295},
  [8] = {.lex_state = 295},
  [9] = {.lex_state = 295},
  [10] = {.lex_state = 295},
  [11] = {.lex_state = 295},
  [12] = {.lex_state = 295},
  [13] = {.lex_state = 295},
  [14] = {.lex_state = 295},
  [15] = {.lex_state = 295},
  [16] = {.lex_state = 295},
  [17] = {.lex_state = 295},
  [18] = {.lex_state = 295},
  [19] = {.lex_state = 299},
  [20] = {.lex_state = 299},
  [21] = {.lex_state = 301},
  [22] = {.lex_state = 302},
  [23] = {.lex_state = 302},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 301},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 299},
  [29] = {.lex_state = 300},
  [30] = {.lex_state = 300},
  [31] = {.lex_state = 300},
  [32] = {.lex_state = 299},
  [33] = {.lex_state = 300},
  [34] = {.lex_state = 299},
  [35] = {.lex_state = 300},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 298},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 298},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 298},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 298},
  [51] = {.lex_state = 298},
  [52] = {.lex_state = 298},
  [53] = {.lex_state = 296},
  [54] = {.lex_state = 296},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 296},
  [57] = {.lex_state = 296},
  [58] = {.lex_state = 296},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 298},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 299},
  [68] = {.lex_state = 297},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 297},
  [71] = {.lex_state = 300},
  [72] = {.lex_state = 299},
  [73] = {.lex_state = 297},
  [74] = {.lex_state = 297},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 297},
  [77] = {.lex_state = 34},
  [78] = {.lex_state = 297},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 300},
  [81] = {.lex_state = 297},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 296},
  [85] = {.lex_state = 295},
  [86] = {.lex_state = 295},
  [87] = {.lex_state = 295},
  [88] = {.lex_state = 295},
  [89] = {.lex_state = 295},
  [90] = {.lex_state = 295},
  [91] = {.lex_state = 296},
  [92] = {.lex_state = 295},
  [93] = {.lex_state = 295},
  [94] = {.lex_state = 295},
  [95] = {.lex_state = 295},
  [96] = {.lex_state = 302},
  [97] = {.lex_state = 302},
  [98] = {.lex_state = 301},
  [99] = {.lex_state = 301},
  [100] = {.lex_state = 302},
  [101] = {.lex_state = 302},
  [102] = {.lex_state = 302},
  [103] = {.lex_state = 302},
  [104] = {.lex_state = 301},
  [105] = {.lex_state = 301},
  [106] = {.lex_state = 301},
  [107] = {.lex_state = 302},
  [108] = {.lex_state = 302},
  [109] = {.lex_state = 301},
  [110] = {.lex_state = 301},
  [111] = {.lex_state = 302},
  [112] = {.lex_state = 301},
  [113] = {.lex_state = 301},
  [114] = {.lex_state = 302},
  [115] = {.lex_state = 301},
  [116] = {.lex_state = 297},
  [117] = {.lex_state = 298},
  [118] = {.lex_state = 297},
  [119] = {.lex_state = 297},
  [120] = {.lex_state = 298},
  [121] = {.lex_state = 298},
  [122] = {.lex_state = 295},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 295},
  [135] = {.lex_state = 295},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 295},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 5},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 301},
  [180] = {.lex_state = 301},
  [181] = {.lex_state = 301},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 301},
  [185] = {.lex_state = 301},
  [186] = {.lex_state = 301},
  [187] = {.lex_state = 301},
  [188] = {.lex_state = 301},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 301},
  [191] = {.lex_state = 301},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 301},
  [194] = {.lex_state = 301},
  [195] = {.lex_state = 301},
  [196] = {.lex_state = 301},
  [197] = {.lex_state = 301},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 301},
  [200] = {.lex_state = 301},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 39},
  [203] = {.lex_state = 301},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 39},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 301},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 39},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 301},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 301},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 38},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 301},
  [232] = {.lex_state = 301},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 301},
  [235] = {.lex_state = 301},
  [236] = {.lex_state = 10},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 301},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 301},
  [247] = {.lex_state = 301},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 295},
  [251] = {.lex_state = 301},
  [252] = {.lex_state = 295},
  [253] = {.lex_state = 295},
  [254] = {.lex_state = 295},
  [255] = {.lex_state = 295},
  [256] = {.lex_state = 295},
  [257] = {.lex_state = 295},
  [258] = {.lex_state = 295},
  [259] = {.lex_state = 295},
  [260] = {.lex_state = 35},
  [261] = {.lex_state = 295},
  [262] = {.lex_state = 40},
  [263] = {.lex_state = 301},
  [264] = {.lex_state = 35},
  [265] = {.lex_state = 35},
  [266] = {.lex_state = 295},
  [267] = {.lex_state = 295},
  [268] = {.lex_state = 40},
  [269] = {.lex_state = 295},
  [270] = {.lex_state = 295},
  [271] = {.lex_state = 40},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 37},
  [274] = {.lex_state = 295},
  [275] = {.lex_state = 295},
  [276] = {.lex_state = 295},
  [277] = {.lex_state = 301},
  [278] = {.lex_state = 295},
  [279] = {.lex_state = 295},
  [280] = {.lex_state = 295},
  [281] = {.lex_state = 295},
  [282] = {.lex_state = 295},
  [283] = {.lex_state = 295},
  [284] = {.lex_state = 295},
  [285] = {.lex_state = 295},
  [286] = {.lex_state = 295},
  [287] = {.lex_state = 295},
  [288] = {.lex_state = 35},
  [289] = {.lex_state = 295},
  [290] = {.lex_state = 295},
  [291] = {.lex_state = 295},
  [292] = {.lex_state = 295},
  [293] = {.lex_state = 295},
  [294] = {.lex_state = 295},
  [295] = {.lex_state = 295},
  [296] = {.lex_state = 295},
  [297] = {.lex_state = 295},
  [298] = {.lex_state = 40},
  [299] = {.lex_state = 40},
  [300] = {.lex_state = 295},
  [301] = {.lex_state = 295},
  [302] = {.lex_state = 295},
  [303] = {.lex_state = 301},
  [304] = {.lex_state = 40},
  [305] = {.lex_state = 40},
  [306] = {.lex_state = 40},
  [307] = {.lex_state = 40},
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
    [sym_source_file] = STATE(272),
    [sym_section] = STATE(87),
    [sym_settings_section] = STATE(174),
    [sym_variables_section] = STATE(174),
    [sym_keywords_section] = STATE(174),
    [sym_test_cases_or_tasks_section] = STATE(174),
    [sym__empty_line] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_source_file_repeat2] = STATE(87),
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
    ACTIONS(30), 1,
      sym__whitespace,
    ACTIONS(27), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
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
    ACTIONS(34), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(32), 25,
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
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(32), 25,
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
    STATE(94), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(122), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    STATE(174), 4,
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
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(32), 2,
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
  [741] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym__separator,
    ACTIONS(102), 1,
      sym__whitespace,
    ACTIONS(105), 1,
      sym__line_break,
    STATE(21), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(97), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [772] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym__separator,
    ACTIONS(114), 1,
      sym__whitespace,
    ACTIONS(116), 1,
      sym__line_break,
    ACTIONS(110), 2,
      anon_sym_,
      aux_sym_keyword_token1,
    STATE(23), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(108), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [803] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__separator,
    ACTIONS(125), 1,
      sym__whitespace,
    ACTIONS(128), 1,
      sym__line_break,
    ACTIONS(120), 2,
      anon_sym_,
      aux_sym_keyword_token1,
    STATE(23), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(118), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [834] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(133), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(137), 1,
      aux_sym_keyword_token4,
    ACTIONS(139), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(141), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(143), 1,
      sym__separator,
    ACTIONS(145), 1,
      sym__line_break,
    ACTIONS(135), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(27), 2,
      sym_variable,
      aux_sym_keyword_repeat1,
    STATE(125), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [873] = 7,
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
    STATE(21), 4,
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
  [904] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(133), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(137), 1,
      aux_sym_keyword_token4,
    ACTIONS(139), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(141), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(157), 1,
      sym__separator,
    ACTIONS(159), 1,
      sym__line_break,
    ACTIONS(135), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(27), 2,
      sym_variable,
      aux_sym_keyword_repeat1,
    STATE(125), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [943] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_,
    ACTIONS(164), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(170), 1,
      aux_sym_keyword_token4,
    ACTIONS(173), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(176), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(179), 1,
      sym__separator,
    ACTIONS(181), 1,
      sym__line_break,
    ACTIONS(167), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(27), 2,
      sym_variable,
      aux_sym_keyword_repeat1,
    STATE(125), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [982] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
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
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1011] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(30), 2,
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
  [1038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(35), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(32), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [1065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(33), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(34), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(32), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [1092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_ellipses,
    ACTIONS(188), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(32), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(30), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1121] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(35), 2,
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
  [1148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(19), 2,
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
  [1177] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(35), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(30), 4,
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
  [1204] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(103), 1,
      sym_arguments,
    STATE(188), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1242] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_,
    ACTIONS(208), 1,
      aux_sym_keyword_token1,
    ACTIONS(210), 1,
      sym__whitespace,
    ACTIONS(212), 1,
      sym__line_break,
    STATE(269), 1,
      sym_keyword,
    STATE(45), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1274] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(105), 1,
      sym_arguments,
    STATE(193), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1312] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_,
    ACTIONS(208), 1,
      aux_sym_keyword_token1,
    ACTIONS(210), 1,
      sym__whitespace,
    ACTIONS(216), 1,
      sym__line_break,
    STATE(269), 1,
      sym_keyword,
    STATE(61), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(214), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1344] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(116), 1,
      sym_arguments,
    STATE(181), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1382] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(135), 1,
      sym_arguments,
    STATE(180), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1420] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym__line_break,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(227), 1,
      aux_sym_keyword_token4,
    ACTIONS(230), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(233), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(224), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(42), 2,
      sym_variable,
      aux_sym_keyword_repeat1,
    STATE(169), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1456] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(239), 1,
      aux_sym_keyword_token3,
    ACTIONS(242), 1,
      aux_sym_keyword_token4,
    ACTIONS(245), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(248), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(251), 1,
      sym__separator,
    ACTIONS(253), 1,
      sym__line_break,
    STATE(43), 1,
      aux_sym_argument_repeat1,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1494] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(98), 1,
      sym_arguments,
    STATE(193), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1532] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_,
    ACTIONS(208), 1,
      aux_sym_keyword_token1,
    ACTIONS(210), 1,
      sym__whitespace,
    ACTIONS(216), 1,
      sym__line_break,
    STATE(269), 1,
      sym_keyword,
    STATE(61), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(255), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1564] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(134), 1,
      sym_arguments,
    STATE(180), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1602] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(108), 1,
      sym_arguments,
    STATE(188), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1640] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(180), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1678] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(109), 1,
      sym_arguments,
    STATE(193), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1716] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_,
    ACTIONS(208), 1,
      aux_sym_keyword_token1,
    ACTIONS(210), 1,
      sym__whitespace,
    ACTIONS(216), 1,
      sym__line_break,
    STATE(269), 1,
      sym_keyword,
    STATE(61), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(257), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1748] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_,
    ACTIONS(208), 1,
      aux_sym_keyword_token1,
    ACTIONS(210), 1,
      sym__whitespace,
    ACTIONS(259), 1,
      sym__line_break,
    STATE(269), 1,
      sym_keyword,
    STATE(39), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(257), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1780] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_,
    ACTIONS(208), 1,
      aux_sym_keyword_token1,
    ACTIONS(210), 1,
      sym__whitespace,
    ACTIONS(263), 1,
      sym__line_break,
    STATE(269), 1,
      sym_keyword,
    STATE(50), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1812] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_ellipses,
    ACTIONS(267), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(54), 2,
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
  [1840] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_ellipses,
    ACTIONS(272), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(54), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(30), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [1868] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      sym_arguments,
    STATE(188), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_ellipses,
    ACTIONS(267), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(53), 2,
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
  [1934] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_ellipses,
    ACTIONS(267), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(54), 2,
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
  [1962] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_ellipses,
    ACTIONS(267), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(57), 2,
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
  [1990] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym__line_break,
    ACTIONS(275), 1,
      anon_sym_,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(281), 1,
      aux_sym_keyword_token4,
    ACTIONS(283), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(279), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(42), 2,
      sym_variable,
      aux_sym_keyword_repeat1,
    STATE(169), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2026] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(106), 1,
      sym_arguments,
    STATE(193), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2064] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_,
    ACTIONS(292), 1,
      aux_sym_keyword_token1,
    ACTIONS(295), 1,
      sym__whitespace,
    ACTIONS(298), 1,
      sym__line_break,
    STATE(269), 1,
      sym_keyword,
    STATE(61), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(287), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2096] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(301), 1,
      sym__separator,
    ACTIONS(303), 1,
      sym__line_break,
    STATE(43), 1,
      aux_sym_argument_repeat1,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2134] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(112), 1,
      sym_arguments,
    STATE(193), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2172] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(96), 1,
      sym_arguments,
    STATE(188), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2210] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(119), 1,
      sym_arguments,
    STATE(181), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2248] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(111), 1,
      sym_arguments,
    STATE(188), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2286] = 3,
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
  [2307] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      sym_test_case_or_task,
    ACTIONS(313), 1,
      sym__whitespace,
    ACTIONS(315), 1,
      sym__line_break,
    STATE(76), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(307), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2338] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(321), 1,
      aux_sym_keyword_token1,
    ACTIONS(323), 1,
      anon_sym_RETURN,
    STATE(246), 1,
      sym_keyword,
    STATE(113), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(317), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [2367] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      sym_test_case_or_task,
    ACTIONS(313), 1,
      sym__whitespace,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
    ACTIONS(329), 1,
      sym__line_break,
    STATE(73), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(327), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2398] = 3,
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
  [2419] = 3,
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
  [2440] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      sym_test_case_or_task,
    ACTIONS(313), 1,
      sym__whitespace,
    ACTIONS(315), 1,
      sym__line_break,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    STATE(76), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(333), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      sym_test_case_or_task,
    ACTIONS(313), 1,
      sym__whitespace,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(335), 1,
      sym__line_break,
    STATE(68), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(333), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2502] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(133), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(141), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(339), 1,
      aux_sym_keyword_token4,
    ACTIONS(337), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(24), 2,
      sym_variable,
      aux_sym_keyword_repeat1,
    STATE(125), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2535] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    ACTIONS(345), 1,
      anon_sym_,
    ACTIONS(348), 1,
      sym_test_case_or_task,
    ACTIONS(351), 1,
      sym__whitespace,
    ACTIONS(354), 1,
      sym__line_break,
    STATE(76), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(343), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2566] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      aux_sym_keyword_token1,
    ACTIONS(359), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(361), 1,
      anon_sym_RETURN,
    STATE(214), 1,
      sym_keyword,
    STATE(114), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(357), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [2595] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      sym_test_case_or_task,
    ACTIONS(313), 1,
      sym__whitespace,
    ACTIONS(315), 1,
      sym__line_break,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    STATE(76), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(365), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2626] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_,
    ACTIONS(133), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(141), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(369), 1,
      aux_sym_keyword_token4,
    ACTIONS(367), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(26), 2,
      sym_variable,
      aux_sym_keyword_repeat1,
    STATE(125), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2659] = 3,
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
  [2680] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 1,
      sym_test_case_or_task,
    ACTIONS(313), 1,
      sym__whitespace,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
    ACTIONS(375), 1,
      sym__line_break,
    STATE(78), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(373), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2711] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(196), 1,
      aux_sym_keyword_token3,
    ACTIONS(198), 1,
      aux_sym_keyword_token4,
    ACTIONS(200), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(202), 1,
      anon_sym_AMP_LBRACE,
    STATE(62), 1,
      aux_sym_argument_repeat1,
    STATE(221), 1,
      sym_argument,
    STATE(170), 2,
      sym_text,
      sym_variable,
    STATE(172), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2746] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(283), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(379), 1,
      aux_sym_keyword_token4,
    ACTIONS(377), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(59), 2,
      sym_variable,
      aux_sym_keyword_repeat1,
    STATE(169), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2779] = 3,
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
  [2799] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(383), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(385), 1,
      sym__line_break,
    STATE(90), 3,
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
  [2825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(383), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(385), 1,
      sym__line_break,
    STATE(90), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(387), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2851] = 8,
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
    STATE(93), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(174), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [2881] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(383), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(391), 1,
      sym__line_break,
    STATE(92), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(389), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(383), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(395), 1,
      sym__line_break,
    STATE(86), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(393), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2933] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(402), 1,
      sym__whitespace,
    ACTIONS(405), 1,
      sym__line_break,
    STATE(90), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(397), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2959] = 3,
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
  [2979] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(383), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(385), 1,
      sym__line_break,
    STATE(90), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(408), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3005] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      ts_builtin_sym_end,
    ACTIONS(412), 1,
      aux_sym_settings_section_token1,
    ACTIONS(415), 1,
      aux_sym_variables_section_token1,
    ACTIONS(418), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(421), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(93), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(174), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [3035] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(424), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(93), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(174), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [3065] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(383), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(426), 1,
      sym__line_break,
    STATE(85), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(408), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(428), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(432), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(434), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3148] = 3,
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
  [3167] = 3,
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
  [3186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(436), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(440), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(444), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(442), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(450), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(430), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(452), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(456), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3338] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(446), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(454), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(448), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(462), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(466), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(464), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(438), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(470), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [3489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(472), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3507] = 3,
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
  [3525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(478), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [3543] = 3,
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
  [3561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(480), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__whitespace,
    ACTIONS(489), 1,
      sym__line_break,
    STATE(122), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    ACTIONS(484), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(494), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(498), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(502), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(506), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(510), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(514), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(518), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(522), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(526), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(530), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(534), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym__whitespace,
    ACTIONS(536), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym__whitespace,
    ACTIONS(540), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(546), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(550), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(181), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3873] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym__separator,
    ACTIONS(114), 1,
      sym__whitespace,
    ACTIONS(552), 1,
      sym__line_break,
    STATE(117), 1,
      sym_keyword_definition_body,
    STATE(22), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [3895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(494), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(514), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(514), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(498), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(510), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(550), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(522), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(546), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(526), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(534), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(530), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4071] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(283), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(285), 1,
      anon_sym_AMP_LBRACE,
    STATE(156), 1,
      sym_variable,
    STATE(169), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(494), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(506), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(510), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(506), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(181), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(518), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(518), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(530), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(526), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4237] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym__separator,
    ACTIONS(114), 1,
      sym__whitespace,
    ACTIONS(552), 1,
      sym__line_break,
    STATE(121), 1,
      sym_keyword_definition_body,
    STATE(22), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [4259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(522), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(534), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(546), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4307] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(550), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(498), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4339] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(139), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(141), 1,
      anon_sym_AMP_LBRACE,
    STATE(138), 1,
      sym_variable,
    STATE(125), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4361] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      sym__whitespace,
    ACTIONS(554), 1,
      sym__line_break,
    STATE(116), 1,
      sym_test_case_or_task_definition_body,
    STATE(25), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [4383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(502), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_,
    ACTIONS(560), 2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(558), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4417] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__separator,
    ACTIONS(153), 1,
      sym__whitespace,
    ACTIONS(554), 1,
      sym__line_break,
    STATE(119), 1,
      sym_test_case_or_task_definition_body,
    STATE(25), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [4439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(502), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(253), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [4482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym__separator,
    ACTIONS(566), 1,
      sym__whitespace,
    ACTIONS(568), 1,
      sym__line_break,
    STATE(168), 1,
      sym__empty_line,
  [4498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      sym__separator,
    ACTIONS(574), 1,
      sym__line_break,
    ACTIONS(570), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      sym__separator,
    ACTIONS(580), 1,
      sym__line_break,
    ACTIONS(576), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym__whitespace,
    ACTIONS(582), 1,
      sym__separator,
    ACTIONS(584), 1,
      sym__line_break,
    STATE(171), 1,
      sym__empty_line,
  [4542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(588), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(590), 1,
      sym__line_break,
    STATE(199), 1,
      aux_sym_arguments_repeat1,
  [4568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(592), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [4581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(81), 2,
      sym__separator,
      sym__whitespace,
  [4592] = 4,
    ACTIONS(594), 1,
      anon_sym_,
    ACTIONS(596), 1,
      sym_variable_name,
    ACTIONS(598), 1,
      anon_sym_EMPTY,
    ACTIONS(600), 1,
      sym_comment,
  [4605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(602), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(604), 1,
      sym__line_break,
    STATE(186), 1,
      aux_sym_arguments_repeat1,
  [4631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(606), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(608), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(190), 1,
      aux_sym_arguments_repeat1,
  [4670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__separator,
    ACTIONS(612), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(616), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(618), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [4707] = 4,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_,
    ACTIONS(622), 1,
      sym_variable_name,
    ACTIONS(624), 1,
      anon_sym_EMPTY,
  [4720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(626), 1,
      sym__line_break,
    STATE(194), 1,
      aux_sym_arguments_repeat1,
  [4733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(628), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(630), 1,
      sym__line_break,
    STATE(196), 1,
      aux_sym_arguments_repeat1,
  [4759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(632), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym__separator,
    ACTIONS(637), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4785] = 4,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_,
    ACTIONS(641), 1,
      sym_variable_name,
    ACTIONS(643), 1,
      anon_sym_EMPTY,
  [4798] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(645), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym__separator,
    ACTIONS(647), 1,
      sym__line_break,
    STATE(187), 1,
      aux_sym_arguments_repeat1,
  [4824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      aux_sym_settings_section_token3,
    ACTIONS(651), 1,
      sym__line_break,
  [4834] = 3,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_variable_name,
    ACTIONS(655), 1,
      anon_sym_EMPTY,
  [4844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__separator,
    ACTIONS(659), 1,
      sym__line_break,
  [4854] = 3,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_,
    ACTIONS(663), 1,
      sym_variable_name,
  [4864] = 3,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_variable_name,
    ACTIONS(667), 1,
      anon_sym_EMPTY,
  [4874] = 3,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_,
    ACTIONS(671), 1,
      sym_variable_name,
  [4884] = 3,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_,
    ACTIONS(675), 1,
      sym_variable_name,
  [4894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym__separator,
    ACTIONS(679), 1,
      sym__line_break,
  [4904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(683), 1,
      anon_sym_,
  [4914] = 3,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym_variable_name,
    ACTIONS(687), 1,
      anon_sym_EMPTY,
  [4924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(691), 1,
      anon_sym_,
  [4934] = 3,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_,
    ACTIONS(695), 1,
      sym_variable_name,
  [4944] = 3,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_,
    ACTIONS(699), 1,
      sym_variable_name,
  [4954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym__separator,
    ACTIONS(703), 1,
      sym__line_break,
  [4964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(707), 1,
      anon_sym_,
  [4974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 1,
      anon_sym_,
  [4984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(715), 1,
      anon_sym_,
  [4994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    ACTIONS(719), 1,
      anon_sym_,
  [5004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 1,
      anon_sym_,
  [5014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 1,
      anon_sym_,
  [5024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      sym__line_break,
    ACTIONS(729), 1,
      sym__separator,
  [5034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_RBRACE,
    ACTIONS(733), 1,
      anon_sym_,
  [5044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    ACTIONS(737), 1,
      anon_sym_,
  [5054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
    ACTIONS(741), 1,
      anon_sym_,
  [5064] = 3,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_,
    ACTIONS(745), 1,
      sym_variable_name,
  [5074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    ACTIONS(749), 1,
      anon_sym_,
  [5084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      aux_sym_keyword_token1,
    STATE(302), 1,
      sym_keyword,
  [5094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      aux_sym_settings_section_token3,
    ACTIONS(755), 1,
      sym__line_break,
  [5104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
    ACTIONS(759), 1,
      anon_sym_,
  [5114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_settings_section_token3,
    ACTIONS(763), 1,
      sym__line_break,
  [5124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym__separator,
    ACTIONS(767), 1,
      sym__line_break,
  [5134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym__separator,
    ACTIONS(771), 1,
      sym__line_break,
  [5144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    ACTIONS(775), 1,
      anon_sym_,
  [5154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym__separator,
    ACTIONS(779), 1,
      sym__line_break,
  [5164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym__separator,
    ACTIONS(783), 1,
      sym__line_break,
  [5174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym_settings_section_token3,
    ACTIONS(787), 1,
      sym__line_break,
  [5184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    ACTIONS(791), 1,
      anon_sym_,
  [5194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(795), 1,
      anon_sym_,
  [5204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(799), 1,
      anon_sym_,
  [5214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      anon_sym_,
  [5224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    ACTIONS(807), 1,
      anon_sym_,
  [5234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RBRACE,
    ACTIONS(811), 1,
      anon_sym_,
  [5244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym__separator,
    ACTIONS(815), 1,
      sym__line_break,
  [5254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    ACTIONS(819), 1,
      anon_sym_,
  [5264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
    ACTIONS(823), 1,
      anon_sym_,
  [5274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym__separator,
    ACTIONS(827), 1,
      sym__line_break,
  [5284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym__separator,
    ACTIONS(831), 1,
      sym__line_break,
  [5294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
    ACTIONS(835), 1,
      anon_sym_,
  [5304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
    ACTIONS(839), 1,
      anon_sym_,
  [5314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
  [5321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym__separator,
  [5328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
  [5335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
  [5342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
  [5349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
  [5356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
  [5363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
  [5370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
  [5377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      sym__line_break,
  [5384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym_settings_section_token2,
  [5391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__line_break,
  [5398] = 2,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_variable_name,
  [5405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__separator,
  [5412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      aux_sym_settings_section_token2,
  [5419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      aux_sym_settings_section_token2,
  [5426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym__line_break,
  [5433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym__line_break,
  [5440] = 2,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_variable_name,
  [5447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__line_break,
  [5454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym__line_break,
  [5461] = 2,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym_variable_name,
  [5468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      ts_builtin_sym_end,
  [5475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym_test_case_or_task,
  [5482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym__line_break,
  [5489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
  [5496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
  [5503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__separator,
  [5510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym__line_break,
  [5517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
  [5524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
  [5531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
  [5538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
  [5545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
  [5552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
  [5559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_RBRACE,
  [5566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [5573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym__line_break,
  [5580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      aux_sym_settings_section_token2,
  [5587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
  [5594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
  [5601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
  [5608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym__line_break,
  [5615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__line_break,
  [5622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_RBRACE,
  [5629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
  [5636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
  [5643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
  [5650] = 2,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_variable_name,
  [5657] = 2,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym_variable_name,
  [5664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
  [5671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
  [5678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym__line_break,
  [5685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      sym__separator,
  [5692] = 2,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym_variable_name,
  [5699] = 2,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(927), 1,
      sym_variable_name,
  [5706] = 2,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym_variable_name,
  [5713] = 2,
    ACTIONS(600), 1,
      sym_comment,
    ACTIONS(931), 1,
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
  [SMALL_STATE(20)] = 712,
  [SMALL_STATE(21)] = 741,
  [SMALL_STATE(22)] = 772,
  [SMALL_STATE(23)] = 803,
  [SMALL_STATE(24)] = 834,
  [SMALL_STATE(25)] = 873,
  [SMALL_STATE(26)] = 904,
  [SMALL_STATE(27)] = 943,
  [SMALL_STATE(28)] = 982,
  [SMALL_STATE(29)] = 1011,
  [SMALL_STATE(30)] = 1038,
  [SMALL_STATE(31)] = 1065,
  [SMALL_STATE(32)] = 1092,
  [SMALL_STATE(33)] = 1121,
  [SMALL_STATE(34)] = 1148,
  [SMALL_STATE(35)] = 1177,
  [SMALL_STATE(36)] = 1204,
  [SMALL_STATE(37)] = 1242,
  [SMALL_STATE(38)] = 1274,
  [SMALL_STATE(39)] = 1312,
  [SMALL_STATE(40)] = 1344,
  [SMALL_STATE(41)] = 1382,
  [SMALL_STATE(42)] = 1420,
  [SMALL_STATE(43)] = 1456,
  [SMALL_STATE(44)] = 1494,
  [SMALL_STATE(45)] = 1532,
  [SMALL_STATE(46)] = 1564,
  [SMALL_STATE(47)] = 1602,
  [SMALL_STATE(48)] = 1640,
  [SMALL_STATE(49)] = 1678,
  [SMALL_STATE(50)] = 1716,
  [SMALL_STATE(51)] = 1748,
  [SMALL_STATE(52)] = 1780,
  [SMALL_STATE(53)] = 1812,
  [SMALL_STATE(54)] = 1840,
  [SMALL_STATE(55)] = 1868,
  [SMALL_STATE(56)] = 1906,
  [SMALL_STATE(57)] = 1934,
  [SMALL_STATE(58)] = 1962,
  [SMALL_STATE(59)] = 1990,
  [SMALL_STATE(60)] = 2026,
  [SMALL_STATE(61)] = 2064,
  [SMALL_STATE(62)] = 2096,
  [SMALL_STATE(63)] = 2134,
  [SMALL_STATE(64)] = 2172,
  [SMALL_STATE(65)] = 2210,
  [SMALL_STATE(66)] = 2248,
  [SMALL_STATE(67)] = 2286,
  [SMALL_STATE(68)] = 2307,
  [SMALL_STATE(69)] = 2338,
  [SMALL_STATE(70)] = 2367,
  [SMALL_STATE(71)] = 2398,
  [SMALL_STATE(72)] = 2419,
  [SMALL_STATE(73)] = 2440,
  [SMALL_STATE(74)] = 2471,
  [SMALL_STATE(75)] = 2502,
  [SMALL_STATE(76)] = 2535,
  [SMALL_STATE(77)] = 2566,
  [SMALL_STATE(78)] = 2595,
  [SMALL_STATE(79)] = 2626,
  [SMALL_STATE(80)] = 2659,
  [SMALL_STATE(81)] = 2680,
  [SMALL_STATE(82)] = 2711,
  [SMALL_STATE(83)] = 2746,
  [SMALL_STATE(84)] = 2779,
  [SMALL_STATE(85)] = 2799,
  [SMALL_STATE(86)] = 2825,
  [SMALL_STATE(87)] = 2851,
  [SMALL_STATE(88)] = 2881,
  [SMALL_STATE(89)] = 2907,
  [SMALL_STATE(90)] = 2933,
  [SMALL_STATE(91)] = 2959,
  [SMALL_STATE(92)] = 2979,
  [SMALL_STATE(93)] = 3005,
  [SMALL_STATE(94)] = 3035,
  [SMALL_STATE(95)] = 3065,
  [SMALL_STATE(96)] = 3091,
  [SMALL_STATE(97)] = 3110,
  [SMALL_STATE(98)] = 3129,
  [SMALL_STATE(99)] = 3148,
  [SMALL_STATE(100)] = 3167,
  [SMALL_STATE(101)] = 3186,
  [SMALL_STATE(102)] = 3205,
  [SMALL_STATE(103)] = 3224,
  [SMALL_STATE(104)] = 3243,
  [SMALL_STATE(105)] = 3262,
  [SMALL_STATE(106)] = 3281,
  [SMALL_STATE(107)] = 3300,
  [SMALL_STATE(108)] = 3319,
  [SMALL_STATE(109)] = 3338,
  [SMALL_STATE(110)] = 3357,
  [SMALL_STATE(111)] = 3376,
  [SMALL_STATE(112)] = 3395,
  [SMALL_STATE(113)] = 3414,
  [SMALL_STATE(114)] = 3433,
  [SMALL_STATE(115)] = 3452,
  [SMALL_STATE(116)] = 3471,
  [SMALL_STATE(117)] = 3489,
  [SMALL_STATE(118)] = 3507,
  [SMALL_STATE(119)] = 3525,
  [SMALL_STATE(120)] = 3543,
  [SMALL_STATE(121)] = 3561,
  [SMALL_STATE(122)] = 3579,
  [SMALL_STATE(123)] = 3601,
  [SMALL_STATE(124)] = 3618,
  [SMALL_STATE(125)] = 3635,
  [SMALL_STATE(126)] = 3652,
  [SMALL_STATE(127)] = 3669,
  [SMALL_STATE(128)] = 3686,
  [SMALL_STATE(129)] = 3703,
  [SMALL_STATE(130)] = 3720,
  [SMALL_STATE(131)] = 3737,
  [SMALL_STATE(132)] = 3754,
  [SMALL_STATE(133)] = 3771,
  [SMALL_STATE(134)] = 3788,
  [SMALL_STATE(135)] = 3805,
  [SMALL_STATE(136)] = 3822,
  [SMALL_STATE(137)] = 3839,
  [SMALL_STATE(138)] = 3856,
  [SMALL_STATE(139)] = 3873,
  [SMALL_STATE(140)] = 3895,
  [SMALL_STATE(141)] = 3911,
  [SMALL_STATE(142)] = 3927,
  [SMALL_STATE(143)] = 3943,
  [SMALL_STATE(144)] = 3959,
  [SMALL_STATE(145)] = 3975,
  [SMALL_STATE(146)] = 3991,
  [SMALL_STATE(147)] = 4007,
  [SMALL_STATE(148)] = 4023,
  [SMALL_STATE(149)] = 4039,
  [SMALL_STATE(150)] = 4055,
  [SMALL_STATE(151)] = 4071,
  [SMALL_STATE(152)] = 4093,
  [SMALL_STATE(153)] = 4109,
  [SMALL_STATE(154)] = 4125,
  [SMALL_STATE(155)] = 4141,
  [SMALL_STATE(156)] = 4157,
  [SMALL_STATE(157)] = 4173,
  [SMALL_STATE(158)] = 4189,
  [SMALL_STATE(159)] = 4205,
  [SMALL_STATE(160)] = 4221,
  [SMALL_STATE(161)] = 4237,
  [SMALL_STATE(162)] = 4259,
  [SMALL_STATE(163)] = 4275,
  [SMALL_STATE(164)] = 4291,
  [SMALL_STATE(165)] = 4307,
  [SMALL_STATE(166)] = 4323,
  [SMALL_STATE(167)] = 4339,
  [SMALL_STATE(168)] = 4361,
  [SMALL_STATE(169)] = 4383,
  [SMALL_STATE(170)] = 4399,
  [SMALL_STATE(171)] = 4417,
  [SMALL_STATE(172)] = 4439,
  [SMALL_STATE(173)] = 4455,
  [SMALL_STATE(174)] = 4470,
  [SMALL_STATE(175)] = 4482,
  [SMALL_STATE(176)] = 4498,
  [SMALL_STATE(177)] = 4512,
  [SMALL_STATE(178)] = 4526,
  [SMALL_STATE(179)] = 4542,
  [SMALL_STATE(180)] = 4555,
  [SMALL_STATE(181)] = 4568,
  [SMALL_STATE(182)] = 4581,
  [SMALL_STATE(183)] = 4592,
  [SMALL_STATE(184)] = 4605,
  [SMALL_STATE(185)] = 4618,
  [SMALL_STATE(186)] = 4631,
  [SMALL_STATE(187)] = 4644,
  [SMALL_STATE(188)] = 4657,
  [SMALL_STATE(189)] = 4670,
  [SMALL_STATE(190)] = 4681,
  [SMALL_STATE(191)] = 4694,
  [SMALL_STATE(192)] = 4707,
  [SMALL_STATE(193)] = 4720,
  [SMALL_STATE(194)] = 4733,
  [SMALL_STATE(195)] = 4746,
  [SMALL_STATE(196)] = 4759,
  [SMALL_STATE(197)] = 4772,
  [SMALL_STATE(198)] = 4785,
  [SMALL_STATE(199)] = 4798,
  [SMALL_STATE(200)] = 4811,
  [SMALL_STATE(201)] = 4824,
  [SMALL_STATE(202)] = 4834,
  [SMALL_STATE(203)] = 4844,
  [SMALL_STATE(204)] = 4854,
  [SMALL_STATE(205)] = 4864,
  [SMALL_STATE(206)] = 4874,
  [SMALL_STATE(207)] = 4884,
  [SMALL_STATE(208)] = 4894,
  [SMALL_STATE(209)] = 4904,
  [SMALL_STATE(210)] = 4914,
  [SMALL_STATE(211)] = 4924,
  [SMALL_STATE(212)] = 4934,
  [SMALL_STATE(213)] = 4944,
  [SMALL_STATE(214)] = 4954,
  [SMALL_STATE(215)] = 4964,
  [SMALL_STATE(216)] = 4974,
  [SMALL_STATE(217)] = 4984,
  [SMALL_STATE(218)] = 4994,
  [SMALL_STATE(219)] = 5004,
  [SMALL_STATE(220)] = 5014,
  [SMALL_STATE(221)] = 5024,
  [SMALL_STATE(222)] = 5034,
  [SMALL_STATE(223)] = 5044,
  [SMALL_STATE(224)] = 5054,
  [SMALL_STATE(225)] = 5064,
  [SMALL_STATE(226)] = 5074,
  [SMALL_STATE(227)] = 5084,
  [SMALL_STATE(228)] = 5094,
  [SMALL_STATE(229)] = 5104,
  [SMALL_STATE(230)] = 5114,
  [SMALL_STATE(231)] = 5124,
  [SMALL_STATE(232)] = 5134,
  [SMALL_STATE(233)] = 5144,
  [SMALL_STATE(234)] = 5154,
  [SMALL_STATE(235)] = 5164,
  [SMALL_STATE(236)] = 5174,
  [SMALL_STATE(237)] = 5184,
  [SMALL_STATE(238)] = 5194,
  [SMALL_STATE(239)] = 5204,
  [SMALL_STATE(240)] = 5214,
  [SMALL_STATE(241)] = 5224,
  [SMALL_STATE(242)] = 5234,
  [SMALL_STATE(243)] = 5244,
  [SMALL_STATE(244)] = 5254,
  [SMALL_STATE(245)] = 5264,
  [SMALL_STATE(246)] = 5274,
  [SMALL_STATE(247)] = 5284,
  [SMALL_STATE(248)] = 5294,
  [SMALL_STATE(249)] = 5304,
  [SMALL_STATE(250)] = 5314,
  [SMALL_STATE(251)] = 5321,
  [SMALL_STATE(252)] = 5328,
  [SMALL_STATE(253)] = 5335,
  [SMALL_STATE(254)] = 5342,
  [SMALL_STATE(255)] = 5349,
  [SMALL_STATE(256)] = 5356,
  [SMALL_STATE(257)] = 5363,
  [SMALL_STATE(258)] = 5370,
  [SMALL_STATE(259)] = 5377,
  [SMALL_STATE(260)] = 5384,
  [SMALL_STATE(261)] = 5391,
  [SMALL_STATE(262)] = 5398,
  [SMALL_STATE(263)] = 5405,
  [SMALL_STATE(264)] = 5412,
  [SMALL_STATE(265)] = 5419,
  [SMALL_STATE(266)] = 5426,
  [SMALL_STATE(267)] = 5433,
  [SMALL_STATE(268)] = 5440,
  [SMALL_STATE(269)] = 5447,
  [SMALL_STATE(270)] = 5454,
  [SMALL_STATE(271)] = 5461,
  [SMALL_STATE(272)] = 5468,
  [SMALL_STATE(273)] = 5475,
  [SMALL_STATE(274)] = 5482,
  [SMALL_STATE(275)] = 5489,
  [SMALL_STATE(276)] = 5496,
  [SMALL_STATE(277)] = 5503,
  [SMALL_STATE(278)] = 5510,
  [SMALL_STATE(279)] = 5517,
  [SMALL_STATE(280)] = 5524,
  [SMALL_STATE(281)] = 5531,
  [SMALL_STATE(282)] = 5538,
  [SMALL_STATE(283)] = 5545,
  [SMALL_STATE(284)] = 5552,
  [SMALL_STATE(285)] = 5559,
  [SMALL_STATE(286)] = 5566,
  [SMALL_STATE(287)] = 5573,
  [SMALL_STATE(288)] = 5580,
  [SMALL_STATE(289)] = 5587,
  [SMALL_STATE(290)] = 5594,
  [SMALL_STATE(291)] = 5601,
  [SMALL_STATE(292)] = 5608,
  [SMALL_STATE(293)] = 5615,
  [SMALL_STATE(294)] = 5622,
  [SMALL_STATE(295)] = 5629,
  [SMALL_STATE(296)] = 5636,
  [SMALL_STATE(297)] = 5643,
  [SMALL_STATE(298)] = 5650,
  [SMALL_STATE(299)] = 5657,
  [SMALL_STATE(300)] = 5664,
  [SMALL_STATE(301)] = 5671,
  [SMALL_STATE(302)] = 5678,
  [SMALL_STATE(303)] = 5685,
  [SMALL_STATE(304)] = 5692,
  [SMALL_STATE(305)] = 5699,
  [SMALL_STATE(306)] = 5706,
  [SMALL_STATE(307)] = 5713,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(200),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(263),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(267),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(69),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(293),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(77),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(292),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(23),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(167),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(183),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(27),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(27),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(207),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(206),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(195),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(195),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(191),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(151),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(192),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(42),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(42),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(204),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(225),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(198),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(75),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(75),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(213),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(212),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(185),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(185),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(227),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(83),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(261),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(61),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(273),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(178),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(266),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(76),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(268),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(267),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(90),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(208),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(231),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(235),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(234),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 4),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 3),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 4),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 5),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(82),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [877] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [927] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
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
