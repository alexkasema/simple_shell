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
	if (isatty(STDIN_FILENO))
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
	int code = 0;

	if (token[1] == NULL)
	{
		_free_cmds(token);
		exit(EXIT_SUCCESS);
	}
	code = _atoi(token[1]);
	_free_cmds(token);
	exit(code);
}
