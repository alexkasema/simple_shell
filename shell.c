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
	char *buffer = NULL;
	ssize_t no_bytes_read = 0;
	size_t buffer_size = 0;

	while (1)
	{
		_prompt();
	}

}
