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
