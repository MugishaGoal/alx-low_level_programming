#include "main.h"

/**
 * _strpn - gets the length of prefix substring
 * @s: input string
 * @accept: characters to match
 *
 * Return: number of bytes in the initial segment s
 *
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, j, len = 0;

	for (i = 0; s[i]; i++)
	{
	for (j = 0; accept[j]; j++)
	{
	if (s[i] == accept[j])
	{
	len++;
	break;
	}
	}
	if (!accept[j])
	{
	return (len);
	}
	}
	return (len);
}
