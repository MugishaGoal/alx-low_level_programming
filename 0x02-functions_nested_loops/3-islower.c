#include "main.h"

/**
 * _lowercase - checks for lowercase character
 * @c: the character to check
 * Return: 1 for lowercase character otherwise 0
 *
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else 
	{
	return (0);
	}
}
