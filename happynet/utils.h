#ifndef _H_UTILS
#define _H_UTILS

#include <windows.h>

#define MAX_COMMAND_LINE_LEN 1024*8

void log_event(WCHAR* format, ...);
BOOL is_valid_ascii_string(WCHAR *line);
UINT WinExecW(WCHAR* command_line, UINT command_show);
BOOL strip_no_ascii_string(WCHAR *line);
int get_install_dir_path(WCHAR* exe_path, DWORD buf_len);
int get_command_line_edge(WCHAR* exe_path, WCHAR* command_line, DWORD buf_len);
int get_params_edge(WCHAR* edge_path, WCHAR* params_line, DWORD buf_len);

#endif