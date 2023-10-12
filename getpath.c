#include "shell.h"

/**
 * _getpath - A function that get the env path and tokenizes it.
 * @env: Pointer to environemnt variables
 *
 * Return: Pointer to absolute path
 */

char **_getpath(char **env)
{
	char *path_string = NULL;
	char **absolute_path = NULL;
	unsigned int i = 0;

	path_string = strtok(env[i], "=");
	while (env[i])
	{
		if (_strcmp(path_string, "PATH"))
		{
			path_string = strtok(NULL, "\n");
			absolute_path = _get_token(path_string, ":");
			return (absolute_path);
		}

		i++;
		path_string = strtok(env[i], "=");
	}

	return (NULL);
}
