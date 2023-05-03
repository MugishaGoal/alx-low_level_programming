#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: a string to be checked
 *
 * Return: 1 if a string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int x;
	int len = strlen(s);

	for (x = 0; x < len / 2; x++)
	{
		if (s[x] != s[len - x - 1])
			return (0);
	}
	return (1);
}
