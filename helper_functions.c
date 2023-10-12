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

/**
 * _strcmp - A function that compares two strings
 * @str1: Input string
 * @str2: Input string
 * Return: 1 (on success), else 0
 */

int _strcmp(char *str1, char *str2)
{
	unsigned int i = 0;

	while (str1[i])
	{
		if (str1[i] != str2[i])
			return (0);

		i++;
	}

	return (1);
}

/**
 * _strcat - A function that concatenates two strings together
 * @dest: Input string
 * @src: Input string
 *
 * Return: Pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	*dest++ = '/';

	while (*src)
		*dest++ = *src++;

	return (tmp);
}
