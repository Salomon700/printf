#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @str: string pointer
 *
 * Return: 1
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlen_const - strlen function for constant char pointers
 *
 * @str: char pointer
 *
 * Return: i
 */
int _strlen_const(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
