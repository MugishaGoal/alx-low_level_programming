#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: input value
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept
 *
 */

char *_strpbrk(char *s, char *accept)

{
	for (; *s != '\0'; ++s)
	{
	for (char *p = accept; *p != '\0'; ++p)
	{
	if (*s == *p)
	{
	return (s);
	}
	}
	}
	return (NULL);
}
