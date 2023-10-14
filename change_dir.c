#include "shell.h"

/**
 * _change_dir - A function that changes the current working directory
 * @path: directory to go to
 *
 * Return: 0 (Success)
 */

int _change_dir(const char *path)
{
	char *buf = NULL;
	size_t buf_size = 1024;

	if (path == NULL)
		path = getcwd(buf, buf_size);
	if (chdir(path) == -1)
	{
		perror(path);
		return (-1);
	}

	return (0);
}
