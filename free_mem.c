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
