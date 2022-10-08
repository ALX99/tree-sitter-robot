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
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

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
  aux_sym_text_repeat1 = 96,
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
  [aux_sym_text_repeat1] = "text_repeat1",
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 19,
  [29] = 26,
  [30] = 23,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 2,
  [38] = 5,
  [39] = 4,
  [40] = 40,
  [41] = 3,
  [42] = 6,
  [43] = 43,
  [44] = 44,
  [45] = 6,
  [46] = 4,
  [47] = 47,
  [48] = 5,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 2,
  [53] = 3,
  [54] = 54,
  [55] = 2,
  [56] = 56,
  [57] = 51,
  [58] = 58,
  [59] = 3,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 50,
  [65] = 65,
  [66] = 5,
  [67] = 4,
  [68] = 6,
  [69] = 69,
  [70] = 15,
  [71] = 10,
  [72] = 72,
  [73] = 72,
  [74] = 15,
  [75] = 75,
  [76] = 10,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 15,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 10,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 16,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 16,
  [105] = 103,
  [106] = 106,
  [107] = 99,
  [108] = 97,
  [109] = 100,
  [110] = 101,
  [111] = 111,
  [112] = 112,
  [113] = 106,
  [114] = 112,
  [115] = 111,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 16,
  [122] = 16,
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
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 126,
  [145] = 134,
  [146] = 130,
  [147] = 140,
  [148] = 129,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 135,
  [153] = 153,
  [154] = 136,
  [155] = 153,
  [156] = 132,
  [157] = 141,
  [158] = 131,
  [159] = 159,
  [160] = 128,
  [161] = 127,
  [162] = 133,
  [163] = 125,
  [164] = 138,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 168,
  [171] = 171,
  [172] = 171,
  [173] = 173,
  [174] = 174,
  [175] = 16,
  [176] = 173,
  [177] = 171,
  [178] = 178,
  [179] = 179,
  [180] = 178,
  [181] = 174,
  [182] = 173,
  [183] = 183,
  [184] = 184,
  [185] = 178,
  [186] = 184,
  [187] = 173,
  [188] = 171,
  [189] = 184,
  [190] = 184,
  [191] = 178,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 197,
  [201] = 192,
  [202] = 202,
  [203] = 203,
  [204] = 193,
  [205] = 199,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 209,
  [213] = 213,
  [214] = 202,
  [215] = 215,
  [216] = 216,
  [217] = 196,
  [218] = 218,
  [219] = 219,
  [220] = 203,
  [221] = 221,
  [222] = 218,
  [223] = 206,
  [224] = 210,
  [225] = 225,
  [226] = 194,
  [227] = 227,
  [228] = 225,
  [229] = 227,
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
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 242,
  [248] = 245,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 251,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 251,
  [259] = 259,
  [260] = 243,
  [261] = 261,
  [262] = 262,
  [263] = 251,
  [264] = 264,
  [265] = 238,
  [266] = 266,
  [267] = 239,
  [268] = 251,
  [269] = 251,
  [270] = 250,
  [271] = 271,
  [272] = 249,
  [273] = 241,
  [274] = 235,
  [275] = 230,
  [276] = 266,
  [277] = 264,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(302);
      if (lookahead == '\t') ADVANCE(306);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '=') ADVANCE(330);
      if (lookahead == '}') ADVANCE(329);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(305);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '@') ADVANCE(305);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '}') ADVANCE(329);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(436);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(436);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '=') ADVANCE(330);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(436);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == 'R') ADVANCE(415);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(341);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(237);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == ']') ADVANCE(343);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(239);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == ']') ADVANCE(345);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(72);
      if (lookahead == ']') ADVANCE(347);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ']') ADVANCE(346);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ']') ADVANCE(344);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ']') ADVANCE(342);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ']') ADVANCE(352);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ']') ADVANCE(353);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(257);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(267);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '$') ADVANCE(416);
      if (lookahead == 'R') ADVANCE(415);
      if (lookahead == '[') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(410);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(410);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(306);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 38:
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == 'E') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 39:
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 41:
      if (lookahead == '*') ADVANCE(350);
      END_STATE();
    case 42:
      if (lookahead == '*') ADVANCE(332);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(303);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(326);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(348);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(402);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(42);
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
      if (lookahead == '*') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(402);
      END_STATE();
    case 54:
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(402);
      END_STATE();
    case 56:
      if (lookahead == '*') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(402);
      END_STATE();
    case 58:
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 59:
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(402);
      END_STATE();
    case 60:
      if (lookahead == '*') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(355);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(357);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(423);
      END_STATE();
    case 67:
      if (lookahead == 'R') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 'T') ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'U') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == ']') ADVANCE(343);
      END_STATE();
    case 71:
      if (lookahead == ']') ADVANCE(345);
      END_STATE();
    case 72:
      if (lookahead == ']') ADVANCE(347);
      END_STATE();
    case 73:
      if (lookahead == ']') ADVANCE(346);
      END_STATE();
    case 74:
      if (lookahead == ']') ADVANCE(344);
      END_STATE();
    case 75:
      if (lookahead == ']') ADVANCE(342);
      END_STATE();
    case 76:
      if (lookahead == ']') ADVANCE(352);
      END_STATE();
    case 77:
      if (lookahead == ']') ADVANCE(353);
      END_STATE();
    case 78:
      if (lookahead == '{') ADVANCE(328);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(354);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(432);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 81:
      if (lookahead == '{') ADVANCE(431);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 86:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 88:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 95:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 96:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(222);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 98:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 99:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 100:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 101:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(156);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 109:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 110:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(220);
      END_STATE();
    case 111:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(271);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(402);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 115:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 134:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 135:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 136:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 153:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 154:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
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
          lookahead == 'g') ADVANCE(282);
      END_STATE();
    case 158:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 159:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 160:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 161:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 162:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 163:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 164:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 165:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 166:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(11);
      END_STATE();
    case 167:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(376);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(402);
      END_STATE();
    case 168:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(128);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(108);
      END_STATE();
    case 169:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 170:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 171:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 172:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 173:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 174:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 175:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 176:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 177:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 178:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 179:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 180:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 181:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 187:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 188:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 191:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 193:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 194:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 195:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 196:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 197:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 198:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 200:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 202:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 204:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      END_STATE();
    case 205:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 206:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 207:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      END_STATE();
    case 208:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 209:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 210:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 211:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 212:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 218:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 219:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 220:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
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
          lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 226:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(166);
      END_STATE();
    case 227:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      END_STATE();
    case 228:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(311);
      END_STATE();
    case 229:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(316);
      END_STATE();
    case 230:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 231:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 232:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 234:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      END_STATE();
    case 235:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      END_STATE();
    case 236:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(248);
      END_STATE();
    case 237:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(137);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 238:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 239:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(141);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 240:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
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
          lookahead == 's') ADVANCE(152);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(325);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      END_STATE();
    case 247:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 248:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 249:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(161);
      END_STATE();
    case 251:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(144);
      END_STATE();
    case 253:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(274);
      END_STATE();
    case 254:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(250);
      END_STATE();
    case 255:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(164);
      END_STATE();
    case 256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(275);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(276);
      END_STATE();
    case 259:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 264:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      END_STATE();
    case 265:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 266:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(139);
      END_STATE();
    case 267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      END_STATE();
    case 269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(27);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 271:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 272:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 273:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 274:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(206);
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
          lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 278:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 279:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 280:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 281:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 282:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 283:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 284:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 285:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(183);
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
          lookahead == 'w') ADVANCE(187);
      END_STATE();
    case 289:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(197);
      END_STATE();
    case 290:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 291:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 292:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(402);
      END_STATE();
    case 293:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(434);
      END_STATE();
    case 294:
      if (eof) ADVANCE(302);
      if (lookahead == '\t') ADVANCE(439);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '}') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '@') ADVANCE(78);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(125);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(193);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(273);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 295:
      if (eof) ADVANCE(302);
      if (lookahead == '\t') ADVANCE(439);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(335);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 296:
      if (eof) ADVANCE(302);
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 297:
      if (eof) ADVANCE(302);
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 298:
      if (eof) ADVANCE(302);
      if (lookahead == '\t') ADVANCE(436);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 299:
      if (eof) ADVANCE(302);
      if (lookahead == '\t') ADVANCE(436);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 300:
      if (eof) ADVANCE(302);
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(337);
      if (lookahead == '#') ADVANCE(417);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == '.') ADVANCE(414);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 301:
      if (eof) ADVANCE(302);
      if (lookahead == '\t') ADVANCE(435);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\r') ADVANCE(442);
      if (lookahead == ' ') ADVANCE(337);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_settings_section_token1);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_settings_section_token2);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(308);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_settings_section_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_setting_statement_token1);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_setting_statement_token2);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_setting_statement_token3);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_setting_statement_token4);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_setting_statement_token5);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_setting_statement_token6);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_setting_statement_token7);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_setting_statement_token8);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_setting_statement_token9);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_setting_statement_token10);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_setting_statement_token11);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_setting_statement_token12);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_setting_statement_token13);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_setting_statement_token14);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_setting_statement_token15);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_setting_statement_token16);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_setting_statement_token17);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_variables_section_token1);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_variable_definition_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keywords_section_token1);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(418);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '#') ADVANCE(293);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '#') ADVANCE(293);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead == '#') ADVANCE(293);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(440);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '$' &&
          lookahead != '&' &&
          lookahead != '@') ADVANCE(418);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token1);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token2);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token3);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token4);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token5);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_keyword_setting_token6);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token1);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_test_cases_or_tasks_section_token2);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token1);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_test_case_or_task_setting_token2);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_ellipses);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_ellipses);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_indented_ellipses);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '.') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(376);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(370);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '*') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '*') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_test_case_or_task);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '*') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(402);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(205);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(103);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '.') ADVANCE(62);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '{') ADVANCE(354);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(434);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_keyword_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(434);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_keyword_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(434);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_keyword_token4);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_RETURN);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(434);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '#') ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'M') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'P') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'T') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == 'Y') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_AMP_LBRACE);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_EMPTY);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(430);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__separator);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '#') ADVANCE(293);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '#') ADVANCE(293);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__line_break);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__line_break);
      if (lookahead == '\n') ADVANCE(441);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 294},
  [2] = {.lex_state = 294},
  [3] = {.lex_state = 294},
  [4] = {.lex_state = 294},
  [5] = {.lex_state = 294},
  [6] = {.lex_state = 294},
  [7] = {.lex_state = 294},
  [8] = {.lex_state = 294},
  [9] = {.lex_state = 294},
  [10] = {.lex_state = 294},
  [11] = {.lex_state = 294},
  [12] = {.lex_state = 294},
  [13] = {.lex_state = 294},
  [14] = {.lex_state = 294},
  [15] = {.lex_state = 294},
  [16] = {.lex_state = 294},
  [17] = {.lex_state = 294},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 294},
  [37] = {.lex_state = 300},
  [38] = {.lex_state = 300},
  [39] = {.lex_state = 301},
  [40] = {.lex_state = 299},
  [41] = {.lex_state = 300},
  [42] = {.lex_state = 301},
  [43] = {.lex_state = 298},
  [44] = {.lex_state = 299},
  [45] = {.lex_state = 300},
  [46] = {.lex_state = 300},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 301},
  [49] = {.lex_state = 298},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 301},
  [53] = {.lex_state = 301},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 295},
  [56] = {.lex_state = 296},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 296},
  [59] = {.lex_state = 295},
  [60] = {.lex_state = 296},
  [61] = {.lex_state = 296},
  [62] = {.lex_state = 296},
  [63] = {.lex_state = 296},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 296},
  [66] = {.lex_state = 295},
  [67] = {.lex_state = 295},
  [68] = {.lex_state = 295},
  [69] = {.lex_state = 297},
  [70] = {.lex_state = 301},
  [71] = {.lex_state = 300},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 300},
  [75] = {.lex_state = 297},
  [76] = {.lex_state = 301},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 297},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 297},
  [81] = {.lex_state = 297},
  [82] = {.lex_state = 297},
  [83] = {.lex_state = 297},
  [84] = {.lex_state = 294},
  [85] = {.lex_state = 294},
  [86] = {.lex_state = 294},
  [87] = {.lex_state = 294},
  [88] = {.lex_state = 295},
  [89] = {.lex_state = 294},
  [90] = {.lex_state = 294},
  [91] = {.lex_state = 294},
  [92] = {.lex_state = 295},
  [93] = {.lex_state = 294},
  [94] = {.lex_state = 294},
  [95] = {.lex_state = 294},
  [96] = {.lex_state = 298},
  [97] = {.lex_state = 299},
  [98] = {.lex_state = 299},
  [99] = {.lex_state = 298},
  [100] = {.lex_state = 298},
  [101] = {.lex_state = 298},
  [102] = {.lex_state = 299},
  [103] = {.lex_state = 298},
  [104] = {.lex_state = 298},
  [105] = {.lex_state = 299},
  [106] = {.lex_state = 299},
  [107] = {.lex_state = 299},
  [108] = {.lex_state = 298},
  [109] = {.lex_state = 299},
  [110] = {.lex_state = 299},
  [111] = {.lex_state = 298},
  [112] = {.lex_state = 299},
  [113] = {.lex_state = 298},
  [114] = {.lex_state = 298},
  [115] = {.lex_state = 299},
  [116] = {.lex_state = 296},
  [117] = {.lex_state = 296},
  [118] = {.lex_state = 294},
  [119] = {.lex_state = 297},
  [120] = {.lex_state = 297},
  [121] = {.lex_state = 296},
  [122] = {.lex_state = 297},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 294},
  [125] = {.lex_state = 4},
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
  [139] = {.lex_state = 294},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 294},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 38},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 34},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 38},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 39},
  [231] = {.lex_state = 35},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 35},
  [234] = {.lex_state = 294},
  [235] = {.lex_state = 39},
  [236] = {.lex_state = 35},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 294},
  [239] = {.lex_state = 294},
  [240] = {.lex_state = 39},
  [241] = {.lex_state = 294},
  [242] = {.lex_state = 294},
  [243] = {.lex_state = 294},
  [244] = {.lex_state = 294},
  [245] = {.lex_state = 294},
  [246] = {.lex_state = 37},
  [247] = {.lex_state = 294},
  [248] = {.lex_state = 294},
  [249] = {.lex_state = 294},
  [250] = {.lex_state = 294},
  [251] = {.lex_state = 294},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 294},
  [254] = {.lex_state = 35},
  [255] = {.lex_state = 294},
  [256] = {.lex_state = 294},
  [257] = {.lex_state = 294},
  [258] = {.lex_state = 294},
  [259] = {.lex_state = 294},
  [260] = {.lex_state = 294},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 294},
  [264] = {.lex_state = 39},
  [265] = {.lex_state = 294},
  [266] = {.lex_state = 294},
  [267] = {.lex_state = 294},
  [268] = {.lex_state = 294},
  [269] = {.lex_state = 294},
  [270] = {.lex_state = 294},
  [271] = {.lex_state = 294},
  [272] = {.lex_state = 294},
  [273] = {.lex_state = 294},
  [274] = {.lex_state = 39},
  [275] = {.lex_state = 39},
  [276] = {.lex_state = 294},
  [277] = {.lex_state = 39},
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
    [sym_section] = STATE(86),
    [sym_settings_section] = STATE(166),
    [sym_variables_section] = STATE(166),
    [sym_keywords_section] = STATE(166),
    [sym_test_cases_or_tasks_section] = STATE(166),
    [sym__empty_line] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(36),
    [aux_sym_source_file_repeat2] = STATE(86),
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
    STATE(6), 2,
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
    ACTIONS(23), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(4), 2,
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
    ACTIONS(31), 1,
      sym__whitespace,
    ACTIONS(21), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(2), 2,
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
    ACTIONS(35), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(6), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(33), 25,
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
    STATE(11), 3,
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
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(48), 1,
      sym__line_break,
    STATE(13), 3,
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
  [294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(11), 3,
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
  [336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym__whitespace,
    ACTIONS(50), 27,
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
  [372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym__whitespace,
    ACTIONS(62), 1,
      sym__line_break,
    STATE(11), 3,
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
    ACTIONS(56), 17,
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
    ACTIONS(67), 1,
      sym__line_break,
    STATE(9), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(65), 6,
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
  [456] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(44), 1,
      sym__line_break,
    STATE(11), 3,
      sym_setting_statement,
      sym__empty_line,
      aux_sym_settings_section_repeat1,
    ACTIONS(69), 6,
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
    STATE(7), 3,
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
  [643] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(96), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(176), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [690] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(100), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(176), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [737] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(108), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(176), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [784] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(139), 1,
      sym_arguments,
    STATE(182), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [831] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(102), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(187), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [878] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(107), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(187), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [925] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(108), 1,
      aux_sym_keyword_token4,
    ACTIONS(111), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(114), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(117), 1,
      sym__separator,
    ACTIONS(119), 1,
      sym__line_break,
    STATE(24), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    ACTIONS(105), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [972] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(97), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(187), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1019] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(112), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(187), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1066] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(121), 1,
      sym__separator,
    ACTIONS(123), 1,
      sym__line_break,
    STATE(24), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1113] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(109), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(187), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1160] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(114), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(176), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1207] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(99), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(176), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1254] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(120), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(173), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1301] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(17), 1,
      sym_arguments,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(182), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1348] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(119), 1,
      sym_arguments,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(173), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1395] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(123), 1,
      sym_variable,
    STATE(124), 1,
      sym_arguments,
    STATE(137), 1,
      sym_text,
    STATE(182), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1442] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(93), 1,
      aux_sym_keyword_token4,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(27), 1,
      aux_sym_argument_repeat1,
    STATE(47), 1,
      aux_sym_text_repeat1,
    STATE(123), 1,
      sym_variable,
    STATE(137), 1,
      sym_text,
    STATE(195), 1,
      sym_argument,
    ACTIONS(91), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1486] = 11,
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
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      sym__line_break,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(89), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    STATE(166), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [1526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(45), 2,
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
  [1553] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(37), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 4,
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
  [1580] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_ellipses,
    ACTIONS(133), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(42), 2,
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
  [1609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym__separator,
    ACTIONS(141), 1,
      sym__whitespace,
    ACTIONS(143), 1,
      sym__line_break,
    STATE(44), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(137), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [1640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(46), 2,
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
  [1667] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_ellipses,
    ACTIONS(148), 1,
      sym_indented_ellipses,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(42), 2,
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
  [1696] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__separator,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(159), 1,
      sym__line_break,
    ACTIONS(153), 2,
      anon_sym_,
      aux_sym_keyword_token1,
    STATE(49), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1727] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      sym__separator,
    ACTIONS(168), 1,
      sym__whitespace,
    ACTIONS(171), 1,
      sym__line_break,
    STATE(44), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
    ACTIONS(163), 7,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
  [1758] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(45), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(38), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [1785] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_ellipses,
      sym_indented_ellipses,
    STATE(45), 2,
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
  [1812] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(179), 1,
      aux_sym_keyword_token4,
    ACTIONS(181), 1,
      sym__separator,
    ACTIONS(183), 1,
      sym__line_break,
    ACTIONS(177), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(54), 2,
      sym_variable,
      aux_sym_text_repeat1,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1851] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_ellipses,
    ACTIONS(133), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(52), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [1880] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__separator,
    ACTIONS(192), 1,
      sym__whitespace,
    ACTIONS(195), 1,
      sym__line_break,
    ACTIONS(187), 2,
      anon_sym_,
      aux_sym_keyword_token1,
    STATE(49), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [1911] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(202), 1,
      aux_sym_keyword_token4,
    ACTIONS(204), 1,
      sym__separator,
    ACTIONS(206), 1,
      sym__line_break,
    STATE(51), 1,
      aux_sym_keyword_repeat1,
    STATE(141), 1,
      sym_variable,
    ACTIONS(200), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1952] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_,
    ACTIONS(211), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(217), 1,
      aux_sym_keyword_token4,
    ACTIONS(220), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(223), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(226), 1,
      sym__separator,
    ACTIONS(228), 1,
      sym__line_break,
    STATE(51), 1,
      aux_sym_keyword_repeat1,
    STATE(141), 1,
      sym_variable,
    ACTIONS(214), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [1993] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_ellipses,
    ACTIONS(133), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(42), 2,
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
  [2022] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_ellipses,
    ACTIONS(133), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(39), 2,
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
  [2051] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_,
    ACTIONS(233), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(239), 1,
      aux_sym_keyword_token4,
    ACTIONS(242), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(245), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(248), 1,
      sym__separator,
    ACTIONS(250), 1,
      sym__line_break,
    ACTIONS(236), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(54), 2,
      sym_variable,
      aux_sym_text_repeat1,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2090] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_ellipses,
    ACTIONS(254), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(68), 2,
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
  [2118] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      aux_sym_keyword_token1,
    ACTIONS(262), 1,
      sym__whitespace,
    ACTIONS(264), 1,
      sym__line_break,
    STATE(244), 1,
      sym_keyword,
    STATE(58), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2150] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__line_break,
    ACTIONS(266), 1,
      anon_sym_,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(275), 1,
      aux_sym_keyword_token4,
    ACTIONS(278), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(281), 1,
      anon_sym_AMP_LBRACE,
    STATE(57), 1,
      aux_sym_keyword_repeat1,
    STATE(157), 1,
      sym_variable,
    ACTIONS(272), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(147), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2188] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_,
    ACTIONS(289), 1,
      aux_sym_keyword_token1,
    ACTIONS(292), 1,
      sym__whitespace,
    ACTIONS(295), 1,
      sym__line_break,
    STATE(244), 1,
      sym_keyword,
    STATE(58), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(284), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_ellipses,
    ACTIONS(254), 1,
      sym_indented_ellipses,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(67), 2,
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
  [2248] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      aux_sym_keyword_token1,
    ACTIONS(262), 1,
      sym__whitespace,
    ACTIONS(300), 1,
      sym__line_break,
    STATE(244), 1,
      sym_keyword,
    STATE(56), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2280] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      aux_sym_keyword_token1,
    ACTIONS(262), 1,
      sym__whitespace,
    ACTIONS(302), 1,
      sym__line_break,
    STATE(244), 1,
      sym_keyword,
    STATE(65), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(256), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2312] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      aux_sym_keyword_token1,
    ACTIONS(262), 1,
      sym__whitespace,
    ACTIONS(306), 1,
      sym__line_break,
    STATE(244), 1,
      sym_keyword,
    STATE(63), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(304), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2344] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      aux_sym_keyword_token1,
    ACTIONS(262), 1,
      sym__whitespace,
    ACTIONS(264), 1,
      sym__line_break,
    STATE(244), 1,
      sym_keyword,
    STATE(58), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(308), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2376] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym__line_break,
    ACTIONS(310), 1,
      anon_sym_,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(316), 1,
      aux_sym_keyword_token4,
    ACTIONS(318), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(320), 1,
      anon_sym_AMP_LBRACE,
    STATE(57), 1,
      aux_sym_keyword_repeat1,
    STATE(157), 1,
      sym_variable,
    ACTIONS(314), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(147), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2414] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      aux_sym_keyword_token1,
    ACTIONS(262), 1,
      sym__whitespace,
    ACTIONS(264), 1,
      sym__line_break,
    STATE(244), 1,
      sym_keyword,
    STATE(58), 3,
      sym_keyword_definition,
      sym__empty_line,
      aux_sym_keywords_section_repeat1,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2446] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_ellipses,
    ACTIONS(254), 1,
      sym_indented_ellipses,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(55), 2,
      sym_continuation,
      aux_sym_arguments_repeat2,
    ACTIONS(31), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [2474] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_ellipses,
    ACTIONS(254), 1,
      sym_indented_ellipses,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(68), 2,
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
  [2502] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_ellipses,
    ACTIONS(327), 1,
      sym_indented_ellipses,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym__line_break,
    STATE(68), 2,
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
  [2530] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
    ACTIONS(334), 1,
      anon_sym_,
    ACTIONS(336), 1,
      sym_test_case_or_task,
    ACTIONS(338), 1,
      sym__whitespace,
    ACTIONS(340), 1,
      sym__line_break,
    STATE(78), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(332), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2561] = 3,
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
  [2582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(50), 9,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [2603] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(318), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(320), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(344), 1,
      aux_sym_keyword_token4,
    STATE(64), 1,
      aux_sym_keyword_repeat1,
    STATE(157), 1,
      sym_variable,
    ACTIONS(342), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(147), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2638] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(348), 1,
      aux_sym_keyword_token4,
    STATE(50), 1,
      aux_sym_keyword_repeat1,
    STATE(141), 1,
      sym_variable,
    ACTIONS(346), 2,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [2673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(75), 9,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_indented_ellipses,
      sym__line_break,
  [2694] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      anon_sym_,
    ACTIONS(357), 1,
      sym_test_case_or_task,
    ACTIONS(360), 1,
      sym__whitespace,
    ACTIONS(363), 1,
      sym__line_break,
    STATE(75), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(352), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(52), 10,
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
  [2746] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(370), 1,
      aux_sym_keyword_token1,
    ACTIONS(372), 1,
      anon_sym_RETURN,
    STATE(201), 1,
      sym_keyword,
    STATE(101), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(366), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token3,
      aux_sym_keyword_setting_token4,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
  [2775] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_,
    ACTIONS(336), 1,
      sym_test_case_or_task,
    ACTIONS(338), 1,
      sym__whitespace,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(378), 1,
      sym__line_break,
    STATE(75), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(376), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2806] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_keyword_token1,
    ACTIONS(382), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(384), 1,
      anon_sym_RETURN,
    STATE(192), 1,
      sym_keyword,
    STATE(110), 3,
      sym_variable_assignment,
      sym_keyword_invocation,
      sym_return_statement,
    ACTIONS(380), 6,
      aux_sym_keyword_setting_token1,
      aux_sym_keyword_setting_token2,
      aux_sym_keyword_setting_token5,
      aux_sym_keyword_setting_token6,
      aux_sym_test_case_or_task_setting_token1,
      aux_sym_test_case_or_task_setting_token2,
  [2835] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_,
    ACTIONS(336), 1,
      sym_test_case_or_task,
    ACTIONS(338), 1,
      sym__whitespace,
    ACTIONS(386), 1,
      ts_builtin_sym_end,
    ACTIONS(390), 1,
      sym__line_break,
    STATE(81), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(388), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2866] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_,
    ACTIONS(336), 1,
      sym_test_case_or_task,
    ACTIONS(338), 1,
      sym__whitespace,
    ACTIONS(378), 1,
      sym__line_break,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    STATE(75), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(394), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2897] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_,
    ACTIONS(336), 1,
      sym_test_case_or_task,
    ACTIONS(338), 1,
      sym__whitespace,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(396), 1,
      sym__line_break,
    STATE(83), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(394), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2928] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_,
    ACTIONS(336), 1,
      sym_test_case_or_task,
    ACTIONS(338), 1,
      sym__whitespace,
    ACTIONS(378), 1,
      sym__line_break,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    STATE(75), 3,
      sym_test_case_or_task_definition,
      sym__empty_line,
      aux_sym_test_cases_or_tasks_section_repeat1,
    ACTIONS(400), 5,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2959] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(404), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(406), 1,
      sym__line_break,
    STATE(90), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(402), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [2985] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(404), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(408), 1,
      sym__line_break,
    STATE(94), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(402), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3011] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(91), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(166), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [3041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(404), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(412), 1,
      sym__line_break,
    STATE(95), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(410), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3067] = 3,
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
  [3087] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_settings_section_token1,
    ACTIONS(9), 1,
      aux_sym_variables_section_token1,
    ACTIONS(11), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(91), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(166), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [3117] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(404), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(408), 1,
      sym__line_break,
    STATE(94), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(416), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3143] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      ts_builtin_sym_end,
    ACTIONS(420), 1,
      aux_sym_settings_section_token1,
    ACTIONS(423), 1,
      aux_sym_variables_section_token1,
    ACTIONS(426), 1,
      aux_sym_keywords_section_token1,
    ACTIONS(429), 2,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
    STATE(91), 2,
      sym_section,
      aux_sym_source_file_repeat2,
    STATE(166), 4,
      sym_settings_section,
      sym_variables_section,
      sym_keywords_section,
      sym_test_cases_or_tasks_section,
  [3173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      sym_indented_ellipses,
      sym__line_break,
    ACTIONS(52), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_ellipses,
      sym_test_case_or_task,
      sym__whitespace,
  [3193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(404), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(434), 1,
      sym__line_break,
    STATE(85), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(432), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3219] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(441), 1,
      sym__whitespace,
    ACTIONS(444), 1,
      sym__line_break,
    STATE(94), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(436), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym__whitespace,
    ACTIONS(404), 1,
      aux_sym_variable_definition_token1,
    ACTIONS(408), 1,
      sym__line_break,
    STATE(94), 3,
      sym_variable_definition,
      sym__empty_line,
      aux_sym_variables_section_repeat1,
    ACTIONS(447), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(449), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(455), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3309] = 3,
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
  [3328] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(457), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(461), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(465), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(471), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(473), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3423] = 3,
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
  [3442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(475), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(479), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(459), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(453), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(463), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(467), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(481), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(487), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3594] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(477), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 4,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__separator,
      sym__whitespace,
    ACTIONS(485), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(483), 9,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__separator,
      sym__whitespace,
  [3651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(489), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3669] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_,
      aux_sym_keyword_token1,
      sym__whitespace,
    ACTIONS(493), 7,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [3687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__whitespace,
    ACTIONS(502), 1,
      sym__line_break,
    STATE(118), 2,
      sym__empty_line,
      aux_sym_source_file_repeat1,
    ACTIONS(497), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [3709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(507), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [3727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      sym__line_break,
    ACTIONS(511), 8,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      anon_sym_,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym_test_case_or_task,
      sym__whitespace,
  [3745] = 3,
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
  [3763] = 3,
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
  [3781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_,
    ACTIONS(517), 3,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(515), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [3800] = 3,
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
  [3817] = 3,
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
  [3834] = 3,
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
  [3851] = 3,
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
  [3868] = 3,
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
  [3885] = 3,
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
  [3902] = 3,
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
  [3919] = 3,
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
  [3936] = 3,
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
  [3953] = 3,
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
  [3970] = 3,
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
  [3987] = 3,
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
  [4004] = 3,
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
  [4021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_,
    ACTIONS(517), 3,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(515), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(576), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym__whitespace,
    ACTIONS(578), 8,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_variable_definition_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
      sym__line_break,
  [4074] = 3,
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
  [4091] = 3,
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
  [4108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(250), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 4,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
      sym__separator,
    ACTIONS(119), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4142] = 3,
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
  [4158] = 3,
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
  [4174] = 3,
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
  [4190] = 3,
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
  [4206] = 3,
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
  [4222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__separator,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(590), 1,
      sym__line_break,
    STATE(116), 1,
      sym_keyword_definition_body,
    STATE(43), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [4244] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym__separator,
    ACTIONS(141), 1,
      sym__whitespace,
    ACTIONS(592), 1,
      sym__line_break,
    STATE(119), 1,
      sym_test_case_or_task_definition_body,
    STATE(40), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [4266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(142), 1,
      sym_variable,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4288] = 3,
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
  [4304] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(318), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(320), 1,
      anon_sym_AMP_LBRACE,
    STATE(164), 1,
      sym_variable,
    STATE(147), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4326] = 3,
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
  [4342] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(95), 1,
      anon_sym_AT_LBRACE,
    ACTIONS(97), 1,
      anon_sym_AMP_LBRACE,
    STATE(138), 1,
      sym_variable,
    STATE(140), 4,
      sym_list_variable,
      sym_scalar_variable,
      sym_dictionary_variable,
      sym_empty_variable,
  [4364] = 3,
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
  [4380] = 3,
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
  [4396] = 3,
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
  [4412] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym__separator,
    ACTIONS(157), 1,
      sym__whitespace,
    ACTIONS(590), 1,
      sym__line_break,
    STATE(117), 1,
      sym_keyword_definition_body,
    STATE(43), 4,
      sym_keyword_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_keyword_definition_body_repeat1,
  [4434] = 3,
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
  [4450] = 3,
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
  [4466] = 3,
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
  [4482] = 3,
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
  [4498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 3,
      anon_sym_,
      aux_sym_keyword_token2,
      aux_sym_keyword_token3,
    ACTIONS(576), 5,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_keyword_token4,
      anon_sym_AT_LBRACE,
      anon_sym_AMP_LBRACE,
      sym__line_break,
  [4514] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym__separator,
    ACTIONS(141), 1,
      sym__whitespace,
    ACTIONS(592), 1,
      sym__line_break,
    STATE(120), 1,
      sym_test_case_or_task_definition_body,
    STATE(40), 4,
      sym_test_case_or_task_setting,
      sym_statement,
      sym__empty_line,
      aux_sym_test_case_or_task_definition_body_repeat1,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 6,
      ts_builtin_sym_end,
      aux_sym_settings_section_token1,
      aux_sym_variables_section_token1,
      aux_sym_keywords_section_token1,
      aux_sym_test_cases_or_tasks_section_token1,
      aux_sym_test_cases_or_tasks_section_token2,
  [4548] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__separator,
    ACTIONS(598), 1,
      sym__whitespace,
    ACTIONS(600), 1,
      sym__line_break,
    STATE(150), 1,
      sym__empty_line,
  [4564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      sym__separator,
    ACTIONS(606), 1,
      sym__line_break,
    ACTIONS(602), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      sym__whitespace,
    ACTIONS(608), 1,
      sym__separator,
    ACTIONS(610), 1,
      sym__line_break,
    STATE(165), 1,
      sym__empty_line,
  [4594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym__separator,
    ACTIONS(616), 1,
      sym__line_break,
    ACTIONS(612), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(620), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [4621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(622), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [4634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(624), 1,
      sym__line_break,
    STATE(172), 1,
      aux_sym_arguments_repeat1,
  [4647] = 4,
    ACTIONS(626), 1,
      anon_sym_,
    ACTIONS(628), 1,
      sym_variable_name,
    ACTIONS(630), 1,
      anon_sym_EMPTY,
    ACTIONS(632), 1,
      sym_comment,
  [4660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__line_break,
    ACTIONS(81), 2,
      sym__separator,
      sym__whitespace,
  [4671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(634), 1,
      sym__line_break,
    STATE(171), 1,
      aux_sym_arguments_repeat1,
  [4684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(636), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [4697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(638), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [4710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym__separator,
    ACTIONS(640), 2,
      anon_sym_EQ,
      anon_sym_EQ2,
  [4721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(644), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [4734] = 4,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_,
    ACTIONS(648), 1,
      sym_variable_name,
    ACTIONS(650), 1,
      anon_sym_EMPTY,
  [4747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(652), 1,
      sym__line_break,
    STATE(177), 1,
      aux_sym_arguments_repeat1,
  [4760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__separator,
    ACTIONS(657), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [4773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(659), 1,
      sym__line_break,
    STATE(185), 1,
      aux_sym_arguments_repeat1,
  [4786] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(661), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [4799] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(663), 1,
      sym__line_break,
    STATE(178), 1,
      aux_sym_arguments_repeat1,
  [4812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(665), 1,
      sym__line_break,
    STATE(188), 1,
      aux_sym_arguments_repeat1,
  [4825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(667), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [4838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(669), 1,
      sym__line_break,
    STATE(180), 1,
      aux_sym_arguments_repeat1,
  [4851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(671), 1,
      sym__line_break,
    STATE(191), 1,
      aux_sym_arguments_repeat1,
  [4864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__separator,
    ACTIONS(673), 1,
      sym__line_break,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [4877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym__separator,
    ACTIONS(677), 1,
      sym__line_break,
  [4887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
    ACTIONS(681), 1,
      anon_sym_,
  [4897] = 3,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_variable_name,
    ACTIONS(685), 1,
      anon_sym_EMPTY,
  [4907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym__line_break,
    ACTIONS(687), 1,
      sym__separator,
  [4917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    ACTIONS(691), 1,
      anon_sym_,
  [4927] = 3,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_,
    ACTIONS(695), 1,
      sym_variable_name,
  [4937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym__separator,
    ACTIONS(699), 1,
      sym__line_break,
  [4947] = 3,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_,
    ACTIONS(703), 1,
      sym_variable_name,
  [4957] = 3,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_,
    ACTIONS(707), 1,
      sym_variable_name,
  [4967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym__separator,
    ACTIONS(711), 1,
      sym__line_break,
  [4977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym__separator,
    ACTIONS(715), 1,
      sym__line_break,
  [4987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
    ACTIONS(719), 1,
      anon_sym_,
  [4997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 1,
      anon_sym_,
  [5007] = 3,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_,
    ACTIONS(727), 1,
      sym_variable_name,
  [5017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    ACTIONS(731), 1,
      anon_sym_,
  [5027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym__separator,
    ACTIONS(735), 1,
      sym__line_break,
  [5037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym__separator,
    ACTIONS(739), 1,
      sym__line_break,
  [5047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym__separator,
    ACTIONS(743), 1,
      sym__line_break,
  [5057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_RBRACE,
    ACTIONS(747), 1,
      anon_sym_,
  [5067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym__separator,
    ACTIONS(751), 1,
      sym__line_break,
  [5077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      sym__separator,
    ACTIONS(755), 1,
      sym__line_break,
  [5087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym_settings_section_token3,
    ACTIONS(759), 1,
      sym__line_break,
  [5097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym__separator,
    ACTIONS(763), 1,
      sym__line_break,
  [5107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      aux_sym_keyword_token1,
    STATE(259), 1,
      sym_keyword,
  [5117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      aux_sym_settings_section_token3,
    ACTIONS(767), 1,
      sym__line_break,
  [5127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    ACTIONS(771), 1,
      anon_sym_,
  [5137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    ACTIONS(775), 1,
      anon_sym_,
  [5147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      aux_sym_settings_section_token3,
    ACTIONS(779), 1,
      sym__line_break,
  [5157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    ACTIONS(783), 1,
      anon_sym_,
  [5167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      aux_sym_settings_section_token3,
    ACTIONS(787), 1,
      sym__line_break,
  [5177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    ACTIONS(791), 1,
      anon_sym_,
  [5187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(795), 1,
      anon_sym_,
  [5197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(799), 1,
      anon_sym_,
  [5207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RBRACE,
    ACTIONS(803), 1,
      anon_sym_,
  [5217] = 3,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_variable_name,
    ACTIONS(807), 1,
      anon_sym_EMPTY,
  [5227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RBRACE,
    ACTIONS(811), 1,
      anon_sym_,
  [5237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RBRACE,
    ACTIONS(815), 1,
      anon_sym_,
  [5247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_RBRACE,
    ACTIONS(819), 1,
      anon_sym_,
  [5257] = 2,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_variable_name,
  [5264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      aux_sym_settings_section_token2,
  [5271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      ts_builtin_sym_end,
  [5278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      aux_sym_settings_section_token2,
  [5285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      sym__line_break,
  [5292] = 2,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(831), 1,
      sym_variable_name,
  [5299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      aux_sym_settings_section_token2,
  [5306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      sym__separator,
  [5313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
  [5327] = 2,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(837), 1,
      sym_variable_name,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
  [5341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RBRACE,
  [5348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
  [5355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      sym__line_break,
  [5362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
  [5369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      sym_test_case_or_task,
  [5376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_RBRACE,
  [5383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
  [5390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
  [5397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_RBRACE,
  [5404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym__line_break,
  [5411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym__separator,
  [5418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      sym__line_break,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      aux_sym_settings_section_token2,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym__line_break,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      sym__line_break,
  [5453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym__line_break,
  [5460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__line_break,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
  [5474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      sym__separator,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym__separator,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym__line_break,
  [5495] = 2,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym_variable_name,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
  [5516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACE,
  [5523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym__line_break,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym__line_break,
  [5537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
  [5544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym__line_break,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_RBRACE,
  [5558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
  [5565] = 2,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym_variable_name,
  [5572] = 2,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(895), 1,
      sym_variable_name,
  [5579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RBRACE,
  [5586] = 2,
    ACTIONS(632), 1,
      sym_comment,
    ACTIONS(899), 1,
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
  [SMALL_STATE(11)] = 372,
  [SMALL_STATE(12)] = 414,
  [SMALL_STATE(13)] = 456,
  [SMALL_STATE(14)] = 498,
  [SMALL_STATE(15)] = 540,
  [SMALL_STATE(16)] = 576,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 643,
  [SMALL_STATE(19)] = 690,
  [SMALL_STATE(20)] = 737,
  [SMALL_STATE(21)] = 784,
  [SMALL_STATE(22)] = 831,
  [SMALL_STATE(23)] = 878,
  [SMALL_STATE(24)] = 925,
  [SMALL_STATE(25)] = 972,
  [SMALL_STATE(26)] = 1019,
  [SMALL_STATE(27)] = 1066,
  [SMALL_STATE(28)] = 1113,
  [SMALL_STATE(29)] = 1160,
  [SMALL_STATE(30)] = 1207,
  [SMALL_STATE(31)] = 1254,
  [SMALL_STATE(32)] = 1301,
  [SMALL_STATE(33)] = 1348,
  [SMALL_STATE(34)] = 1395,
  [SMALL_STATE(35)] = 1442,
  [SMALL_STATE(36)] = 1486,
  [SMALL_STATE(37)] = 1526,
  [SMALL_STATE(38)] = 1553,
  [SMALL_STATE(39)] = 1580,
  [SMALL_STATE(40)] = 1609,
  [SMALL_STATE(41)] = 1640,
  [SMALL_STATE(42)] = 1667,
  [SMALL_STATE(43)] = 1696,
  [SMALL_STATE(44)] = 1727,
  [SMALL_STATE(45)] = 1758,
  [SMALL_STATE(46)] = 1785,
  [SMALL_STATE(47)] = 1812,
  [SMALL_STATE(48)] = 1851,
  [SMALL_STATE(49)] = 1880,
  [SMALL_STATE(50)] = 1911,
  [SMALL_STATE(51)] = 1952,
  [SMALL_STATE(52)] = 1993,
  [SMALL_STATE(53)] = 2022,
  [SMALL_STATE(54)] = 2051,
  [SMALL_STATE(55)] = 2090,
  [SMALL_STATE(56)] = 2118,
  [SMALL_STATE(57)] = 2150,
  [SMALL_STATE(58)] = 2188,
  [SMALL_STATE(59)] = 2220,
  [SMALL_STATE(60)] = 2248,
  [SMALL_STATE(61)] = 2280,
  [SMALL_STATE(62)] = 2312,
  [SMALL_STATE(63)] = 2344,
  [SMALL_STATE(64)] = 2376,
  [SMALL_STATE(65)] = 2414,
  [SMALL_STATE(66)] = 2446,
  [SMALL_STATE(67)] = 2474,
  [SMALL_STATE(68)] = 2502,
  [SMALL_STATE(69)] = 2530,
  [SMALL_STATE(70)] = 2561,
  [SMALL_STATE(71)] = 2582,
  [SMALL_STATE(72)] = 2603,
  [SMALL_STATE(73)] = 2638,
  [SMALL_STATE(74)] = 2673,
  [SMALL_STATE(75)] = 2694,
  [SMALL_STATE(76)] = 2725,
  [SMALL_STATE(77)] = 2746,
  [SMALL_STATE(78)] = 2775,
  [SMALL_STATE(79)] = 2806,
  [SMALL_STATE(80)] = 2835,
  [SMALL_STATE(81)] = 2866,
  [SMALL_STATE(82)] = 2897,
  [SMALL_STATE(83)] = 2928,
  [SMALL_STATE(84)] = 2959,
  [SMALL_STATE(85)] = 2985,
  [SMALL_STATE(86)] = 3011,
  [SMALL_STATE(87)] = 3041,
  [SMALL_STATE(88)] = 3067,
  [SMALL_STATE(89)] = 3087,
  [SMALL_STATE(90)] = 3117,
  [SMALL_STATE(91)] = 3143,
  [SMALL_STATE(92)] = 3173,
  [SMALL_STATE(93)] = 3193,
  [SMALL_STATE(94)] = 3219,
  [SMALL_STATE(95)] = 3245,
  [SMALL_STATE(96)] = 3271,
  [SMALL_STATE(97)] = 3290,
  [SMALL_STATE(98)] = 3309,
  [SMALL_STATE(99)] = 3328,
  [SMALL_STATE(100)] = 3347,
  [SMALL_STATE(101)] = 3366,
  [SMALL_STATE(102)] = 3385,
  [SMALL_STATE(103)] = 3404,
  [SMALL_STATE(104)] = 3423,
  [SMALL_STATE(105)] = 3442,
  [SMALL_STATE(106)] = 3461,
  [SMALL_STATE(107)] = 3480,
  [SMALL_STATE(108)] = 3499,
  [SMALL_STATE(109)] = 3518,
  [SMALL_STATE(110)] = 3537,
  [SMALL_STATE(111)] = 3556,
  [SMALL_STATE(112)] = 3575,
  [SMALL_STATE(113)] = 3594,
  [SMALL_STATE(114)] = 3613,
  [SMALL_STATE(115)] = 3632,
  [SMALL_STATE(116)] = 3651,
  [SMALL_STATE(117)] = 3669,
  [SMALL_STATE(118)] = 3687,
  [SMALL_STATE(119)] = 3709,
  [SMALL_STATE(120)] = 3727,
  [SMALL_STATE(121)] = 3745,
  [SMALL_STATE(122)] = 3763,
  [SMALL_STATE(123)] = 3781,
  [SMALL_STATE(124)] = 3800,
  [SMALL_STATE(125)] = 3817,
  [SMALL_STATE(126)] = 3834,
  [SMALL_STATE(127)] = 3851,
  [SMALL_STATE(128)] = 3868,
  [SMALL_STATE(129)] = 3885,
  [SMALL_STATE(130)] = 3902,
  [SMALL_STATE(131)] = 3919,
  [SMALL_STATE(132)] = 3936,
  [SMALL_STATE(133)] = 3953,
  [SMALL_STATE(134)] = 3970,
  [SMALL_STATE(135)] = 3987,
  [SMALL_STATE(136)] = 4004,
  [SMALL_STATE(137)] = 4021,
  [SMALL_STATE(138)] = 4040,
  [SMALL_STATE(139)] = 4057,
  [SMALL_STATE(140)] = 4074,
  [SMALL_STATE(141)] = 4091,
  [SMALL_STATE(142)] = 4108,
  [SMALL_STATE(143)] = 4125,
  [SMALL_STATE(144)] = 4142,
  [SMALL_STATE(145)] = 4158,
  [SMALL_STATE(146)] = 4174,
  [SMALL_STATE(147)] = 4190,
  [SMALL_STATE(148)] = 4206,
  [SMALL_STATE(149)] = 4222,
  [SMALL_STATE(150)] = 4244,
  [SMALL_STATE(151)] = 4266,
  [SMALL_STATE(152)] = 4288,
  [SMALL_STATE(153)] = 4304,
  [SMALL_STATE(154)] = 4326,
  [SMALL_STATE(155)] = 4342,
  [SMALL_STATE(156)] = 4364,
  [SMALL_STATE(157)] = 4380,
  [SMALL_STATE(158)] = 4396,
  [SMALL_STATE(159)] = 4412,
  [SMALL_STATE(160)] = 4434,
  [SMALL_STATE(161)] = 4450,
  [SMALL_STATE(162)] = 4466,
  [SMALL_STATE(163)] = 4482,
  [SMALL_STATE(164)] = 4498,
  [SMALL_STATE(165)] = 4514,
  [SMALL_STATE(166)] = 4536,
  [SMALL_STATE(167)] = 4548,
  [SMALL_STATE(168)] = 4564,
  [SMALL_STATE(169)] = 4578,
  [SMALL_STATE(170)] = 4594,
  [SMALL_STATE(171)] = 4608,
  [SMALL_STATE(172)] = 4621,
  [SMALL_STATE(173)] = 4634,
  [SMALL_STATE(174)] = 4647,
  [SMALL_STATE(175)] = 4660,
  [SMALL_STATE(176)] = 4671,
  [SMALL_STATE(177)] = 4684,
  [SMALL_STATE(178)] = 4697,
  [SMALL_STATE(179)] = 4710,
  [SMALL_STATE(180)] = 4721,
  [SMALL_STATE(181)] = 4734,
  [SMALL_STATE(182)] = 4747,
  [SMALL_STATE(183)] = 4760,
  [SMALL_STATE(184)] = 4773,
  [SMALL_STATE(185)] = 4786,
  [SMALL_STATE(186)] = 4799,
  [SMALL_STATE(187)] = 4812,
  [SMALL_STATE(188)] = 4825,
  [SMALL_STATE(189)] = 4838,
  [SMALL_STATE(190)] = 4851,
  [SMALL_STATE(191)] = 4864,
  [SMALL_STATE(192)] = 4877,
  [SMALL_STATE(193)] = 4887,
  [SMALL_STATE(194)] = 4897,
  [SMALL_STATE(195)] = 4907,
  [SMALL_STATE(196)] = 4917,
  [SMALL_STATE(197)] = 4927,
  [SMALL_STATE(198)] = 4937,
  [SMALL_STATE(199)] = 4947,
  [SMALL_STATE(200)] = 4957,
  [SMALL_STATE(201)] = 4967,
  [SMALL_STATE(202)] = 4977,
  [SMALL_STATE(203)] = 4987,
  [SMALL_STATE(204)] = 4997,
  [SMALL_STATE(205)] = 5007,
  [SMALL_STATE(206)] = 5017,
  [SMALL_STATE(207)] = 5027,
  [SMALL_STATE(208)] = 5037,
  [SMALL_STATE(209)] = 5047,
  [SMALL_STATE(210)] = 5057,
  [SMALL_STATE(211)] = 5067,
  [SMALL_STATE(212)] = 5077,
  [SMALL_STATE(213)] = 5087,
  [SMALL_STATE(214)] = 5097,
  [SMALL_STATE(215)] = 5107,
  [SMALL_STATE(216)] = 5117,
  [SMALL_STATE(217)] = 5127,
  [SMALL_STATE(218)] = 5137,
  [SMALL_STATE(219)] = 5147,
  [SMALL_STATE(220)] = 5157,
  [SMALL_STATE(221)] = 5167,
  [SMALL_STATE(222)] = 5177,
  [SMALL_STATE(223)] = 5187,
  [SMALL_STATE(224)] = 5197,
  [SMALL_STATE(225)] = 5207,
  [SMALL_STATE(226)] = 5217,
  [SMALL_STATE(227)] = 5227,
  [SMALL_STATE(228)] = 5237,
  [SMALL_STATE(229)] = 5247,
  [SMALL_STATE(230)] = 5257,
  [SMALL_STATE(231)] = 5264,
  [SMALL_STATE(232)] = 5271,
  [SMALL_STATE(233)] = 5278,
  [SMALL_STATE(234)] = 5285,
  [SMALL_STATE(235)] = 5292,
  [SMALL_STATE(236)] = 5299,
  [SMALL_STATE(237)] = 5306,
  [SMALL_STATE(238)] = 5313,
  [SMALL_STATE(239)] = 5320,
  [SMALL_STATE(240)] = 5327,
  [SMALL_STATE(241)] = 5334,
  [SMALL_STATE(242)] = 5341,
  [SMALL_STATE(243)] = 5348,
  [SMALL_STATE(244)] = 5355,
  [SMALL_STATE(245)] = 5362,
  [SMALL_STATE(246)] = 5369,
  [SMALL_STATE(247)] = 5376,
  [SMALL_STATE(248)] = 5383,
  [SMALL_STATE(249)] = 5390,
  [SMALL_STATE(250)] = 5397,
  [SMALL_STATE(251)] = 5404,
  [SMALL_STATE(252)] = 5411,
  [SMALL_STATE(253)] = 5418,
  [SMALL_STATE(254)] = 5425,
  [SMALL_STATE(255)] = 5432,
  [SMALL_STATE(256)] = 5439,
  [SMALL_STATE(257)] = 5446,
  [SMALL_STATE(258)] = 5453,
  [SMALL_STATE(259)] = 5460,
  [SMALL_STATE(260)] = 5467,
  [SMALL_STATE(261)] = 5474,
  [SMALL_STATE(262)] = 5481,
  [SMALL_STATE(263)] = 5488,
  [SMALL_STATE(264)] = 5495,
  [SMALL_STATE(265)] = 5502,
  [SMALL_STATE(266)] = 5509,
  [SMALL_STATE(267)] = 5516,
  [SMALL_STATE(268)] = 5523,
  [SMALL_STATE(269)] = 5530,
  [SMALL_STATE(270)] = 5537,
  [SMALL_STATE(271)] = 5544,
  [SMALL_STATE(272)] = 5551,
  [SMALL_STATE(273)] = 5558,
  [SMALL_STATE(274)] = 5565,
  [SMALL_STATE(275)] = 5572,
  [SMALL_STATE(276)] = 5579,
  [SMALL_STATE(277)] = 5586,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(186),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(237),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(251),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_section_repeat1, 2), SHIFT_REPEAT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_section, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__empty_line, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__empty_line, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting_statement, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(151),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(174),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(47),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(47),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(199),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(197),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition_body, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(190),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(190),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition_body, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition_body, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(79),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(269),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_case_or_task_definition_body_repeat1, 2), SHIFT_REPEAT(44),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(184),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(77),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(268),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_definition_body_repeat1, 2), SHIFT_REPEAT(49),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(155),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(174),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(51),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(51),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(199),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(197),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(151),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(174),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(54),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(54),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(199),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(197),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(153),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(181),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(57),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(57),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(205),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2), SHIFT_REPEAT(200),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(215),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(72),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(253),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_keywords_section_repeat1, 2), SHIFT_REPEAT(58),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keywords_section, 6),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(189),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(189),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(246),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(167),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(258),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_cases_or_tasks_section_repeat1, 2), SHIFT_REPEAT(75),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_cases_or_tasks_section, 6),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(198),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(207),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(208),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(211),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(240),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(251),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_section_repeat1, 2), SHIFT_REPEAT(94),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables_section, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_setting, 4),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_setting, 4),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 6),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_setting, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_setting, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_invocation, 2),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_invocation, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 3, .production_id = 3),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 3, .production_id = 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_definition, 4, .production_id = 4),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword_definition, 4, .production_id = 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case_or_task_definition, 4),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case_or_task_definition, 4),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 6),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 6),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 5),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 5),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 5),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 5),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 5),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 4),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 4),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 4),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 4),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 4),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_variable, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_variable, 3),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_variable, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_variable, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_variable, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_variable, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar_variable, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_variable, 3),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1), SHIFT_REPEAT(143),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 2, .production_id = 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 2, .production_id = 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_keyword_repeat1, 1, .production_id = 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_keyword_repeat1, 1, .production_id = 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(35),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [825] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
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
