#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of a string
 * @s: input string
 * @accept: characters to match
 *
 * Return: Always 0 (Success)
 *
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int n = 0;
	int j;

	while (*s)
	{
	for (j = 0; accept[j]; j++)
	{
	if (*s == accept[j])
	{
	n++;
	break;
	}
	else if (accept[j + 1] == '\0')
	return (n);
	}
	s++;
	}
	return (n);
}
