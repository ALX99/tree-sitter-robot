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
#define STATE_COUNT 278
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym_settings_section_token1 = 1,
  aux_sym_settings_section_token2 = 2,
  aux_sym_settings_section_token3 = 3,
  aux_sym_settings_section_token4 = 4,
  aux_sym_setting_statement_token1 = 5,
  aux_sym_setting_statement_token2 = 6,
  aux_sym_setting_statement_token3 = 7,
  aux_sym_setting_statement_token4 = 8,
  aux_sym_setting_statement_token5 = 9,
  aux_sym_setting_statement_token6 = 10,
  aux_sym_setting_statement_token7 = 11,
  aux_sym_setting_statement_token8 = 12,
  aux_sym_setting_statement_token9 = 13,
  aux_sym_setting_statement_token10 = 14,
  aux_sym_setting_statement_token11 = 15,
  aux_sym_setting_statement_token12 = 16,
  aux_sym_setting_statement_token13 = 17,
  aux_sym_setting_statement_token14 = 18,
  aux_sym_setting_statement_token15 = 19,
  aux_sym_setting_statement_token16 = 20,
  aux_sym_setting_statement_token17 = 21,
  aux_sym_variables_section_token1 = 22,
  aux_sym_variables_section_token2 = 23,
  aux_sym_variable_definition_token1 = 24,
  anon_sym_RBRACE = 25,
  anon_sym_EQ = 26,
  anon_sym_EQ2 = 27,
  aux_sym_keywords_section_token1 = 28,
  anon_sym_ = 29,
  aux_sym_keyword_setting_token1 = 30,
  aux_sym_keyword_setting_token2 = 31,
  aux_sym_keyword_setting_token3 = 32,
  aux_sym_keyword_setting_token4 = 33,
  aux_sym_keyword_setting_token5 = 34,
  aux_sym_keyword_setting_token6 = 35,
  aux_sym_test_cases_or_tasks_section_token1 = 36,
  aux_sym_test_cases_or_tasks_section_token2 = 37,
  aux_sym_test_cases_or_tasks_section_token3 = 38,
  aux_sym_test_cases_or_tasks_section_token4 = 39,
  aux_sym_test_case_or_task_setting_token1 = 40,
  aux_sym_test_case_or_task_setting_token2 = 41,
  anon_sym_DOLLAR_LBRACE = 42,
  sym_ellipses = 43,
  sym_indented_ellipses = 44,
  sym_test_case_or_task = 45,
  aux_sym_keyword_token1 = 46,
  aux_sym_keyword_token2 = 47,
  aux_sym_keyword_token3 = 48,
  aux_sym_keyword_token4 = 49,
  anon_sym_RETURN = 50,
  sym_variable_name = 51,
  anon_sym_AT_LBRACE = 52,
  anon_sym_AMP_LBRACE = 53,
  anon_sym_EMPTY = 54,
  sym_comment = 55,
  sym__separator = 56,
  sym__whitespace = 57,
  sym__line_break = 58,
  sym_source_file = 59,
  sym_section = 60,
  sym_settings_section = 61,
  sym_setting_statement = 62,
  sym_variables_section = 63,
  sym_variable_definition = 64,
  sym_keywords_section = 65,
  sym_keyword_definition = 66,
  sym_keyword_definition_body = 67,
  sym_keyword_setting = 68,
  sym_test_cases_or_tasks_section = 69,
  sym_test_case_or_task_definition = 70,
  sym_test_case_or_task_definition_body = 71,
  sym_test_case_or_task_setting = 72,
  sym_statement = 73,
  sym_variable_assignment = 74,
  sym_keyword_invocation = 75,
  sym_arguments = 76,
  sym_continuation = 77,
  sym_argument = 78,
  sym_keyword = 79,
  sym_text = 80,
  sym_return_statement = 81,
  sym_variable = 82,
  sym_list_variable = 83,
  sym_scalar_variable = 84,
  sym_dictionary_variable = 85,
  sym_empty_variable = 86,
  sym__empty_line = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym_source_file_repeat2 = 89,
  aux_sym_settings_section_repeat1 = 90,
  aux_sym_variables_section_repeat1 = 91,
  aux_sym_keywords_section_repeat1 = 92,
  aux_sym_keyword_definition_body_repeat1 = 93,
  aux_sym_test_cases_or_tasks_section_repeat1 = 94,
  aux_sym_test_case_or_task_definition_body_repeat1 = 95,
  aux_sym_arguments_repeat1 = 96,
  aux_sym_arguments_repeat2 = 97,
  aux_sym_argument_repeat1 = 98,
  aux_sym_keyword_repeat1 = 99,
  aux_sym_text_repeat1 = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_settings_section_token1] = "section_header",
  [aux_sym_settings_section_token2] = "extra_text",
  [aux_sym_settings_section_token3] = "extra_text",
  [aux_sym_settings_section_token4] = "section_header",
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
  [aux_sym_variables_section_token2] = "section_header",
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
  [aux_sym_test_cases_or_tasks_section_token3] = "section_header",
  [aux_sym_test_cases_or_tasks_section_token4] = "section_header",
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
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_settings_section_token1] = aux_sym_settings_section_token1,
  [aux_sym_settings_section_token2] = aux_sym_settings_section_token2,
  [aux_sym_settings_section_token3] = aux_sym_settings_section_token2,
  [aux_sym_settings_section_token4] = aux_sym_settings_section_token1,
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
  [aux_sym_variables_section_token2] = aux_sym_settings_section_token1,
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
  [aux_sym_test_cases_or_tasks_section_token3] = aux_sym_settings_section_token1,
  [aux_sym_test_cases_or_tasks_section_token4] = aux_sym_settings_section_token1,
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
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
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
  [aux_sym_settings_section_token4] = {
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
  [aux_sym_variables_section_token2] = {
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
  [aux_sym_test_cases_or_tasks_section_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_cases_or_tasks_section_token4] = {
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
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_argument,
  },
  [2] = {
    [1] = sym_argument,
  },
  [3] = {
    [0] = sym_test_case_or_task,
  },
  [4] = {
    [1] = sym_test_case_or_task,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_keyword, 2,
    sym_keyword,
    sym_test_case_or_task,
  sym_variable, 2,
    sym_variable,
    sym_argument,
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
  [20] = 20,
  [21] = 21,
  [22] = 5,
  [23] = 4,
  [24] = 2,
  [25] = 6,
  [26] = 3,
  [27] = 3,
  [28] = 6,
  [29] = 29,
  [30] = 5,
  [31] = 4,
  [32] = 2,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 2,
  [38] = 38,
  [39] = 5,
  [40] = 40,
  [41] = 41,
  [42] = 4,
  [43] = 3,
  [44] = 6,
  [45] = 12,
  [46] = 14,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 51,
  [57] = 50,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 12,
  [68] = 68,
  [69] = 49,
  [70] = 14,
  [71] = 71,
  [72] = 60,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 14,
  [78] = 78,
  [79] = 12,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 16,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 89,
  [95] = 88,
  [96] = 96,
  [97] = 97,
  [98] = 92,
  [99] = 99,
  [100] = 100,
  [101] = 90,
  [102] = 102,
  [103] = 102,
  [104] = 96,
  [105] = 105,
  [106] = 99,
  [107] = 107,
  [108] = 100,
  [109] = 16,
  [110] = 110,
  [111] = 93,
  [112] = 91,
  [113] = 113,
  [114] = 114,
  [115] = 16,
  [116] = 116,
  [117] = 117,
  [118] = 16,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 123,
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
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 129,
  [146] = 135,
  [147] = 134,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 139,
  [152] = 141,
  [153] = 143,
  [154] = 136,
  [155] = 155,
  [156] = 127,
  [157] = 149,
  [158] = 137,
  [159] = 126,
  [160] = 133,
  [161] = 132,
  [162] = 131,
  [163] = 130,
  [164] = 164,
  [165] = 165,
  [166] = 128,
  [167] = 167,
  [168] = 168,
  [169] = 167,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 172,
  [174] = 174,
  [175] = 16,
  [176] = 172,
  [177] = 177,
  [178] = 178,
  [179] = 177,
  [180] = 174,
  [181] = 171,
  [182] = 178,
  [183] = 178,
  [184] = 184,
  [185] = 177,
  [186] = 186,
  [187] = 174,
  [188] = 177,
  [189] = 178,
  [190] = 172,
  [191] = 174,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 194,
  [207] = 207,
  [208] = 197,
  [209] = 209,
  [210] = 202,
  [211] = 211,
  [212] = 212,
  [213] = 193,
  [214] = 214,
  [215] = 215,
  [216] = 209,
  [217] = 196,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 207,
  [222] = 198,
  [223] = 211,
  [224] = 224,
  [225] = 195,
  [226] = 199,
  [227] = 212,
  [228] = 224,
  [229] = 201,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 235,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 236,
  [251] = 233,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 233,
  [259] = 259,
  [260] = 260,
  [261] = 239,
  [262] = 238,
  [263] = 233,
  [264] = 247,
  [265] = 248,
  [266] = 249,
  [267] = 241,
  [268] = 233,
  [269] = 233,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 271,
  [275] = 272,
  [276] = 237,
  [277] = 231,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(318);
      if (lookahead == '\t') ADVANCE(322);
      if (lookahead == ' ') ADVANCE(358);
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '=') ADVANCE(350);
      if (lookahead == '}') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(321);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(40);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(40);
      if (lookahead == ' ') ADVANCE(358);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '}') ADVANCE(349);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(40);
      if (lookahead == ' ') ADVANCE(468);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '=') ADVANCE(351);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(468);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(354);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '$') ADVANCE(99);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(468);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '=') ADVANCE(350);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(468);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(470);
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == 'R') ADVANCE(447);
      if (lookahead == '[') ADVANCE(443);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(457);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '#') ADVANCE(456);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(457);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '#') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(148);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(128);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '.') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ']') ADVANCE(365);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(136);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == ']') ADVANCE(367);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ']') ADVANCE(366);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ']') ADVANCE(364);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == ']') ADVANCE(362);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == ']') ADVANCE(376);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == ']') ADVANCE(377);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(273);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(283);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '*') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '*') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '*') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '*') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '$') ADVANCE(448);
      if (lookahead == 'R') ADVANCE(447);
      if (lookahead == '[') ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(442);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(442);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 40:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == '#') ADVANCE(456);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 43:
      if (lookahead == '#') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(374);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(372);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(325);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(352);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(319);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(346);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(370);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(344);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(368);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == '*') ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == '*') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 66:
      if (lookahead == '*') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == '*') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 68:
      if (lookahead == '*') ADVANCE(57);
      END_STATE();
    case 69:
      if (lookahead == '*') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 70:
      if (lookahead == '*') ADVANCE(58);
      END_STATE();
    case 71:
      if (lookahead == '*') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 72:
      if (lookahead == '*') ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == '*') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 74:
      if (lookahead == '*') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == '*') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 76:
      if (lookahead == '*') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == '*') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 78:
      if (lookahead == '*') ADVANCE(62);
      END_STATE();
    case 79:
      if (lookahead == '*') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 80:
      if (lookahead == '*') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == '*') ADVANCE(64);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(379);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(381);
      END_STATE();
    case 84:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == '.') ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == 'N') ADVANCE(455);
      END_STATE();
    case 87:
      if (lookahead == 'R') ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'U') ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(363);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(365);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(367);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(366);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(364);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(362);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(376);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(377);
      END_STATE();
    case 98:
      if (lookahead == '{') ADVANCE(348);
      END_STATE();
    case 99:
      if (lookahead == '{') ADVANCE(378);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 100:
      if (lookahead == '{') ADVANCE(464);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 101:
      if (lookahead == '{') ADVANCE(463);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(252);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 118:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(242);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 120:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 121:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 122:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 124:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 125:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 127:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 128:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 129:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(240);
      END_STATE();
    case 131:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 132:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 133:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 134:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 135:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 137:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(300);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(259);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 173:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 174:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(248);
      END_STATE();
    case 175:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(249);
      END_STATE();
    case 176:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(250);
      END_STATE();
    case 177:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(298);
      END_STATE();
    case 178:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 179:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 181:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 184:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 186:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 187:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 188:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 189:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(148);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(128);
      END_STATE();
    case 190:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 191:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 192:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 193:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 194:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 195:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 196:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 197:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 198:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(158);
      END_STATE();
    case 199:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 200:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 201:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 202:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 203:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 204:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 206:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 207:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 208:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 210:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 213:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(233);
      END_STATE();
    case 214:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 215:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 216:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 217:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 218:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 219:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 220:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 221:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 222:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 223:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 224:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 225:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 226:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 227:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 228:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 229:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(192);
      END_STATE();
    case 230:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 231:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 232:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 233:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 234:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 235:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 236:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 237:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 238:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 239:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 240:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 241:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 242:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 243:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 244:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 245:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 246:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      END_STATE();
    case 247:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 248:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(334);
      END_STATE();
    case 249:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      END_STATE();
    case 250:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 251:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      END_STATE();
    case 252:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      END_STATE();
    case 253:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(286);
      END_STATE();
    case 254:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 255:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      END_STATE();
    case 256:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 257:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(170);
      END_STATE();
    case 258:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 260:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(339);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(290);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 271:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(291);
      END_STATE();
    case 273:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 276:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      END_STATE();
    case 277:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 280:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      END_STATE();
    case 283:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      END_STATE();
    case 284:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 285:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 286:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 287:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 288:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 289:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 290:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 291:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 292:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(228);
      END_STATE();
    case 293:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 294:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 295:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 296:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 297:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 298:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 299:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 300:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 301:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(203);
      END_STATE();
    case 302:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(204);
      END_STATE();
    case 303:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(205);
      END_STATE();
    case 304:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(208);
      END_STATE();
    case 305:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(217);
      END_STATE();
    case 306:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(305);
      END_STATE();
    case 307:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 308:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(430);
      END_STATE();
    case 309:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 310:
      if (eof) ADVANCE(318);
      if (lookahead == '\t') ADVANCE(471);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(469);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '}') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '@') ADVANCE(98);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(213);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(179);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(146);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 311:
      if (eof) ADVANCE(318);
      if (lookahead == '\t') ADVANCE(471);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(355);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 312:
      if (eof) ADVANCE(318);
      if (lookahead == '\t') ADVANCE(472);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(359);
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 313:
      if (eof) ADVANCE(318);
      if (lookahead == '\t') ADVANCE(472);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(359);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 314:
      if (eof) ADVANCE(318);
      if (lookahead == '\t') ADVANCE(468);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(356);
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 315:
      if (eof) ADVANCE(318);
      if (lookahead == '\t') ADVANCE(468);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(356);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 316:
      if (eof) ADVANCE(318);
      if (lookahead == '\t') ADVANCE(467);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(357);
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '*') ADVANCE(445);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 317:
      if (eof) ADVANCE(318);
      if (lookahead == '\t') ADVANCE(467);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == '\r') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(357);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_settings_section_token4);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_settings_section_token4);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_variables_section_token2);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_variables_section_token2);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(40);
      if (lookahead == ' ') ADVANCE(468);
      if (lookahead == '#') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(450);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(472);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '#') ADVANCE(309);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(472);
      if (lookahead == ' ') ADVANCE(468);
      if (lookahead == '#') ADVANCE(309);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(472);
      if (lookahead == ' ') ADVANCE(467);
      if (lookahead == '#') ADVANCE(309);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(472);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(450);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token3);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token3);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token4);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token4);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '*') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(188);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(408);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(392);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '*') ADVANCE(394);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '*') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '*') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '*') ADVANCE(398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '*') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '*') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(430);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(238);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(162);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(120);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(121);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '*') ADVANCE(44);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '{') ADVANCE(378);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(462);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(466);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'M') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'T') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'Y') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(462);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(472);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '#') ADVANCE(309);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(472);
      if (lookahead == ' ') ADVANCE(468);
      if (lookahead == '#') ADVANCE(309);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(473);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 310},
  [2] = {.lex_state = 310},
  [3] = {.lex_state = 310},
  [4] = {.lex_state = 310},
  [5] = {.lex_state = 310},
  [6] = {.lex_state = 310},
  [7] = {.lex_state = 310},
  [8] = {.lex_state = 310},
  [9] = {.lex_state = 310},
  [10] = {.lex_state = 310},
  [11] = {.lex_state = 310},
  [12] = {.lex_state = 310},
  [13] = {.lex_state = 310},
  [14] = {.lex_state = 310},
  [15] = {.lex_state = 310},
  [16] = {.lex_state = 310},
  [17] = {.lex_state = 310},
  [18] = {.lex_state = 310},
  [19] = {.lex_state = 314},
  [20] = {.lex_state = 315},
  [21] = {.lex_state = 315},
  [22] = {.lex_state = 317},
  [23] = {.lex_state = 317},
  [24] = {.lex_state = 317},
  [25] = {.lex_state = 317},
  [26] = {.lex_state = 316},
  [27] = {.lex_state = 317},
  [28] = {.lex_state = 316},
  [29] = {.lex_state = 314},
  [30] = {.lex_state = 316},
  [31] = {.lex_state = 316},
  [32] = {.lex_state = 316},
  [33] = {.lex_state = 312},
  [34] = {.lex_state = 312},
  [35] = {.lex_state = 312},
  [36] = {.lex_state = 312},
  [37] = {.lex_state = 311},
  [38] = {.lex_state = 312},
  [39] = {.lex_state = 311},
  [40] = {.lex_state = 312},
  [41] = {.lex_state = 312},
  [42] = {.lex_state = 311},
  [43] = {.lex_state = 311},
  [44] = {.lex_state = 311},
  [45] = {.lex_state = 316},
  [46] = {.lex_state = 317},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 313},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 313},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 313},
  [64] = {.lex_state = 313},
  [65] = {.lex_state = 313},
  [66] = {.lex_state = 313},
  [67] = {.lex_state = 317},
  [68] = {.lex_state = 313},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 316},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 310},
  [74] = {.lex_state = 310},
  [75] = {.lex_state = 310},
  [76] = {.lex_state = 310},
  [77] = {.lex_state = 311},
  [78] = {.lex_state = 310},
  [79] = {.lex_state = 311},
  [80] = {.lex_state = 310},
  [81] = {.lex_state = 310},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 310},
  [84] = {.lex_state = 310},
  [85] = {.lex_state = 310},
  [86] = {.lex_state = 314},
  [87] = {.lex_state = 315},
  [88] = {.lex_state = 315},
  [89] = {.lex_state = 314},
  [90] = {.lex_state = 314},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 315},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 315},
  [95] = {.lex_state = 314},
  [96] = {.lex_state = 314},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 314},
  [99] = {.lex_state = 315},
  [100] = {.lex_state = 314},
  [101] = {.lex_state = 315},
  [102] = {.lex_state = 314},
  [103] = {.lex_state = 315},
  [104] = {.lex_state = 315},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 314},
  [107] = {.lex_state = 315},
  [108] = {.lex_state = 315},
  [109] = {.lex_state = 314},
  [110] = {.lex_state = 312},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 310},
  [114] = {.lex_state = 313},
  [115] = {.lex_state = 313},
  [116] = {.lex_state = 313},
  [117] = {.lex_state = 312},
  [118] = {.lex_state = 312},
  [119] = {.lex_state = 310},
  [120] = {.lex_state = 310},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 37},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 310},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 314},
  [173] = {.lex_state = 314},
  [174] = {.lex_state = 314},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 314},
  [177] = {.lex_state = 314},
  [178] = {.lex_state = 314},
  [179] = {.lex_state = 314},
  [180] = {.lex_state = 314},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 314},
  [183] = {.lex_state = 314},
  [184] = {.lex_state = 314},
  [185] = {.lex_state = 314},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 314},
  [188] = {.lex_state = 314},
  [189] = {.lex_state = 314},
  [190] = {.lex_state = 314},
  [191] = {.lex_state = 314},
  [192] = {.lex_state = 314},
  [193] = {.lex_state = 314},
  [194] = {.lex_state = 314},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 314},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 314},
  [204] = {.lex_state = 314},
  [205] = {.lex_state = 314},
  [206] = {.lex_state = 314},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 314},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 314},
  [214] = {.lex_state = 38},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 314},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 42},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 42},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 43},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 310},
  [234] = {.lex_state = 314},
  [235] = {.lex_state = 310},
  [236] = {.lex_state = 310},
  [237] = {.lex_state = 310},
  [238] = {.lex_state = 310},
  [239] = {.lex_state = 310},
  [240] = {.lex_state = 39},
  [241] = {.lex_state = 310},
  [242] = {.lex_state = 39},
  [243] = {.lex_state = 310},
  [244] = {.lex_state = 39},
  [245] = {.lex_state = 314},
  [246] = {.lex_state = 43},
  [247] = {.lex_state = 310},
  [248] = {.lex_state = 310},
  [249] = {.lex_state = 310},
  [250] = {.lex_state = 310},
  [251] = {.lex_state = 310},
  [252] = {.lex_state = 310},
  [253] = {.lex_state = 41},
  [254] = {.lex_state = 310},
  [255] = {.lex_state = 310},
  [256] = {.lex_state = 310},
  [257] = {.lex_state = 310},
  [258] = {.lex_state = 310},
  [259] = {.lex_state = 310},
  [260] = {.lex_state = 314},
  [261] = {.lex_state = 310},
  [262] = {.lex_state = 310},
  [263] = {.lex_state = 310},
  [264] = {.lex_state = 310},
  [265] = {.lex_state = 310},
  [266] = {.lex_state = 310},
  [267] = {.lex_state = 310},
  [268] = {.lex_state = 310},
  [269] = {.lex_state = 310},
  [270] = {.lex_state = 310},
  [271] = {.lex_state = 43},
  [272] = {.lex_state = 43},
  [273] = {.lex_state = 314},
  [274] = {.lex_state = 43},
  [275] = {.lex_state = 43},
  [276] = {.lex_state = 310},
  [277] = {.lex_state = 43},
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
    [sym_source_file] = STATE(232),
    [sym_section] = STATE(83),
    [sym_settings_section] = STATE(125),
    [sym_variables_section] = STATE(125),
    [sym_keywords_section] = STATE(125),
    [sym_test_cases_or_tasks_section] = STATE(125),
    [sym__empty_line] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [aux_sym_source_file_repeat2] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_settings_section_token1] = ACTIONS(7),
    [aux_sym_settings_section_token4] = ACTIONS(7),
    [aux_sym_variables_section_token1] = ACTIONS(9),
    [aux_sym_variables_section_token2] = ACTIONS(9),
    [aux_sym_keywords_section_token1] = ACTIONS(11),
    [aux_sym_test_cases_or_tasks_section_token1] = ACTIONS(13),
    [aux_sym_test_cases_or_tasks_section_token2] = ACTIONS(13),
    [aux_sym_test_cases_or_tasks_section_token3] = ACTIONS(13),
    [aux_sym_test_cases_or_tasks_section_token4] = ACTIONS(13),
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
    STATE(4), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(19), 29,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
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
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [46] = 5,
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
    ACTIONS(25), 29,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
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
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [92] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 29,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
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
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(3), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(29), 29,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
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
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      sym__whitespace,
    ACTIONS(35), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(33), 29,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
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
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [230] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(13), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(40), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
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
  [276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(15), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(46), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
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
  [322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(52), 1,
      sym__line_break,
    STATE(8), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(50), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
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
  [368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(56), 1,
      sym__line_break,
    STATE(11), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(54), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
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
  [414] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(15), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(58), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
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
  [460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym__whitespace,
    ACTIONS(60), 31,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
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
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [500] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(15), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(54), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
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
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym__whitespace,
    ACTIONS(64), 31,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
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
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [586] = 6,
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
    ACTIONS(68), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
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
  [632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym__whitespace,
    ACTIONS(79), 29,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
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
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym__whitespace,
    ACTIONS(83), 28,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
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
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [707] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym__line_break,
    ACTIONS(7), 2,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
    ACTIONS(9), 2,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
    STATE(85), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(113), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 4,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
    STATE(125), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [751] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__separator,
    ACTIONS(97), 1,
      sym__whitespace,
    ACTIONS(99), 1,
      sym__line_break,
    ACTIONS(93), 2,
      anon_sym_,
      aux_sym_keyword_token1,
    STATE(29), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(91), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [786] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym__separator,
    ACTIONS(107), 1,
      sym__whitespace,
    ACTIONS(109), 1,
      sym__line_break,
    STATE(21), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(103), 11,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
  [821] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      sym__separator,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(121), 1,
      sym__line_break,
    STATE(21), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(113), 11,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
  [856] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_ellipses,
    ACTIONS(126), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(27), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [889] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_ellipses,
    ACTIONS(126), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(25), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [922] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_ellipses,
    ACTIONS(126), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(23), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [955] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_ellipses,
    ACTIONS(131), 1,
      sym_indented_ellipses,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(25), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(28), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [1019] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_ellipses,
    ACTIONS(126), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(25), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1052] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(28), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(33), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [1083] = 7,
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
    STATE(29), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(139), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [1118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(26), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(29), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [1149] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(28), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(29), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [1180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(31), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(19), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [1211] = 8,
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
    STATE(252), 1,
      sym_keyword,
    STATE(38), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(152), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [1247] = 8,
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
    STATE(252), 1,
      sym_keyword,
    STATE(36), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(152), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [1283] = 8,
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
    STATE(252), 1,
      sym_keyword,
    STATE(38), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(164), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [1319] = 8,
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
    STATE(252), 1,
      sym_keyword,
    STATE(38), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [1355] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_ellipses,
    ACTIONS(170), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(42), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(23), 12,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__whitespace,
  [1387] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_,
    ACTIONS(177), 1,
      aux_sym_keyword_token1,
    ACTIONS(180), 1,
      sym__whitespace,
    ACTIONS(183), 1,
      sym__line_break,
    STATE(252), 1,
      sym_keyword,
    STATE(38), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(172), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [1423] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_ellipses,
    ACTIONS(170), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(43), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 12,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__whitespace,
  [1455] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_,
    ACTIONS(156), 1,
      aux_sym_keyword_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(188), 1,
      sym__line_break,
    STATE(252), 1,
      sym_keyword,
    STATE(33), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(186), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [1491] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_,
    ACTIONS(156), 1,
      aux_sym_keyword_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(192), 1,
      sym__line_break,
    STATE(252), 1,
      sym_keyword,
    STATE(35), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(190), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [1527] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_ellipses,
    ACTIONS(170), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(44), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 12,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__whitespace,
  [1559] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_ellipses,
    ACTIONS(170), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(44), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(27), 12,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__whitespace,
  [1591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_ellipses,
    ACTIONS(197), 1,
      sym_indented_ellipses,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(44), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 12,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__whitespace,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(60), 13,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(66), 14,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_ellipses,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1673] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(187), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1720] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(218), 1,
      sym_test_case_or_task,
    ACTIONS(220), 1,
      sym__whitespace,
    ACTIONS(222), 1,
      sym__line_break,
    STATE(63), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(214), 9,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [1755] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(101), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(191), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1802] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(99), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(191), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1849] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(108), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(191), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1896] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(120), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(187), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1943] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(119), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(187), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1990] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(86), 1,
      sym_arguments,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(180), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2037] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_,
    ACTIONS(227), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(233), 1,
      aux_sym_keyword_token4,
    ACTIONS(236), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(239), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(242), 1,
      sym__separator,
    ACTIONS(244), 1,
      sym__line_break,
    STATE(55), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    ACTIONS(230), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2084] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(100), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(180), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2131] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(106), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(180), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2178] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(107), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(191), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2225] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(218), 1,
      sym_test_case_or_task,
    ACTIONS(220), 1,
      sym__whitespace,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      sym__line_break,
    STATE(65), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(248), 9,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2260] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(92), 1,
      sym_arguments,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(191), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2307] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(114), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(174), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2354] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(116), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(174), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2401] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      anon_sym_,
    ACTIONS(259), 1,
      sym_test_case_or_task,
    ACTIONS(262), 1,
      sym__whitespace,
    ACTIONS(265), 1,
      sym__line_break,
    STATE(63), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(254), 9,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2436] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(218), 1,
      sym_test_case_or_task,
    ACTIONS(220), 1,
      sym__whitespace,
    ACTIONS(222), 1,
      sym__line_break,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    STATE(63), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(270), 9,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2471] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(218), 1,
      sym_test_case_or_task,
    ACTIONS(220), 1,
      sym__whitespace,
    ACTIONS(222), 1,
      sym__line_break,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    STATE(63), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(274), 9,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2506] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(218), 1,
      sym_test_case_or_task,
    ACTIONS(220), 1,
      sym__whitespace,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      sym__line_break,
    STATE(48), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(274), 9,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(62), 14,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_ellipses,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [2566] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(218), 1,
      sym_test_case_or_task,
    ACTIONS(220), 1,
      sym__whitespace,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      sym__line_break,
    STATE(64), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(280), 9,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2601] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(90), 1,
      sym_arguments,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(180), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2648] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(64), 13,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [2673] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(284), 1,
      sym__separator,
    ACTIONS(286), 1,
      sym__line_break,
    STATE(55), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2720] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(98), 1,
      sym_arguments,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(180), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2767] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(290), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(292), 1,
      sym__line_break,
    STATE(76), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(288), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2797] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(290), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(296), 1,
      sym__line_break,
    STATE(78), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(294), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(290), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(300), 1,
      sym__line_break,
    STATE(74), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(298), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(290), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(296), 1,
      sym__line_break,
    STATE(78), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(302), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(66), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [2911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(309), 1,
      sym__whitespace,
    ACTIONS(312), 1,
      sym__line_break,
    STATE(78), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(304), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [2941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(62), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [2965] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(317), 2,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
    ACTIONS(320), 2,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
    STATE(80), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    ACTIONS(326), 4,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
    STATE(125), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [2999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(290), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(296), 1,
      sym__line_break,
    STATE(78), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(329), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [3029] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(206), 1,
      aux_sym_keyword_token4,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(71), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      aux_sym_text_repeat1,
    STATE(140), 1,
      sym_text,
    STATE(144), 1,
      sym_variable,
    STATE(200), 1,
      sym_argument,
    ACTIONS(204), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3073] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
    ACTIONS(9), 2,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
    STATE(80), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    ACTIONS(13), 4,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
    STATE(125), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [3107] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(290), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(331), 1,
      sym__line_break,
    STATE(81), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(294), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [3137] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
    ACTIONS(9), 2,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
    STATE(80), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    ACTIONS(13), 4,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
    STATE(125), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [3171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(335), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(341), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3240] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(343), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(347), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3286] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(351), 1,
      anon_sym_,
    ACTIONS(355), 1,
      aux_sym_keyword_token4,
    ACTIONS(357), 1,
      sym__separator,
    ACTIONS(359), 1,
      sym__line_break,
    STATE(93), 1,
      aux_sym_keyword_repeat1,
    STATE(126), 1,
      sym_variable,
    ACTIONS(353), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(363), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3350] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_,
    ACTIONS(368), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(374), 1,
      aux_sym_keyword_token4,
    ACTIONS(377), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(380), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(383), 1,
      sym__separator,
    ACTIONS(385), 1,
      sym__line_break,
    STATE(93), 1,
      aux_sym_keyword_repeat1,
    STATE(126), 1,
      sym_variable,
    ACTIONS(371), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(345), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(339), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3437] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(387), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3460] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(393), 1,
      aux_sym_keyword_token4,
    ACTIONS(395), 1,
      sym__separator,
    ACTIONS(397), 1,
      sym__line_break,
    ACTIONS(391), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(105), 2,
      sym_variable,
      aux_sym_text_repeat1,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(361), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(401), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(403), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(349), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(407), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3614] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(409), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(389), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3660] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_,
    ACTIONS(414), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(420), 1,
      aux_sym_keyword_token4,
    ACTIONS(423), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(426), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(429), 1,
      sym__separator,
    ACTIONS(431), 1,
      sym__line_break,
    ACTIONS(417), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(105), 2,
      sym_variable,
      aux_sym_text_repeat1,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3699] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(399), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(435), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(405), 13,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(79), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(437), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [3813] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym__line_break,
    ACTIONS(441), 1,
      anon_sym_,
    ACTIONS(444), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(450), 1,
      aux_sym_keyword_token4,
    ACTIONS(453), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(456), 1,
      anon_sym_AMP_LBRACE,
    STATE(111), 1,
      aux_sym_keyword_repeat1,
    STATE(159), 1,
      sym_variable,
    ACTIONS(447), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(146), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3851] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__line_break,
    ACTIONS(459), 1,
      anon_sym_,
    ACTIONS(461), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(465), 1,
      aux_sym_keyword_token4,
    ACTIONS(467), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(469), 1,
      anon_sym_AMP_LBRACE,
    STATE(111), 1,
      aux_sym_keyword_repeat1,
    STATE(159), 1,
      sym_variable,
    ACTIONS(463), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(146), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [3889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym__whitespace,
    ACTIONS(476), 1,
      sym__line_break,
    STATE(113), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    ACTIONS(471), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [3915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(481), 12,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__whitespace,
  [3937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(81), 12,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__whitespace,
  [3959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(485), 12,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym_test_case_or_task,
      sym__whitespace,
  [3981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(487), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [4003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(79), 11,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [4025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym__whitespace,
    ACTIONS(491), 12,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [4046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__whitespace,
    ACTIONS(495), 12,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
      sym__line_break,
  [4067] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(503), 1,
      aux_sym_keyword_token1,
    ACTIONS(505), 1,
      anon_sym_RETURN,
    STATE(209), 1,
      sym_keyword,
    STATE(89), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(499), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [4096] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym_keyword_token1,
    ACTIONS(509), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(511), 1,
      anon_sym_RETURN,
    STATE(216), 1,
      sym_keyword,
    STATE(94), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(507), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [4125] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_,
    ACTIONS(461), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(467), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(469), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(515), 1,
      aux_sym_keyword_token4,
    STATE(112), 1,
      aux_sym_keyword_repeat1,
    STATE(159), 1,
      sym_variable,
    ACTIONS(513), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(146), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4160] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(351), 1,
      anon_sym_,
    ACTIONS(519), 1,
      aux_sym_keyword_token4,
    STATE(91), 1,
      aux_sym_keyword_repeat1,
    STATE(126), 1,
      sym_variable,
    ACTIONS(517), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 10,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_settings_section_token4,
      aux_sym_variables_section_token1,
      aux_sym_variables_section_token2,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      aux_sym_test_cases_or_tasks_section_token3,
      aux_sym_test_cases_or_tasks_section_token4,
  [4211] = 3,
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
  [4228] = 3,
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
  [4245] = 3,
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
  [4262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(537), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4279] = 3,
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
  [4296] = 3,
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
  [4313] = 3,
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
  [4330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(553), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(557), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(561), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(565), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(569), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(431), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(573), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_,
    ACTIONS(580), 3,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(578), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(584), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(244), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(588), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_,
    ACTIONS(580), 3,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(578), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(537), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(561), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(557), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4586] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__separator,
    ACTIONS(97), 1,
      sym__whitespace,
    ACTIONS(592), 1,
      sym__line_break,
    STATE(110), 1,
      sym_keyword_definition_body,
    STATE(19), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [4608] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(467), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(469), 1,
      anon_sym_AMP_LBRACE,
    STATE(147), 1,
      sym_variable,
    STATE(146), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4630] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym__separator,
    ACTIONS(97), 1,
      sym__whitespace,
    ACTIONS(592), 1,
      sym__line_break,
    STATE(117), 1,
      sym_keyword_definition_body,
    STATE(19), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [4652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(573), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(584), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(588), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(565), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4716] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__separator,
    ACTIONS(107), 1,
      sym__whitespace,
    ACTIONS(594), 1,
      sym__line_break,
    STATE(116), 1,
      sym_test_case_or_task_definition_body,
    STATE(20), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [4738] = 3,
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
  [4754] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(134), 1,
      sym_variable,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(569), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4792] = 3,
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
  [4808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(553), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4824] = 3,
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
  [4840] = 3,
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
  [4856] = 3,
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
  [4872] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__separator,
    ACTIONS(107), 1,
      sym__whitespace,
    ACTIONS(594), 1,
      sym__line_break,
    STATE(114), 1,
      sym_test_case_or_task_definition_body,
    STATE(20), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [4894] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(208), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(210), 1,
      anon_sym_AMP_LBRACE,
    STATE(138), 1,
      sym_variable,
    STATE(135), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4916] = 3,
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
  [4932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym__separator,
    ACTIONS(600), 1,
      sym__line_break,
    ACTIONS(596), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      sym__separator,
    ACTIONS(604), 1,
      sym__whitespace,
    ACTIONS(606), 1,
      sym__line_break,
    STATE(155), 1,
      sym__empty_line,
  [4962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      sym__separator,
    ACTIONS(612), 1,
      sym__line_break,
    ACTIONS(608), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4976] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym__whitespace,
    ACTIONS(614), 1,
      sym__separator,
    ACTIONS(616), 1,
      sym__line_break,
    STATE(164), 1,
      sym__empty_line,
  [4992] = 4,
    ACTIONS(618), 1,
      anon_sym_,
    ACTIONS(620), 1,
      sym_variable_name,
    ACTIONS(622), 1,
      anon_sym_EMPTY,
    ACTIONS(624), 1,
      sym_comment,
  [5005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(628), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [5018] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(630), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [5031] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(632), 1,
      sym__line_break,
    STATE(173), 1,
      aux_sym_arguments_repeat1,
  [5044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(81), 2,
      sym__separator,
      sym__whitespace,
  [5055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(634), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [5068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(636), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [5081] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(638), 1,
      sym__line_break,
    STATE(179), 1,
      aux_sym_arguments_repeat1,
  [5094] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(640), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [5107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(642), 1,
      sym__line_break,
    STATE(172), 1,
      aux_sym_arguments_repeat1,
  [5120] = 4,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_,
    ACTIONS(646), 1,
      sym_variable_name,
    ACTIONS(648), 1,
      anon_sym_EMPTY,
  [5133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(650), 1,
      sym__line_break,
    STATE(177), 1,
      aux_sym_arguments_repeat1,
  [5146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(652), 1,
      sym__line_break,
    STATE(185), 1,
      aux_sym_arguments_repeat1,
  [5159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__separator,
    ACTIONS(657), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [5172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(659), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [5185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym__separator,
    ACTIONS(661), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [5196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(665), 1,
      sym__line_break,
    STATE(176), 1,
      aux_sym_arguments_repeat1,
  [5209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(667), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [5222] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(669), 1,
      sym__line_break,
    STATE(188), 1,
      aux_sym_arguments_repeat1,
  [5235] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(671), 1,
      sym__line_break,
    STATE(184), 1,
      aux_sym_arguments_repeat1,
  [5248] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      sym__separator,
    ACTIONS(673), 1,
      sym__line_break,
    STATE(190), 1,
      aux_sym_arguments_repeat1,
  [5261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__separator,
    ACTIONS(677), 1,
      sym__line_break,
  [5271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      sym__separator,
    ACTIONS(681), 1,
      sym__line_break,
  [5281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym__separator,
    ACTIONS(685), 1,
      sym__line_break,
  [5291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_,
  [5301] = 3,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_,
    ACTIONS(693), 1,
      sym_variable_name,
  [5311] = 3,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_,
    ACTIONS(697), 1,
      sym_variable_name,
  [5321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(701), 1,
      anon_sym_,
  [5331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_RBRACE,
    ACTIONS(705), 1,
      anon_sym_,
  [5341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__line_break,
    ACTIONS(707), 1,
      sym__separator,
  [5351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 1,
      anon_sym_,
  [5361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(715), 1,
      anon_sym_,
  [5371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym__separator,
    ACTIONS(719), 1,
      sym__line_break,
  [5381] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym__separator,
    ACTIONS(723), 1,
      sym__line_break,
  [5391] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym__separator,
    ACTIONS(727), 1,
      sym__line_break,
  [5401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym__separator,
    ACTIONS(731), 1,
      sym__line_break,
  [5411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 1,
      anon_sym_,
  [5421] = 3,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_,
    ACTIONS(739), 1,
      sym_variable_name,
  [5431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym__separator,
    ACTIONS(743), 1,
      sym__line_break,
  [5441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    ACTIONS(747), 1,
      anon_sym_,
  [5451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 1,
      anon_sym_,
  [5461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    ACTIONS(755), 1,
      anon_sym_,
  [5471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym__separator,
    ACTIONS(759), 1,
      sym__line_break,
  [5481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      aux_sym_keyword_token1,
    STATE(259), 1,
      sym_keyword,
  [5491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      aux_sym_settings_section_token3,
    ACTIONS(763), 1,
      sym__line_break,
  [5501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym__separator,
    ACTIONS(767), 1,
      sym__line_break,
  [5511] = 3,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_,
    ACTIONS(771), 1,
      sym_variable_name,
  [5521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      aux_sym_settings_section_token3,
    ACTIONS(775), 1,
      sym__line_break,
  [5531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      aux_sym_settings_section_token3,
    ACTIONS(779), 1,
      sym__line_break,
  [5541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      aux_sym_settings_section_token3,
    ACTIONS(783), 1,
      sym__line_break,
  [5551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    ACTIONS(787), 1,
      anon_sym_,
  [5561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    ACTIONS(791), 1,
      anon_sym_,
  [5571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(795), 1,
      anon_sym_,
  [5581] = 3,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_variable_name,
    ACTIONS(799), 1,
      anon_sym_EMPTY,
  [5591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      anon_sym_,
  [5601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
    ACTIONS(807), 1,
      anon_sym_,
  [5611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RBRACE,
    ACTIONS(811), 1,
      anon_sym_,
  [5621] = 3,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(813), 1,
      sym_variable_name,
    ACTIONS(815), 1,
      anon_sym_EMPTY,
  [5631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    ACTIONS(819), 1,
      anon_sym_,
  [5641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      aux_sym_settings_section_token2,
  [5648] = 2,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(823), 1,
      sym_variable_name,
  [5655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      ts_builtin_sym_end,
  [5662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      sym__line_break,
  [5669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym__separator,
  [5676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
  [5683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
  [5690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
  [5697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
  [5704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
  [5711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      aux_sym_settings_section_token2,
  [5718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      aux_sym_settings_section_token2,
  [5732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
  [5739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym_settings_section_token2,
  [5746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym__separator,
  [5753] = 2,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym_variable_name,
  [5760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RBRACE,
  [5767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
  [5774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
  [5781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
  [5788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym__line_break,
  [5795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__line_break,
  [5802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym_test_case_or_task,
  [5809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__line_break,
  [5816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      sym__line_break,
  [5823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_RBRACE,
  [5830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym__line_break,
  [5837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym__line_break,
  [5844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym__line_break,
  [5851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__separator,
  [5858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
  [5865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
  [5872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym__line_break,
  [5879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
  [5886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
  [5893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_RBRACE,
  [5900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
  [5907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      sym__line_break,
  [5914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__line_break,
  [5921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym__line_break,
  [5928] = 2,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(887), 1,
      sym_variable_name,
  [5935] = 2,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym_variable_name,
  [5942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym__separator,
  [5949] = 2,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym_variable_name,
  [5956] = 2,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_variable_name,
  [5963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [5970] = 2,
    ACTIONS(624), 1,
      sym_comment,
    ACTIONS(899), 1,
      sym_variable_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 230,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 322,
  [SMALL_STATE(10)] = 368,
  [SMALL_STATE(11)] = 414,
  [SMALL_STATE(12)] = 460,
  [SMALL_STATE(13)] = 500,
  [SMALL_STATE(14)] = 546,
  [SMALL_STATE(15)] = 586,
  [SMALL_STATE(16)] = 632,
  [SMALL_STATE(17)] = 670,
  [SMALL_STATE(18)] = 707,
  [SMALL_STATE(19)] = 751,
  [SMALL_STATE(20)] = 786,
  [SMALL_STATE(21)] = 821,
  [SMALL_STATE(22)] = 856,
  [SMALL_STATE(23)] = 889,
  [SMALL_STATE(24)] = 922,
  [SMALL_STATE(25)] = 955,
  [SMALL_STATE(26)] = 988,
  [SMALL_STATE(27)] = 1019,
  [SMALL_STATE(28)] = 1052,
  [SMALL_STATE(29)] = 1083,
  [SMALL_STATE(30)] = 1118,
  [SMALL_STATE(31)] = 1149,
  [SMALL_STATE(32)] = 1180,
  [SMALL_STATE(33)] = 1211,
  [SMALL_STATE(34)] = 1247,
  [SMALL_STATE(35)] = 1283,
  [SMALL_STATE(36)] = 1319,
  [SMALL_STATE(37)] = 1355,
  [SMALL_STATE(38)] = 1387,
  [SMALL_STATE(39)] = 1423,
  [SMALL_STATE(40)] = 1455,
  [SMALL_STATE(41)] = 1491,
  [SMALL_STATE(42)] = 1527,
  [SMALL_STATE(43)] = 1559,
  [SMALL_STATE(44)] = 1591,
  [SMALL_STATE(45)] = 1623,
  [SMALL_STATE(46)] = 1648,
  [SMALL_STATE(47)] = 1673,
  [SMALL_STATE(48)] = 1720,
  [SMALL_STATE(49)] = 1755,
  [SMALL_STATE(50)] = 1802,
  [SMALL_STATE(51)] = 1849,
  [SMALL_STATE(52)] = 1896,
  [SMALL_STATE(53)] = 1943,
  [SMALL_STATE(54)] = 1990,
  [SMALL_STATE(55)] = 2037,
  [SMALL_STATE(56)] = 2084,
  [SMALL_STATE(57)] = 2131,
  [SMALL_STATE(58)] = 2178,
  [SMALL_STATE(59)] = 2225,
  [SMALL_STATE(60)] = 2260,
  [SMALL_STATE(61)] = 2307,
  [SMALL_STATE(62)] = 2354,
  [SMALL_STATE(63)] = 2401,
  [SMALL_STATE(64)] = 2436,
  [SMALL_STATE(65)] = 2471,
  [SMALL_STATE(66)] = 2506,
  [SMALL_STATE(67)] = 2541,
  [SMALL_STATE(68)] = 2566,
  [SMALL_STATE(69)] = 2601,
  [SMALL_STATE(70)] = 2648,
  [SMALL_STATE(71)] = 2673,
  [SMALL_STATE(72)] = 2720,
  [SMALL_STATE(73)] = 2767,
  [SMALL_STATE(74)] = 2797,
  [SMALL_STATE(75)] = 2827,
  [SMALL_STATE(76)] = 2857,
  [SMALL_STATE(77)] = 2887,
  [SMALL_STATE(78)] = 2911,
  [SMALL_STATE(79)] = 2941,
  [SMALL_STATE(80)] = 2965,
  [SMALL_STATE(81)] = 2999,
  [SMALL_STATE(82)] = 3029,
  [SMALL_STATE(83)] = 3073,
  [SMALL_STATE(84)] = 3107,
  [SMALL_STATE(85)] = 3137,
  [SMALL_STATE(86)] = 3171,
  [SMALL_STATE(87)] = 3194,
  [SMALL_STATE(88)] = 3217,
  [SMALL_STATE(89)] = 3240,
  [SMALL_STATE(90)] = 3263,
  [SMALL_STATE(91)] = 3286,
  [SMALL_STATE(92)] = 3327,
  [SMALL_STATE(93)] = 3350,
  [SMALL_STATE(94)] = 3391,
  [SMALL_STATE(95)] = 3414,
  [SMALL_STATE(96)] = 3437,
  [SMALL_STATE(97)] = 3460,
  [SMALL_STATE(98)] = 3499,
  [SMALL_STATE(99)] = 3522,
  [SMALL_STATE(100)] = 3545,
  [SMALL_STATE(101)] = 3568,
  [SMALL_STATE(102)] = 3591,
  [SMALL_STATE(103)] = 3614,
  [SMALL_STATE(104)] = 3637,
  [SMALL_STATE(105)] = 3660,
  [SMALL_STATE(106)] = 3699,
  [SMALL_STATE(107)] = 3722,
  [SMALL_STATE(108)] = 3745,
  [SMALL_STATE(109)] = 3768,
  [SMALL_STATE(110)] = 3791,
  [SMALL_STATE(111)] = 3813,
  [SMALL_STATE(112)] = 3851,
  [SMALL_STATE(113)] = 3889,
  [SMALL_STATE(114)] = 3915,
  [SMALL_STATE(115)] = 3937,
  [SMALL_STATE(116)] = 3959,
  [SMALL_STATE(117)] = 3981,
  [SMALL_STATE(118)] = 4003,
  [SMALL_STATE(119)] = 4025,
  [SMALL_STATE(120)] = 4046,
  [SMALL_STATE(121)] = 4067,
  [SMALL_STATE(122)] = 4096,
  [SMALL_STATE(123)] = 4125,
  [SMALL_STATE(124)] = 4160,
  [SMALL_STATE(125)] = 4195,
  [SMALL_STATE(126)] = 4211,
  [SMALL_STATE(127)] = 4228,
  [SMALL_STATE(128)] = 4245,
  [SMALL_STATE(129)] = 4262,
  [SMALL_STATE(130)] = 4279,
  [SMALL_STATE(131)] = 4296,
  [SMALL_STATE(132)] = 4313,
  [SMALL_STATE(133)] = 4330,
  [SMALL_STATE(134)] = 4347,
  [SMALL_STATE(135)] = 4364,
  [SMALL_STATE(136)] = 4381,
  [SMALL_STATE(137)] = 4398,
  [SMALL_STATE(138)] = 4415,
  [SMALL_STATE(139)] = 4432,
  [SMALL_STATE(140)] = 4449,
  [SMALL_STATE(141)] = 4468,
  [SMALL_STATE(142)] = 4485,
  [SMALL_STATE(143)] = 4502,
  [SMALL_STATE(144)] = 4519,
  [SMALL_STATE(145)] = 4538,
  [SMALL_STATE(146)] = 4554,
  [SMALL_STATE(147)] = 4570,
  [SMALL_STATE(148)] = 4586,
  [SMALL_STATE(149)] = 4608,
  [SMALL_STATE(150)] = 4630,
  [SMALL_STATE(151)] = 4652,
  [SMALL_STATE(152)] = 4668,
  [SMALL_STATE(153)] = 4684,
  [SMALL_STATE(154)] = 4700,
  [SMALL_STATE(155)] = 4716,
  [SMALL_STATE(156)] = 4738,
  [SMALL_STATE(157)] = 4754,
  [SMALL_STATE(158)] = 4776,
  [SMALL_STATE(159)] = 4792,
  [SMALL_STATE(160)] = 4808,
  [SMALL_STATE(161)] = 4824,
  [SMALL_STATE(162)] = 4840,
  [SMALL_STATE(163)] = 4856,
  [SMALL_STATE(164)] = 4872,
  [SMALL_STATE(165)] = 4894,
  [SMALL_STATE(166)] = 4916,
  [SMALL_STATE(167)] = 4932,
  [SMALL_STATE(168)] = 4946,
  [SMALL_STATE(169)] = 4962,
  [SMALL_STATE(170)] = 4976,
  [SMALL_STATE(171)] = 4992,
  [SMALL_STATE(172)] = 5005,
  [SMALL_STATE(173)] = 5018,
  [SMALL_STATE(174)] = 5031,
  [SMALL_STATE(175)] = 5044,
  [SMALL_STATE(176)] = 5055,
  [SMALL_STATE(177)] = 5068,
  [SMALL_STATE(178)] = 5081,
  [SMALL_STATE(179)] = 5094,
  [SMALL_STATE(180)] = 5107,
  [SMALL_STATE(181)] = 5120,
  [SMALL_STATE(182)] = 5133,
  [SMALL_STATE(183)] = 5146,
  [SMALL_STATE(184)] = 5159,
  [SMALL_STATE(185)] = 5172,
  [SMALL_STATE(186)] = 5185,
  [SMALL_STATE(187)] = 5196,
  [SMALL_STATE(188)] = 5209,
  [SMALL_STATE(189)] = 5222,
  [SMALL_STATE(190)] = 5235,
  [SMALL_STATE(191)] = 5248,
  [SMALL_STATE(192)] = 5261,
  [SMALL_STATE(193)] = 5271,
  [SMALL_STATE(194)] = 5281,
  [SMALL_STATE(195)] = 5291,
  [SMALL_STATE(196)] = 5301,
  [SMALL_STATE(197)] = 5311,
  [SMALL_STATE(198)] = 5321,
  [SMALL_STATE(199)] = 5331,
  [SMALL_STATE(200)] = 5341,
  [SMALL_STATE(201)] = 5351,
  [SMALL_STATE(202)] = 5361,
  [SMALL_STATE(203)] = 5371,
  [SMALL_STATE(204)] = 5381,
  [SMALL_STATE(205)] = 5391,
  [SMALL_STATE(206)] = 5401,
  [SMALL_STATE(207)] = 5411,
  [SMALL_STATE(208)] = 5421,
  [SMALL_STATE(209)] = 5431,
  [SMALL_STATE(210)] = 5441,
  [SMALL_STATE(211)] = 5451,
  [SMALL_STATE(212)] = 5461,
  [SMALL_STATE(213)] = 5471,
  [SMALL_STATE(214)] = 5481,
  [SMALL_STATE(215)] = 5491,
  [SMALL_STATE(216)] = 5501,
  [SMALL_STATE(217)] = 5511,
  [SMALL_STATE(218)] = 5521,
  [SMALL_STATE(219)] = 5531,
  [SMALL_STATE(220)] = 5541,
  [SMALL_STATE(221)] = 5551,
  [SMALL_STATE(222)] = 5561,
  [SMALL_STATE(223)] = 5571,
  [SMALL_STATE(224)] = 5581,
  [SMALL_STATE(225)] = 5591,
  [SMALL_STATE(226)] = 5601,
  [SMALL_STATE(227)] = 5611,
  [SMALL_STATE(228)] = 5621,
  [SMALL_STATE(229)] = 5631,
  [SMALL_STATE(230)] = 5641,
  [SMALL_STATE(231)] = 5648,
  [SMALL_STATE(232)] = 5655,
  [SMALL_STATE(233)] = 5662,
  [SMALL_STATE(234)] = 5669,
  [SMALL_STATE(235)] = 5676,
  [SMALL_STATE(236)] = 5683,
  [SMALL_STATE(237)] = 5690,
  [SMALL_STATE(238)] = 5697,
  [SMALL_STATE(239)] = 5704,
  [SMALL_STATE(240)] = 5711,
  [SMALL_STATE(241)] = 5718,
  [SMALL_STATE(242)] = 5725,
  [SMALL_STATE(243)] = 5732,
  [SMALL_STATE(244)] = 5739,
  [SMALL_STATE(245)] = 5746,
  [SMALL_STATE(246)] = 5753,
  [SMALL_STATE(247)] = 5760,
  [SMALL_STATE(248)] = 5767,
  [SMALL_STATE(249)] = 5774,
  [SMALL_STATE(250)] = 5781,
  [SMALL_STATE(251)] = 5788,
  [SMALL_STATE(252)] = 5795,
  [SMALL_STATE(253)] = 5802,
  [SMALL_STATE(254)] = 5809,
  [SMALL_STATE(255)] = 5816,
  [SMALL_STATE(256)] = 5823,
  [SMALL_STATE(257)] = 5830,
  [SMALL_STATE(258)] = 5837,
  [SMALL_STATE(259)] = 5844,
  [SMALL_STATE(260)] = 5851,
  [SMALL_STATE(261)] = 5858,
  [SMALL_STATE(262)] = 5865,
  [SMALL_STATE(263)] = 5872,
  [SMALL_STATE(264)] = 5879,
  [SMALL_STATE(265)] = 5886,
  [SMALL_STATE(266)] = 5893,
  [SMALL_STATE(267)] = 5900,
  [SMALL_STATE(268)] = 5907,
  [SMALL_STATE(269)] = 5914,
  [SMALL_STATE(270)] = 5921,
  [SMALL_STATE(271)] = 5928,
  [SMALL_STATE(272)] = 5935,
  [SMALL_STATE(273)] = 5942,
  [SMALL_STATE(274)] = 5949,
  [SMALL_STATE(275)] = 5956,
  [SMALL_STATE(276)] = 5963,
  [SMALL_STATE(277)] = 5970,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(182),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(245),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(251),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(122),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(269),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(21),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(189),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(189),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(183),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(121),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(268),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(29),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(214),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(123),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(233),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(38),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(178),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(178),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(165),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(181),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(97),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(97),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(208),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(217),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(253),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(170),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(258),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(63),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(246),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(251),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(78),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(203),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(204),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(205),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(192),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(157),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(181),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(93),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(93),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(208),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(217),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(165),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(181),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(105),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(105),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(208),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(217),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 4, .production_id = 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 4, .production_id = 4),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(149),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(171),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(111),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(111),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(197),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(196),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 4),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 1, .production_id = 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 1, .production_id = 1),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 5),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2, .production_id = 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2, .production_id = 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1), SHIFT_REPEAT(142),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 4),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(82),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [825] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
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
