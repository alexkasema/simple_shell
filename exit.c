#include "shell.h"

/**
 * _eof - a function that handles end of file processes
 * @buffer: pointer to input command
 * Return: Void
 */

void _eof(char *buffer)
{
	if (buffer)
	{
		free(buffer);
		buffer = NULL;
	}
	write(STDOUT_FILENO, "\n", 1);
	free(buffer);
	exit(EXIT_SUCCESS);
}

/**
 * _exit_shell - a function that exits out of the shell
 * @token: pointer to commands
 * Return: void
 */

void _exit_shell(char **token)
{
	if (token[1] == NULL)
	{
		_free_cmds(token);
		exit(EXIT_SUCCESS);
	}
}
