#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @c: the character to be used to find it's location
 * @s: string in which the character is located
 *
 * Return: a pointer to the first occurence of character, otherwise NULL
 *
 */

char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	if (*s == c)
	{
	return (s);
	}
	return (NULL);
}
