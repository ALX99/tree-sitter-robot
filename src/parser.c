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
#define STATE_COUNT 306
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
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
  [20] = 4,
  [21] = 21,
  [22] = 2,
  [23] = 5,
  [24] = 24,
  [25] = 4,
  [26] = 26,
  [27] = 27,
  [28] = 6,
  [29] = 5,
  [30] = 6,
  [31] = 3,
  [32] = 3,
  [33] = 33,
  [34] = 34,
  [35] = 3,
  [36] = 4,
  [37] = 5,
  [38] = 38,
  [39] = 2,
  [40] = 40,
  [41] = 6,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 8,
  [52] = 52,
  [53] = 7,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 8,
  [58] = 58,
  [59] = 42,
  [60] = 43,
  [61] = 7,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 7,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 8,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 74,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 68,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 63,
  [92] = 72,
  [93] = 93,
  [94] = 93,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 97,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 16,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 16,
  [109] = 105,
  [110] = 103,
  [111] = 102,
  [112] = 95,
  [113] = 99,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 16,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 16,
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
  [139] = 138,
  [140] = 137,
  [141] = 125,
  [142] = 142,
  [143] = 124,
  [144] = 128,
  [145] = 145,
  [146] = 132,
  [147] = 147,
  [148] = 134,
  [149] = 127,
  [150] = 130,
  [151] = 151,
  [152] = 126,
  [153] = 129,
  [154] = 133,
  [155] = 136,
  [156] = 156,
  [157] = 156,
  [158] = 138,
  [159] = 136,
  [160] = 128,
  [161] = 124,
  [162] = 125,
  [163] = 132,
  [164] = 164,
  [165] = 165,
  [166] = 133,
  [167] = 167,
  [168] = 127,
  [169] = 126,
  [170] = 137,
  [171] = 130,
  [172] = 134,
  [173] = 173,
  [174] = 174,
  [175] = 173,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 178,
  [180] = 180,
  [181] = 180,
  [182] = 177,
  [183] = 183,
  [184] = 180,
  [185] = 178,
  [186] = 186,
  [187] = 183,
  [188] = 186,
  [189] = 189,
  [190] = 190,
  [191] = 180,
  [192] = 183,
  [193] = 16,
  [194] = 186,
  [195] = 183,
  [196] = 177,
  [197] = 177,
  [198] = 178,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 201,
  [205] = 205,
  [206] = 205,
  [207] = 207,
  [208] = 208,
  [209] = 207,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 201,
  [214] = 205,
  [215] = 207,
  [216] = 200,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 200,
  [221] = 221,
  [222] = 208,
  [223] = 223,
  [224] = 223,
  [225] = 221,
  [226] = 226,
  [227] = 227,
  [228] = 210,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 202,
  [234] = 234,
  [235] = 203,
  [236] = 236,
  [237] = 203,
  [238] = 202,
  [239] = 232,
  [240] = 210,
  [241] = 211,
  [242] = 221,
  [243] = 223,
  [244] = 232,
  [245] = 219,
  [246] = 208,
  [247] = 217,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 248,
  [257] = 255,
  [258] = 258,
  [259] = 254,
  [260] = 253,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 264,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 261,
  [273] = 261,
  [274] = 274,
  [275] = 275,
  [276] = 250,
  [277] = 274,
  [278] = 251,
  [279] = 279,
  [280] = 253,
  [281] = 254,
  [282] = 255,
  [283] = 248,
  [284] = 284,
  [285] = 264,
  [286] = 264,
  [287] = 287,
  [288] = 288,
  [289] = 251,
  [290] = 264,
  [291] = 264,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 252,
  [297] = 297,
  [298] = 266,
  [299] = 250,
  [300] = 274,
  [301] = 297,
  [302] = 302,
  [303] = 252,
  [304] = 297,
  [305] = 287,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(304);
      if (lookahead == '\t') ADVANCE(308);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '=') ADVANCE(332);
      if (lookahead == '}') ADVANCE(331);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(307);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(343);
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '}') ADVANCE(331);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '=') ADVANCE(333);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(438);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(337);
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(438);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '=') ADVANCE(332);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(438);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == 'R') ADVANCE(418);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(438);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '#') ADVANCE(423);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '&' ||
          lookahead == '@') ADVANCE(295);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0) ADVANCE(310);
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
      if (lookahead == '*') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == ']') ADVANCE(346);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == ']') ADVANCE(355);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ']') ADVANCE(350);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ']') ADVANCE(349);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ']') ADVANCE(356);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ']') ADVANCE(345);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ']') ADVANCE(348);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == ']') ADVANCE(347);
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
      if (lookahead == '$') ADVANCE(419);
      if (lookahead == 'R') ADVANCE(418);
      if (lookahead == '[') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(413);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(308);
      if (lookahead != 0) ADVANCE(307);
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
          lookahead != '\r') ADVANCE(413);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == 'E') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(353);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(334);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(305);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(328);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(351);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(405);
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
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(405);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(405);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(405);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(405);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(358);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(360);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(425);
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
      if (lookahead == ']') ADVANCE(346);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(355);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(350);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(349);
      END_STATE();
    case 75:
      if (lookahead == ']') ADVANCE(356);
      END_STATE();
    case 76:
      if (lookahead == ']') ADVANCE(345);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(348);
      END_STATE();
    case 78:
      if (lookahead == ']') ADVANCE(347);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(330);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(357);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 81:
      if (lookahead == '{') ADVANCE(434);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 82:
      if (lookahead == '{') ADVANCE(433);
      if (lookahead != 0) ADVANCE(424);
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
          lookahead == 'a') ADVANCE(315);
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
          lookahead == 'c') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(405);
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
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
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
          lookahead == 'k') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(405);
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
          lookahead == 'n') ADVANCE(314);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
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
          lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 208:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(320);
      END_STATE();
    case 209:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(316);
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
          lookahead == 's') ADVANCE(313);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(319);
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
          lookahead == 't') ADVANCE(327);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
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
          lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 293:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(405);
      END_STATE();
    case 294:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 295:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(424);
      END_STATE();
    case 296:
      if (eof) ADVANCE(304);
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '}') ADVANCE(331);
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
    case 297:
      if (eof) ADVANCE(304);
      if (lookahead == '\t') ADVANCE(441);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 298:
      if (eof) ADVANCE(304);
      if (lookahead == '\t') ADVANCE(442);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 299:
      if (eof) ADVANCE(304);
      if (lookahead == '\t') ADVANCE(442);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 300:
      if (eof) ADVANCE(304);
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 301:
      if (eof) ADVANCE(304);
      if (lookahead == '\t') ADVANCE(437);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead == '.') ADVANCE(417);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 302:
      if (eof) ADVANCE(304);
      if (lookahead == '\t') ADVANCE(438);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 303:
      if (eof) ADVANCE(304);
      if (lookahead == '\t') ADVANCE(438);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\r') ADVANCE(444);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '*') ADVANCE(416);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(420);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(441);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(442);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(420);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '.') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(392);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(405);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 415:
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
    case 416:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '{') ADVANCE(357);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(436);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'M') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'T') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'Y') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(432);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(441);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '#') ADVANCE(294);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(443);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 296},
  [2] = {.lex_state = 296},
  [3] = {.lex_state = 296},
  [4] = {.lex_state = 296},
  [5] = {.lex_state = 296},
  [6] = {.lex_state = 296},
  [7] = {.lex_state = 296},
  [8] = {.lex_state = 296},
  [9] = {.lex_state = 296},
  [10] = {.lex_state = 296},
  [11] = {.lex_state = 296},
  [12] = {.lex_state = 296},
  [13] = {.lex_state = 296},
  [14] = {.lex_state = 296},
  [15] = {.lex_state = 296},
  [16] = {.lex_state = 296},
  [17] = {.lex_state = 296},
  [18] = {.lex_state = 296},
  [19] = {.lex_state = 300},
  [20] = {.lex_state = 300},
  [21] = {.lex_state = 303},
  [22] = {.lex_state = 301},
  [23] = {.lex_state = 301},
  [24] = {.lex_state = 302},
  [25] = {.lex_state = 301},
  [26] = {.lex_state = 302},
  [27] = {.lex_state = 303},
  [28] = {.lex_state = 300},
  [29] = {.lex_state = 300},
  [30] = {.lex_state = 301},
  [31] = {.lex_state = 300},
  [32] = {.lex_state = 301},
  [33] = {.lex_state = 299},
  [34] = {.lex_state = 299},
  [35] = {.lex_state = 297},
  [36] = {.lex_state = 297},
  [37] = {.lex_state = 297},
  [38] = {.lex_state = 299},
  [39] = {.lex_state = 297},
  [40] = {.lex_state = 299},
  [41] = {.lex_state = 297},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 299},
  [45] = {.lex_state = 299},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 299},
  [48] = {.lex_state = 298},
  [49] = {.lex_state = 298},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 300},
  [52] = {.lex_state = 298},
  [53] = {.lex_state = 301},
  [54] = {.lex_state = 298},
  [55] = {.lex_state = 298},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 301},
  [58] = {.lex_state = 298},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 300},
  [62] = {.lex_state = 298},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 297},
  [66] = {.lex_state = 296},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 297},
  [70] = {.lex_state = 296},
  [71] = {.lex_state = 296},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 296},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 296},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 296},
  [81] = {.lex_state = 296},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 296},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 296},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 296},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 302},
  [94] = {.lex_state = 303},
  [95] = {.lex_state = 303},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 302},
  [98] = {.lex_state = 302},
  [99] = {.lex_state = 303},
  [100] = {.lex_state = 303},
  [101] = {.lex_state = 303},
  [102] = {.lex_state = 303},
  [103] = {.lex_state = 302},
  [104] = {.lex_state = 302},
  [105] = {.lex_state = 303},
  [106] = {.lex_state = 302},
  [107] = {.lex_state = 303},
  [108] = {.lex_state = 303},
  [109] = {.lex_state = 302},
  [110] = {.lex_state = 303},
  [111] = {.lex_state = 302},
  [112] = {.lex_state = 302},
  [113] = {.lex_state = 302},
  [114] = {.lex_state = 298},
  [115] = {.lex_state = 299},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 298},
  [119] = {.lex_state = 298},
  [120] = {.lex_state = 299},
  [121] = {.lex_state = 296},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 299},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 296},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 296},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 296},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 303},
  [178] = {.lex_state = 303},
  [179] = {.lex_state = 303},
  [180] = {.lex_state = 303},
  [181] = {.lex_state = 303},
  [182] = {.lex_state = 303},
  [183] = {.lex_state = 303},
  [184] = {.lex_state = 303},
  [185] = {.lex_state = 303},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 303},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 303},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 303},
  [192] = {.lex_state = 303},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 303},
  [196] = {.lex_state = 303},
  [197] = {.lex_state = 303},
  [198] = {.lex_state = 303},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 39},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 39},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 303},
  [212] = {.lex_state = 303},
  [213] = {.lex_state = 39},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 303},
  [218] = {.lex_state = 303},
  [219] = {.lex_state = 303},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 303},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 303},
  [230] = {.lex_state = 38},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 303},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 303},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 303},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 303},
  [248] = {.lex_state = 296},
  [249] = {.lex_state = 296},
  [250] = {.lex_state = 296},
  [251] = {.lex_state = 296},
  [252] = {.lex_state = 40},
  [253] = {.lex_state = 296},
  [254] = {.lex_state = 296},
  [255] = {.lex_state = 296},
  [256] = {.lex_state = 296},
  [257] = {.lex_state = 296},
  [258] = {.lex_state = 35},
  [259] = {.lex_state = 296},
  [260] = {.lex_state = 296},
  [261] = {.lex_state = 296},
  [262] = {.lex_state = 35},
  [263] = {.lex_state = 35},
  [264] = {.lex_state = 296},
  [265] = {.lex_state = 35},
  [266] = {.lex_state = 296},
  [267] = {.lex_state = 303},
  [268] = {.lex_state = 296},
  [269] = {.lex_state = 40},
  [270] = {.lex_state = 296},
  [271] = {.lex_state = 37},
  [272] = {.lex_state = 296},
  [273] = {.lex_state = 296},
  [274] = {.lex_state = 296},
  [275] = {.lex_state = 296},
  [276] = {.lex_state = 296},
  [277] = {.lex_state = 296},
  [278] = {.lex_state = 296},
  [279] = {.lex_state = 303},
  [280] = {.lex_state = 296},
  [281] = {.lex_state = 296},
  [282] = {.lex_state = 296},
  [283] = {.lex_state = 296},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 296},
  [286] = {.lex_state = 296},
  [287] = {.lex_state = 40},
  [288] = {.lex_state = 303},
  [289] = {.lex_state = 296},
  [290] = {.lex_state = 296},
  [291] = {.lex_state = 296},
  [292] = {.lex_state = 296},
  [293] = {.lex_state = 296},
  [294] = {.lex_state = 296},
  [295] = {.lex_state = 303},
  [296] = {.lex_state = 40},
  [297] = {.lex_state = 40},
  [298] = {.lex_state = 296},
  [299] = {.lex_state = 296},
  [300] = {.lex_state = 296},
  [301] = {.lex_state = 40},
  [302] = {.lex_state = 296},
  [303] = {.lex_state = 40},
  [304] = {.lex_state = 40},
  [305] = {.lex_state = 40},
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
    [sym_source_file] = STATE(284),
    [sym_section] = STATE(90),
    [sym_settings_section] = STATE(164),
    [sym_variables_section] = STATE(164),
    [sym_keywords_section] = STATE(164),
    [sym_test_cases_or_tasks_section] = STATE(164),
    [sym__empty_line] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_source_file_repeat2] = STATE(90),
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
    STATE(12), 3,
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
    ACTIONS(54), 1,
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
  [366] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(58), 1,
      sym__line_break,
    STATE(14), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(56), 6,
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
    ACTIONS(54), 1,
      sym__line_break,
    STATE(15), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(60), 6,
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
    STATE(10), 3,
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
    ACTIONS(54), 1,
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
    STATE(81), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(121), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    STATE(164), 4,
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
    STATE(31), 2,
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
  [741] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym__separator,
    ACTIONS(102), 1,
      sym__whitespace,
    ACTIONS(105), 1,
      sym__line_break,
    ACTIONS(97), 2,
      anon_sym_,
      aux_sym_keyword_token1,
    STATE(21), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [772] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(32), 2,
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
  [799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(32), 2,
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
  [826] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      sym__separator,
    ACTIONS(116), 1,
      sym__whitespace,
    ACTIONS(118), 1,
      sym__line_break,
    STATE(26), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(112), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(22), 2,
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
  [884] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      sym__separator,
    ACTIONS(127), 1,
      sym__whitespace,
    ACTIONS(130), 1,
      sym__line_break,
    STATE(26), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(122), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [915] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym__separator,
    ACTIONS(139), 1,
      sym__whitespace,
    ACTIONS(141), 1,
      sym__line_break,
    ACTIONS(135), 2,
      anon_sym_,
      aux_sym_keyword_token1,
    STATE(21), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [946] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(29), 2,
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
  [975] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_ellipses,
    ACTIONS(93), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(31), 2,
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
  [1004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(23), 2,
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
  [1031] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_ellipses,
    ACTIONS(146), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(31), 2,
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
  [1060] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(32), 2,
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
  [1087] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_,
    ACTIONS(156), 1,
      aux_sym_keyword_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(160), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(38), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1119] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_,
    ACTIONS(156), 1,
      aux_sym_keyword_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(162), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(47), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_ellipses,
    ACTIONS(167), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(35), 2,
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
  [1179] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_ellipses,
    ACTIONS(172), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(39), 2,
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
  [1207] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_ellipses,
    ACTIONS(172), 1,
      sym_indented_ellipses,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(35), 2,
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
  [1235] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_,
    ACTIONS(179), 1,
      aux_sym_keyword_token1,
    ACTIONS(182), 1,
      sym__whitespace,
    ACTIONS(185), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(38), 3,
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
  [1267] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_ellipses,
    ACTIONS(172), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(35), 2,
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
  [1295] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_,
    ACTIONS(156), 1,
      aux_sym_keyword_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(160), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(38), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1327] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_ellipses,
    ACTIONS(172), 1,
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
  [1355] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_,
    ACTIONS(193), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(199), 1,
      aux_sym_keyword_token4,
    ACTIONS(202), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(205), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(208), 1,
      sym__separator,
    ACTIONS(210), 1,
      sym__line_break,
    ACTIONS(196), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(42), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [1391] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_,
    ACTIONS(214), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(218), 1,
      aux_sym_keyword_token4,
    ACTIONS(220), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(222), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(224), 1,
      sym__separator,
    ACTIONS(226), 1,
      sym__line_break,
    ACTIONS(216), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(42), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [1427] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_,
    ACTIONS(156), 1,
      aux_sym_keyword_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(230), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1459] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_,
    ACTIONS(156), 1,
      aux_sym_keyword_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(234), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(40), 3,
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
  [1491] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_,
    ACTIONS(214), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(218), 1,
      aux_sym_keyword_token4,
    ACTIONS(220), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(222), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(236), 1,
      sym__separator,
    ACTIONS(238), 1,
      sym__line_break,
    ACTIONS(216), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(42), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [1527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_,
    ACTIONS(156), 1,
      aux_sym_keyword_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(160), 1,
      sym__line_break,
    STATE(270), 1,
      sym_keyword,
    STATE(38), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1559] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_,
    ACTIONS(248), 1,
      sym_test_case_or_task,
    ACTIONS(250), 1,
      sym__whitespace,
    ACTIONS(252), 1,
      sym__line_break,
    STATE(49), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(244), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1590] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(261), 1,
      sym_test_case_or_task,
    ACTIONS(264), 1,
      sym__whitespace,
    ACTIONS(267), 1,
      sym__line_break,
    STATE(49), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(256), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1621] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(274), 1,
      aux_sym_keyword_token1,
    ACTIONS(276), 1,
      anon_sym_RETURN,
    STATE(245), 1,
      sym_keyword,
    STATE(103), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(270), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [1650] = 3,
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
  [1671] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_,
    ACTIONS(248), 1,
      sym_test_case_or_task,
    ACTIONS(250), 1,
      sym__whitespace,
    ACTIONS(252), 1,
      sym__line_break,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    STATE(49), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(280), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1702] = 3,
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
  [1723] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_,
    ACTIONS(248), 1,
      sym_test_case_or_task,
    ACTIONS(250), 1,
      sym__whitespace,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 1,
      sym__line_break,
    STATE(52), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(284), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1754] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      anon_sym_,
    ACTIONS(248), 1,
      sym_test_case_or_task,
    ACTIONS(250), 1,
      sym__whitespace,
    ACTIONS(288), 1,
      sym__line_break,
    STATE(58), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(244), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1785] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      aux_sym_keyword_token1,
    ACTIONS(292), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(294), 1,
      anon_sym_RETURN,
    STATE(219), 1,
      sym_keyword,
    STATE(110), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(290), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [1814] = 3,
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
  [1835] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_,
    ACTIONS(248), 1,
      sym_test_case_or_task,
    ACTIONS(250), 1,
      sym__whitespace,
    ACTIONS(252), 1,
      sym__line_break,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(49), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(298), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1866] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym__line_break,
    ACTIONS(300), 1,
      anon_sym_,
    ACTIONS(303), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(309), 1,
      aux_sym_keyword_token4,
    ACTIONS(312), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(315), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(306), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(59), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [1899] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym__line_break,
    ACTIONS(318), 1,
      anon_sym_,
    ACTIONS(320), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(324), 1,
      aux_sym_keyword_token4,
    ACTIONS(326), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(328), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(322), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(59), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [1932] = 3,
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
  [1953] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_,
    ACTIONS(248), 1,
      sym_test_case_or_task,
    ACTIONS(250), 1,
      sym__whitespace,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      sym__line_break,
    STATE(48), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(332), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1984] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_,
    ACTIONS(214), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(220), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(222), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(338), 1,
      aux_sym_keyword_token4,
    ACTIONS(336), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(43), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [2014] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_,
    ACTIONS(214), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(220), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(222), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(342), 1,
      aux_sym_keyword_token4,
    ACTIONS(340), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(46), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [2044] = 3,
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
  [2064] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(346), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(348), 1,
      sym__line_break,
    STATE(85), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(344), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2090] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(135), 1,
      sym_arguments,
    STATE(192), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2122] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(97), 1,
      sym_arguments,
    STATE(183), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2154] = 3,
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
  [2174] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(346), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(362), 1,
      sym__line_break,
    STATE(66), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(360), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2200] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(346), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(348), 1,
      sym__line_break,
    STATE(85), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(360), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2226] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(102), 1,
      sym_arguments,
    STATE(187), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2258] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(346), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(348), 1,
      sym__line_break,
    STATE(85), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(364), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2284] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(94), 1,
      sym_arguments,
    STATE(187), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2316] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(98), 1,
      sym_arguments,
    STATE(183), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2348] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(346), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(368), 1,
      sym__line_break,
    STATE(73), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(366), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2374] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(114), 1,
      sym_arguments,
    STATE(195), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2406] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(131), 1,
      sym_arguments,
    STATE(192), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2438] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(101), 1,
      sym_arguments,
    STATE(187), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2470] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 1,
      aux_sym_settings_section_token1,
    ACTIONS(375), 1,
      aux_sym_variables_section_token1,
    ACTIONS(378), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(381), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(80), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(164), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [2500] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(80), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(164), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [2530] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(93), 1,
      sym_arguments,
    STATE(183), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2562] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(99), 1,
      sym_arguments,
    STATE(187), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2594] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(113), 1,
      sym_arguments,
    STATE(183), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(391), 1,
      sym__whitespace,
    ACTIONS(394), 1,
      sym__line_break,
    STATE(85), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(386), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2652] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(100), 1,
      sym_arguments,
    STATE(187), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2684] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(346), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(399), 1,
      sym__line_break,
    STATE(71), 3,
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
  [2710] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(192), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2742] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(119), 1,
      sym_arguments,
    STATE(195), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2774] = 8,
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
    STATE(80), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(164), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [2804] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_,
    ACTIONS(320), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(326), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(328), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(403), 1,
      aux_sym_keyword_token4,
    ACTIONS(401), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(60), 5,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
      aux_sym_keyword_repeat1,
  [2834] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(111), 1,
      sym_arguments,
    STATE(183), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(407), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(405), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(409), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [2923] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(356), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(358), 1,
      anon_sym_AMP_LBRACE,
    STATE(226), 1,
      sym_argument,
    STATE(116), 5,
      sym_text,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(415), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(419), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(421), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(413), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(425), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(429), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(435), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3085] = 3,
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
  [3104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(437), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(443), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(441), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3161] = 3,
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
  [3180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(439), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(433), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(431), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(411), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(423), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(447), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [3293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(449), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3311] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(455), 1,
      sym__separator,
    ACTIONS(457), 1,
      sym__line_break,
    STATE(122), 4,
      sym_text,
      sym_scalar_variable,
      sym_empty_variable,
      aux_sym_argument_repeat1,
  [3339] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_,
    ACTIONS(462), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(465), 1,
      aux_sym_keyword_token3,
    ACTIONS(468), 1,
      aux_sym_keyword_token4,
    ACTIONS(471), 1,
      sym__separator,
    ACTIONS(473), 1,
      sym__line_break,
    STATE(117), 4,
      sym_text,
      sym_scalar_variable,
      sym_empty_variable,
      aux_sym_argument_repeat1,
  [3367] = 3,
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
  [3385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(477), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(479), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym__whitespace,
    ACTIONS(488), 1,
      sym__line_break,
    STATE(121), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    ACTIONS(483), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3443] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(491), 1,
      sym__separator,
    ACTIONS(493), 1,
      sym__line_break,
    STATE(117), 4,
      sym_text,
      sym_scalar_variable,
      sym_empty_variable,
      aux_sym_argument_repeat1,
  [3471] = 3,
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
  [3489] = 3,
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
  [3506] = 3,
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
  [3523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(505), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3540] = 3,
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
  [3557] = 3,
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
  [3574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(210), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(517), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym__whitespace,
    ACTIONS(519), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(525), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(529), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(533), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym__whitespace,
    ACTIONS(535), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(541), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(545), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(549), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(549), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(545), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3776] = 3,
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
  [3792] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym__separator,
    ACTIONS(116), 1,
      sym__whitespace,
    ACTIONS(551), 1,
      sym__line_break,
    STATE(114), 1,
      sym_test_case_or_task_definition_body,
    STATE(24), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [3814] = 3,
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
  [3830] = 3,
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
  [3846] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym__separator,
    ACTIONS(139), 1,
      sym__whitespace,
    ACTIONS(553), 1,
      sym__line_break,
    STATE(115), 1,
      sym_keyword_definition_body,
    STATE(27), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(525), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3884] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym__separator,
    ACTIONS(116), 1,
      sym__whitespace,
    ACTIONS(551), 1,
      sym__line_break,
    STATE(119), 1,
      sym_test_case_or_task_definition_body,
    STATE(24), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [3906] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(533), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3922] = 3,
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
  [3938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(517), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3954] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym__separator,
    ACTIONS(139), 1,
      sym__whitespace,
    ACTIONS(553), 1,
      sym__line_break,
    STATE(120), 1,
      sym_keyword_definition_body,
    STATE(27), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [3976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(505), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(210), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(529), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(541), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4040] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(326), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(328), 1,
      anon_sym_AMP_LBRACE,
    STATE(153), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(220), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(222), 1,
      anon_sym_AMP_LBRACE,
    STATE(129), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(549), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(541), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(513), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(497), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(501), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(525), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [4174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(473), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(529), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4202] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(352), 1,
      aux_sym_keyword_token3,
    ACTIONS(354), 1,
      aux_sym_keyword_token4,
    STATE(165), 3,
      sym_text,
      sym_scalar_variable,
      sym_empty_variable,
  [4220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(509), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(505), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(545), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(517), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(533), 3,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      sym__line_break,
  [4290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym__separator,
    ACTIONS(561), 1,
      sym__line_break,
    ACTIONS(557), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym__separator,
    ACTIONS(565), 1,
      sym__whitespace,
    ACTIONS(567), 1,
      sym__line_break,
    STATE(147), 1,
      sym__empty_line,
  [4320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      sym__separator,
    ACTIONS(573), 1,
      sym__line_break,
    ACTIONS(569), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym__whitespace,
    ACTIONS(575), 1,
      sym__separator,
    ACTIONS(577), 1,
      sym__line_break,
    STATE(142), 1,
      sym__empty_line,
  [4350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(581), 1,
      sym__line_break,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [4363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(583), 1,
      sym__line_break,
    STATE(191), 1,
      aux_sym_arguments_repeat1,
  [4376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(585), 1,
      sym__line_break,
    STATE(180), 1,
      aux_sym_arguments_repeat1,
  [4389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(587), 1,
      sym__line_break,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [4402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(589), 1,
      sym__line_break,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [4415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(591), 1,
      sym__line_break,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [4428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(593), 1,
      sym__line_break,
    STATE(197), 1,
      aux_sym_arguments_repeat1,
  [4441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(595), 1,
      sym__line_break,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [4454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(597), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [4467] = 4,
    ACTIONS(599), 1,
      anon_sym_,
    ACTIONS(601), 1,
      sym_variable_name,
    ACTIONS(603), 1,
      anon_sym_EMPTY,
    ACTIONS(605), 1,
      sym_comment,
  [4480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(607), 1,
      sym__line_break,
    STATE(177), 1,
      aux_sym_arguments_repeat1,
  [4493] = 4,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_,
    ACTIONS(611), 1,
      sym_variable_name,
    ACTIONS(613), 1,
      anon_sym_EMPTY,
  [4506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__separator,
    ACTIONS(618), 1,
      sym__line_break,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [4519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      sym__separator,
    ACTIONS(620), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(624), 1,
      sym__line_break,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [4543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(626), 1,
      sym__line_break,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [4556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(81), 2,
      sym__separator,
      sym__whitespace,
  [4567] = 4,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_,
    ACTIONS(630), 1,
      sym_variable_name,
    ACTIONS(632), 1,
      anon_sym_EMPTY,
  [4580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(634), 1,
      sym__line_break,
    STATE(196), 1,
      aux_sym_arguments_repeat1,
  [4593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(636), 1,
      sym__line_break,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [4606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(638), 1,
      sym__line_break,
    STATE(189), 1,
      aux_sym_arguments_repeat1,
  [4619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__separator,
    ACTIONS(640), 1,
      sym__line_break,
    STATE(181), 1,
      aux_sym_arguments_repeat1,
  [4632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      aux_sym_settings_section_token3,
    ACTIONS(644), 1,
      sym__line_break,
  [4642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      anon_sym_,
  [4652] = 3,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_variable_name,
    ACTIONS(652), 1,
      anon_sym_EMPTY,
  [4662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    ACTIONS(656), 1,
      anon_sym_,
  [4672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      anon_sym_,
  [4682] = 3,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_variable_name,
    ACTIONS(664), 1,
      anon_sym_EMPTY,
  [4692] = 3,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_,
    ACTIONS(668), 1,
      sym_variable_name,
  [4702] = 3,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_,
    ACTIONS(672), 1,
      sym_variable_name,
  [4712] = 3,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_,
    ACTIONS(676), 1,
      sym_variable_name,
  [4722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    ACTIONS(680), 1,
      anon_sym_,
  [4732] = 3,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(684), 1,
      sym_variable_name,
  [4742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
    ACTIONS(688), 1,
      anon_sym_,
  [4752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym__separator,
    ACTIONS(692), 1,
      sym__line_break,
  [4762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__separator,
    ACTIONS(696), 1,
      sym__line_break,
  [4772] = 3,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_variable_name,
    ACTIONS(700), 1,
      anon_sym_EMPTY,
  [4782] = 3,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_,
    ACTIONS(704), 1,
      sym_variable_name,
  [4792] = 3,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_,
    ACTIONS(708), 1,
      sym_variable_name,
  [4802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    ACTIONS(712), 1,
      anon_sym_,
  [4812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__separator,
    ACTIONS(716), 1,
      sym__line_break,
  [4822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__separator,
    ACTIONS(720), 1,
      sym__line_break,
  [4832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym__separator,
    ACTIONS(724), 1,
      sym__line_break,
  [4842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    ACTIONS(728), 1,
      anon_sym_,
  [4852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(732), 1,
      anon_sym_,
  [4862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(736), 1,
      anon_sym_,
  [4872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(740), 1,
      anon_sym_,
  [4882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
    ACTIONS(744), 1,
      anon_sym_,
  [4892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    ACTIONS(748), 1,
      anon_sym_,
  [4902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__line_break,
    ACTIONS(750), 1,
      sym__separator,
  [4912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      aux_sym_settings_section_token3,
    ACTIONS(754), 1,
      sym__line_break,
  [4922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 1,
      anon_sym_,
  [4932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      sym__separator,
    ACTIONS(762), 1,
      sym__line_break,
  [4942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      aux_sym_keyword_token1,
    STATE(294), 1,
      sym_keyword,
  [4952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      aux_sym_settings_section_token3,
    ACTIONS(768), 1,
      sym__line_break,
  [4962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_RBRACE,
    ACTIONS(772), 1,
      anon_sym_,
  [4972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_RBRACE,
    ACTIONS(776), 1,
      anon_sym_,
  [4982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      aux_sym_settings_section_token3,
    ACTIONS(780), 1,
      sym__line_break,
  [4992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    ACTIONS(784), 1,
      anon_sym_,
  [5002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      sym__separator,
    ACTIONS(788), 1,
      sym__line_break,
  [5012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 1,
      anon_sym_,
  [5022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      anon_sym_RBRACE,
    ACTIONS(796), 1,
      anon_sym_,
  [5032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    ACTIONS(800), 1,
      anon_sym_,
  [5042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    ACTIONS(804), 1,
      anon_sym_,
  [5052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      sym__separator,
    ACTIONS(808), 1,
      sym__line_break,
  [5062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
    ACTIONS(812), 1,
      anon_sym_,
  [5072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
    ACTIONS(816), 1,
      anon_sym_,
  [5082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    ACTIONS(820), 1,
      anon_sym_,
  [5092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__separator,
    ACTIONS(824), 1,
      sym__line_break,
  [5102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    ACTIONS(828), 1,
      anon_sym_,
  [5112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__separator,
    ACTIONS(832), 1,
      sym__line_break,
  [5122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
  [5129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__line_break,
  [5136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
  [5143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
  [5150] = 2,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(838), 1,
      sym_variable_name,
  [5157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
  [5164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
  [5171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
  [5178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RBRACE,
  [5185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
  [5192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym_settings_section_token2,
  [5199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
  [5206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
  [5213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
  [5220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym_settings_section_token2,
  [5227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      aux_sym_settings_section_token2,
  [5234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      sym__line_break,
  [5241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      aux_sym_settings_section_token2,
  [5248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
  [5255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym__separator,
  [5262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__line_break,
  [5269] = 2,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym_variable_name,
  [5276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      sym__line_break,
  [5283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      sym_test_case_or_task,
  [5290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
  [5297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
  [5304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
  [5311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym__line_break,
  [5318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
  [5325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
  [5332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
  [5339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym__separator,
  [5346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
  [5353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
  [5360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
  [5367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
  [5374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      ts_builtin_sym_end,
  [5381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym__line_break,
  [5388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym__line_break,
  [5395] = 2,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(894), 1,
      sym_variable_name,
  [5402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym__separator,
  [5409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
  [5416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      sym__line_break,
  [5423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym__line_break,
  [5430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
  [5437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__line_break,
  [5444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__line_break,
  [5451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym__separator,
  [5458] = 2,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_variable_name,
  [5465] = 2,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(912), 1,
      sym_variable_name,
  [5472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
  [5479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
  [5486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
  [5493] = 2,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_variable_name,
  [5500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym__line_break,
  [5507] = 2,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym_variable_name,
  [5514] = 2,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym_variable_name,
  [5521] = 2,
    ACTIONS(605), 1,
      sym_comment,
    ACTIONS(924), 1,
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
  [SMALL_STATE(23)] = 799,
  [SMALL_STATE(24)] = 826,
  [SMALL_STATE(25)] = 857,
  [SMALL_STATE(26)] = 884,
  [SMALL_STATE(27)] = 915,
  [SMALL_STATE(28)] = 946,
  [SMALL_STATE(29)] = 975,
  [SMALL_STATE(30)] = 1004,
  [SMALL_STATE(31)] = 1031,
  [SMALL_STATE(32)] = 1060,
  [SMALL_STATE(33)] = 1087,
  [SMALL_STATE(34)] = 1119,
  [SMALL_STATE(35)] = 1151,
  [SMALL_STATE(36)] = 1179,
  [SMALL_STATE(37)] = 1207,
  [SMALL_STATE(38)] = 1235,
  [SMALL_STATE(39)] = 1267,
  [SMALL_STATE(40)] = 1295,
  [SMALL_STATE(41)] = 1327,
  [SMALL_STATE(42)] = 1355,
  [SMALL_STATE(43)] = 1391,
  [SMALL_STATE(44)] = 1427,
  [SMALL_STATE(45)] = 1459,
  [SMALL_STATE(46)] = 1491,
  [SMALL_STATE(47)] = 1527,
  [SMALL_STATE(48)] = 1559,
  [SMALL_STATE(49)] = 1590,
  [SMALL_STATE(50)] = 1621,
  [SMALL_STATE(51)] = 1650,
  [SMALL_STATE(52)] = 1671,
  [SMALL_STATE(53)] = 1702,
  [SMALL_STATE(54)] = 1723,
  [SMALL_STATE(55)] = 1754,
  [SMALL_STATE(56)] = 1785,
  [SMALL_STATE(57)] = 1814,
  [SMALL_STATE(58)] = 1835,
  [SMALL_STATE(59)] = 1866,
  [SMALL_STATE(60)] = 1899,
  [SMALL_STATE(61)] = 1932,
  [SMALL_STATE(62)] = 1953,
  [SMALL_STATE(63)] = 1984,
  [SMALL_STATE(64)] = 2014,
  [SMALL_STATE(65)] = 2044,
  [SMALL_STATE(66)] = 2064,
  [SMALL_STATE(67)] = 2090,
  [SMALL_STATE(68)] = 2122,
  [SMALL_STATE(69)] = 2154,
  [SMALL_STATE(70)] = 2174,
  [SMALL_STATE(71)] = 2200,
  [SMALL_STATE(72)] = 2226,
  [SMALL_STATE(73)] = 2258,
  [SMALL_STATE(74)] = 2284,
  [SMALL_STATE(75)] = 2316,
  [SMALL_STATE(76)] = 2348,
  [SMALL_STATE(77)] = 2374,
  [SMALL_STATE(78)] = 2406,
  [SMALL_STATE(79)] = 2438,
  [SMALL_STATE(80)] = 2470,
  [SMALL_STATE(81)] = 2500,
  [SMALL_STATE(82)] = 2530,
  [SMALL_STATE(83)] = 2562,
  [SMALL_STATE(84)] = 2594,
  [SMALL_STATE(85)] = 2626,
  [SMALL_STATE(86)] = 2652,
  [SMALL_STATE(87)] = 2684,
  [SMALL_STATE(88)] = 2710,
  [SMALL_STATE(89)] = 2742,
  [SMALL_STATE(90)] = 2774,
  [SMALL_STATE(91)] = 2804,
  [SMALL_STATE(92)] = 2834,
  [SMALL_STATE(93)] = 2866,
  [SMALL_STATE(94)] = 2885,
  [SMALL_STATE(95)] = 2904,
  [SMALL_STATE(96)] = 2923,
  [SMALL_STATE(97)] = 2952,
  [SMALL_STATE(98)] = 2971,
  [SMALL_STATE(99)] = 2990,
  [SMALL_STATE(100)] = 3009,
  [SMALL_STATE(101)] = 3028,
  [SMALL_STATE(102)] = 3047,
  [SMALL_STATE(103)] = 3066,
  [SMALL_STATE(104)] = 3085,
  [SMALL_STATE(105)] = 3104,
  [SMALL_STATE(106)] = 3123,
  [SMALL_STATE(107)] = 3142,
  [SMALL_STATE(108)] = 3161,
  [SMALL_STATE(109)] = 3180,
  [SMALL_STATE(110)] = 3199,
  [SMALL_STATE(111)] = 3218,
  [SMALL_STATE(112)] = 3237,
  [SMALL_STATE(113)] = 3256,
  [SMALL_STATE(114)] = 3275,
  [SMALL_STATE(115)] = 3293,
  [SMALL_STATE(116)] = 3311,
  [SMALL_STATE(117)] = 3339,
  [SMALL_STATE(118)] = 3367,
  [SMALL_STATE(119)] = 3385,
  [SMALL_STATE(120)] = 3403,
  [SMALL_STATE(121)] = 3421,
  [SMALL_STATE(122)] = 3443,
  [SMALL_STATE(123)] = 3471,
  [SMALL_STATE(124)] = 3489,
  [SMALL_STATE(125)] = 3506,
  [SMALL_STATE(126)] = 3523,
  [SMALL_STATE(127)] = 3540,
  [SMALL_STATE(128)] = 3557,
  [SMALL_STATE(129)] = 3574,
  [SMALL_STATE(130)] = 3591,
  [SMALL_STATE(131)] = 3608,
  [SMALL_STATE(132)] = 3625,
  [SMALL_STATE(133)] = 3642,
  [SMALL_STATE(134)] = 3659,
  [SMALL_STATE(135)] = 3676,
  [SMALL_STATE(136)] = 3693,
  [SMALL_STATE(137)] = 3710,
  [SMALL_STATE(138)] = 3727,
  [SMALL_STATE(139)] = 3744,
  [SMALL_STATE(140)] = 3760,
  [SMALL_STATE(141)] = 3776,
  [SMALL_STATE(142)] = 3792,
  [SMALL_STATE(143)] = 3814,
  [SMALL_STATE(144)] = 3830,
  [SMALL_STATE(145)] = 3846,
  [SMALL_STATE(146)] = 3868,
  [SMALL_STATE(147)] = 3884,
  [SMALL_STATE(148)] = 3906,
  [SMALL_STATE(149)] = 3922,
  [SMALL_STATE(150)] = 3938,
  [SMALL_STATE(151)] = 3954,
  [SMALL_STATE(152)] = 3976,
  [SMALL_STATE(153)] = 3992,
  [SMALL_STATE(154)] = 4008,
  [SMALL_STATE(155)] = 4024,
  [SMALL_STATE(156)] = 4040,
  [SMALL_STATE(157)] = 4059,
  [SMALL_STATE(158)] = 4078,
  [SMALL_STATE(159)] = 4092,
  [SMALL_STATE(160)] = 4106,
  [SMALL_STATE(161)] = 4120,
  [SMALL_STATE(162)] = 4134,
  [SMALL_STATE(163)] = 4148,
  [SMALL_STATE(164)] = 4162,
  [SMALL_STATE(165)] = 4174,
  [SMALL_STATE(166)] = 4188,
  [SMALL_STATE(167)] = 4202,
  [SMALL_STATE(168)] = 4220,
  [SMALL_STATE(169)] = 4234,
  [SMALL_STATE(170)] = 4248,
  [SMALL_STATE(171)] = 4262,
  [SMALL_STATE(172)] = 4276,
  [SMALL_STATE(173)] = 4290,
  [SMALL_STATE(174)] = 4304,
  [SMALL_STATE(175)] = 4320,
  [SMALL_STATE(176)] = 4334,
  [SMALL_STATE(177)] = 4350,
  [SMALL_STATE(178)] = 4363,
  [SMALL_STATE(179)] = 4376,
  [SMALL_STATE(180)] = 4389,
  [SMALL_STATE(181)] = 4402,
  [SMALL_STATE(182)] = 4415,
  [SMALL_STATE(183)] = 4428,
  [SMALL_STATE(184)] = 4441,
  [SMALL_STATE(185)] = 4454,
  [SMALL_STATE(186)] = 4467,
  [SMALL_STATE(187)] = 4480,
  [SMALL_STATE(188)] = 4493,
  [SMALL_STATE(189)] = 4506,
  [SMALL_STATE(190)] = 4519,
  [SMALL_STATE(191)] = 4530,
  [SMALL_STATE(192)] = 4543,
  [SMALL_STATE(193)] = 4556,
  [SMALL_STATE(194)] = 4567,
  [SMALL_STATE(195)] = 4580,
  [SMALL_STATE(196)] = 4593,
  [SMALL_STATE(197)] = 4606,
  [SMALL_STATE(198)] = 4619,
  [SMALL_STATE(199)] = 4632,
  [SMALL_STATE(200)] = 4642,
  [SMALL_STATE(201)] = 4652,
  [SMALL_STATE(202)] = 4662,
  [SMALL_STATE(203)] = 4672,
  [SMALL_STATE(204)] = 4682,
  [SMALL_STATE(205)] = 4692,
  [SMALL_STATE(206)] = 4702,
  [SMALL_STATE(207)] = 4712,
  [SMALL_STATE(208)] = 4722,
  [SMALL_STATE(209)] = 4732,
  [SMALL_STATE(210)] = 4742,
  [SMALL_STATE(211)] = 4752,
  [SMALL_STATE(212)] = 4762,
  [SMALL_STATE(213)] = 4772,
  [SMALL_STATE(214)] = 4782,
  [SMALL_STATE(215)] = 4792,
  [SMALL_STATE(216)] = 4802,
  [SMALL_STATE(217)] = 4812,
  [SMALL_STATE(218)] = 4822,
  [SMALL_STATE(219)] = 4832,
  [SMALL_STATE(220)] = 4842,
  [SMALL_STATE(221)] = 4852,
  [SMALL_STATE(222)] = 4862,
  [SMALL_STATE(223)] = 4872,
  [SMALL_STATE(224)] = 4882,
  [SMALL_STATE(225)] = 4892,
  [SMALL_STATE(226)] = 4902,
  [SMALL_STATE(227)] = 4912,
  [SMALL_STATE(228)] = 4922,
  [SMALL_STATE(229)] = 4932,
  [SMALL_STATE(230)] = 4942,
  [SMALL_STATE(231)] = 4952,
  [SMALL_STATE(232)] = 4962,
  [SMALL_STATE(233)] = 4972,
  [SMALL_STATE(234)] = 4982,
  [SMALL_STATE(235)] = 4992,
  [SMALL_STATE(236)] = 5002,
  [SMALL_STATE(237)] = 5012,
  [SMALL_STATE(238)] = 5022,
  [SMALL_STATE(239)] = 5032,
  [SMALL_STATE(240)] = 5042,
  [SMALL_STATE(241)] = 5052,
  [SMALL_STATE(242)] = 5062,
  [SMALL_STATE(243)] = 5072,
  [SMALL_STATE(244)] = 5082,
  [SMALL_STATE(245)] = 5092,
  [SMALL_STATE(246)] = 5102,
  [SMALL_STATE(247)] = 5112,
  [SMALL_STATE(248)] = 5122,
  [SMALL_STATE(249)] = 5129,
  [SMALL_STATE(250)] = 5136,
  [SMALL_STATE(251)] = 5143,
  [SMALL_STATE(252)] = 5150,
  [SMALL_STATE(253)] = 5157,
  [SMALL_STATE(254)] = 5164,
  [SMALL_STATE(255)] = 5171,
  [SMALL_STATE(256)] = 5178,
  [SMALL_STATE(257)] = 5185,
  [SMALL_STATE(258)] = 5192,
  [SMALL_STATE(259)] = 5199,
  [SMALL_STATE(260)] = 5206,
  [SMALL_STATE(261)] = 5213,
  [SMALL_STATE(262)] = 5220,
  [SMALL_STATE(263)] = 5227,
  [SMALL_STATE(264)] = 5234,
  [SMALL_STATE(265)] = 5241,
  [SMALL_STATE(266)] = 5248,
  [SMALL_STATE(267)] = 5255,
  [SMALL_STATE(268)] = 5262,
  [SMALL_STATE(269)] = 5269,
  [SMALL_STATE(270)] = 5276,
  [SMALL_STATE(271)] = 5283,
  [SMALL_STATE(272)] = 5290,
  [SMALL_STATE(273)] = 5297,
  [SMALL_STATE(274)] = 5304,
  [SMALL_STATE(275)] = 5311,
  [SMALL_STATE(276)] = 5318,
  [SMALL_STATE(277)] = 5325,
  [SMALL_STATE(278)] = 5332,
  [SMALL_STATE(279)] = 5339,
  [SMALL_STATE(280)] = 5346,
  [SMALL_STATE(281)] = 5353,
  [SMALL_STATE(282)] = 5360,
  [SMALL_STATE(283)] = 5367,
  [SMALL_STATE(284)] = 5374,
  [SMALL_STATE(285)] = 5381,
  [SMALL_STATE(286)] = 5388,
  [SMALL_STATE(287)] = 5395,
  [SMALL_STATE(288)] = 5402,
  [SMALL_STATE(289)] = 5409,
  [SMALL_STATE(290)] = 5416,
  [SMALL_STATE(291)] = 5423,
  [SMALL_STATE(292)] = 5430,
  [SMALL_STATE(293)] = 5437,
  [SMALL_STATE(294)] = 5444,
  [SMALL_STATE(295)] = 5451,
  [SMALL_STATE(296)] = 5458,
  [SMALL_STATE(297)] = 5465,
  [SMALL_STATE(298)] = 5472,
  [SMALL_STATE(299)] = 5479,
  [SMALL_STATE(300)] = 5486,
  [SMALL_STATE(301)] = 5493,
  [SMALL_STATE(302)] = 5500,
  [SMALL_STATE(303)] = 5507,
  [SMALL_STATE(304)] = 5514,
  [SMALL_STATE(305)] = 5521,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(178),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(267),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(286),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(56),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(290),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(50),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(291),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(179),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(179),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(185),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(198),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(198),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(230),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(91),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(268),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(38),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(157),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(194),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(42),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(42),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(209),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(205),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(271),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(176),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(264),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(49),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(156),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(188),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(59),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(59),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(207),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(206),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(236),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(229),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(212),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(218),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(269),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(286),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(85),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(167),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(186),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(64),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(64),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 4),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 4, .production_id = 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 4),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 5),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(96),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [888] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
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
