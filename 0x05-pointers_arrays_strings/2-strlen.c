#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of a string
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	len++;
	return (len);
}
