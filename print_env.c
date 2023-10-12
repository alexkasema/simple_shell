#include "shell.h"

/**
 * _print_env - A function prints out the environment of shell program
 * @env: pointer to environment variable
 * Return: void
 */

void _print_env(char **env)
{
	size_t i = 0;
	size_t len = 0;

	while (env[i])
	{
		len = _strlen(env[i]);
		write(STDOUT_FILENO, env[i], len);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

