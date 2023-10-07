#include "shell.h"

/**
 * main - Entry point of our shell
 * @ac: Argument count
 * @av: Argument vector
 * @env: Environment
 * Return: 0 (success)
 */

int main(int __attribute__((unused))ac, char **av, char **env)
{
	char *buffer = NULL, **token = NULL;
	char *delim = " \0";
	ssize_t no_bytes_read = 0;
	size_t buffer_size = 0;

	while (1)
	{
		_prompt();
		no_bytes_read = getline(&buffer, &buffer_size, stdin);

		if (no_bytes_read == EOF)
			_eof(buffer);
		else if (*buffer == '\n')
			free(buffer);
		else
		{
			buffer[_strlen(buffer) - 1] = '\0';
			token = _get_token(buffer, delim);
			free(buffer);
			_child_process(token, av[0], env);
		}
		fflush(stdin);
		buffer = NULL;
		buffer_size = 0;
	}
	if (no_bytes_read == -1)
		return (EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
