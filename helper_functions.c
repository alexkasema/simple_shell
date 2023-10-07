#include "shell.h"

/**
 * _strlen - A function that calculates the length of a string
 * @str: Input string
 * Return: Length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}

/**
 * _strcpy - A function that copies string to destination
 * @dest: Pointer to destination
 * @src: Pointer to source string
 * Return: Pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	char *tmp = dest;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
