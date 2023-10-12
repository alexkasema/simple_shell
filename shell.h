#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

void _prompt(void);
void _eof(char *buffer);

char **_get_token(char *buffer, const char *delim);
void _child_process(char **token, char *name, char **env);
void _execute(char **token, char *name, char **env);
char **_getpath(char **env);

void _free_cmds(char **cmds);
void _free_cmds_exit(char **token);


unsigned int _strlen(char *str);
char *_strcpy(char *dest, char *src);
int _strcmp(char *str1, char *str2);
char *_strcat(char *dest, char *src);


#endif

