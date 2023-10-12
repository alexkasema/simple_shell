#include "shell.h"

/**
 * _execute - A function that executes the program in child process
 * @token: Pointer to commands
 * @name: Pointer to first argument
 * @env: Pointer to environment variables
 * Return: void
 */

void _execute(char **token, char *name, char **env)
{
	char **path = NULL;
	char *absolute_path = NULL;
	struct stat buffer;
	unsigned int i = 0;

	if (_strcmp(token[0], "env") != 0)
		_print_env(env);

	if (stat(token[0], &buffer) == 0)
	{
		if (execve(token[0], token, env) == -1)
		{
			perror(name);
			_free_cmds_exit(token);
		}
	}
	else
	{
		path = _getpath(env);
		while (path[i])
		{
			absolute_path = _strcat(path[i], token[0]);
			i++;

			if (stat(absolute_path, &buffer) == 0)
			{
				if (execve(absolute_path, token, env) < 0)
				{
					perror(name);
					_free_cmds(path);
					_free_cmds_exit(token);
				}
				return;
			}
		}

		perror(name);
		_free_cmds_exit(path);
	}
}
