#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void _prompt(void);
void _eof(char *buffer);

char **_get_token(char *buffer, const char *delim);

void _free_cmds(char **cmds);

unsigned int _strlen(char *str);
char *_strcpy(char *dest, char *src);


#endif

