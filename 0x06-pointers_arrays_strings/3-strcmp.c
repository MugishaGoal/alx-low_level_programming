#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to be compared
 * Return: Integer greater than, equal to or less than 0
 * according to the order of strings
 *
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
