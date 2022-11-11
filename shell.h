#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

#define BUFFER_SIZE 256
#define ENV_SEPARATOR "="
#define ESCAPE_SEPARATOR "#"
#define PATH_SEPARATOR ":"
#define COMMAND_SEPARATOR ":\n"
#define SEPARATORS " \n"
#define PROMPT "$ "

/* environment variables */
extern char **environ;
environment_t *_getenv(environment_t *prmEnviron, char *prmName);
/* handle built ins */
int checker(char **cmd, char *buf);
void prompt_user(void);
void handle_signal(int m);
int handle_builtin(char **command, char *line);
void exit_cmd(char **command, char *line);

/* string handlers */
int_strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(char *s);
char *_strchr(char *s, char c);

/* execution */
void execution(char *cp, char **cmd);
char *find_path(void);

/* buffers */
void free_buffers(char **buf);


