#include "shell.h"

/**
 * _prompt - A function that displays a prompt
 * Return: Void
 */

void _prompt(void)
{
	write(STDOUT_FILENO, "@> ", 3);
}
