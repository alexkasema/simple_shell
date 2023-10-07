#include "shell.h"

/**
 * _get_token - A function that tokenizes the input buffer
 * @buffer: Pointer to input buffer
 * @delim: The separator to check for
 * Return: Pointer to created token(s)
 */

char **_get_token(char *buffer, const char *delim)
{
	char *token = NULL, **cmds = NULL;
	size_t buffer_size = 0;
	int i = 0;

	if (buffer == NULL)
		return (NULL);

	buffer_size = _strlen(buffer);
	cmds = malloc(sizeof(char *) * (buffer_size + 1));
	if (cmds == NULL)
	{
		perror("Error allocating memory");
		free(buffer);
		_free_cmds(cmds);
		exit(EXIT_FAILURE);
	}

	token = strtok(buffer, delim);
	while (token)
	{
		cmds[i] = malloc(_strlen(token) + 1);
		if (cmds[i] == NULL)
		{
			perror("Error allocating memory to token");
			_free_cmds(cmds);
			return (NULL);
		}

		_strcpy(cmds[i], token);
		token = strtok(NULL, delim);
		i++;
	}

	cmds[i] = NULL;

	return (cmds);
}
