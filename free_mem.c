#include "shell.h"

/**
 * _free_cmds - A function that frees memory allocated to commands
 * @cmds: Pointer to allocated memory
 * Return: void
 */

void _free_cmds(char **cmds)
{
	size_t i = 0;

	if (cmds == NULL)
		return;

	while (cmds[i])
	{
		free(cmds[i]);
		i++;
	}

	if (cmds[i] == NULL)
		free(cmds[i]);

	free(cmds);
}

/**
 * _free_cmds_exit - A function that frees memory and exits
 * @token: Pointer to allocated memory
 * Return: void
 */

void _free_cmds_exit(char **token)
{
	size_t i = 0;

	if (token ==  NULL)
		return;
	while (token[i])
	{
		free(token[i]);
		i++;
	}

	if (token[i] == NULL)
		free(token[i]);

	free(token);
	exit(EXIT_FAILURE);
}
