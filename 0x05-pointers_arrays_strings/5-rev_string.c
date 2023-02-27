#include "main.h"

#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: a string to be printed
 * Return:void
 *
 */

void rev_string(char *s)

{
	int i, j;
	char temp;

	for (i = 0, j = 0; s[j] != '\0'; j++)
	{
	;
	}
	j--;
	while (i < j)
	{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	i++;
	j--;
	}
}
