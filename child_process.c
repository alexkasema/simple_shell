#include "shell.h"

/**
 * _child_process - A function that creates a child process
 * @token: pointer to input commands
 * @name: pointer to name of the program
 * @env: pointer to environment variables
 * Return: Void
 */

void _child_process(char **token, char *name, char **env)
{
	pid_t pid;
	int status = 0;
	int wait_error = 0;

	pid = fork();
	if (pid < 0)
	{
		perror("Error: ");
		_free_cmds_exit(token);
	}
	else if (pid == 0)
	{
		_execute(token, name, env);
		_free_cmds(token);
	}
	else
	{
		wait_error = waitpid(pid, &status, 0);
		if (wait_error < 0)
			_free_cmds_exit(token);

		_free_cmds(token);
	}
}
