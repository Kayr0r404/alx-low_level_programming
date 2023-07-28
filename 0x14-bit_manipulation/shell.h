#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdint.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

#define LINE_DELIM " \t\n"
#define SIZE 1024

extern char **environ;

/**
 * linkedLists_node - Linked List
 * @next:
 * @id:
 * @var:
 * @key:
*/
typedef struct linkedLists_node
{

	unsigned int id;
	const char *var;
    char *key;
    struct linkedLists_node *next;
} list_t;

void prompt(void);

void remove_space(char *str);
void remove_string(char *str);
int start_w(const char *str, const char *sub, int index);

void error(char *name, char *cmd_name);

int builtin(char *cmd);
int exec(int argc, char **argument, char **av);
int path_ls(char *cmd2, char **av);
int path_ls_bin(char *cmd, char **av);
void print_env(void);

/**/
bool substringStartsAt(const char* str, const char* substr, int index);
void remove_substring(char* str, const char* substr);
void _error(char *name, char *cmd_name);
int _strlen( const char *s);
char *_strcpy(char *dest, char *src);
int _strcmp(const char *str1, const char *str2);
int max(int a, int b);
char *_strchr(const char *str, int c);
char *_strcat(char *dest, char *src);
char *_strdup(const char *str);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_strtok(char *str, const char *delim);
ssize_t _getline(char **lineptr, size_t *n, int fd);
void _putchar(char c);
void _putstr(const char *str);
void _printf(const char *format, ...);
char *_getenv(list_t *head, const char *name);
char *findCommandInPath(const char* command);
char* extractCommandFromPath(const char* fullPath);
#endif
