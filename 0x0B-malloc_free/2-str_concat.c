#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatentes two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to concatenated strings, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, length1 = 0, length2 = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[length1] != '\0')
	{
	length1++;
	}
	while (s2[length2] != '\0')
	{
	length2++;
	}
	concat = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concat == NULL)
	{
	return (NULL);
	}
	for  (i = 0; i <= length1; i++)
	{
	concat[i] = s1[i];
	}
	for (j = 0; j <= length2; j++)
	{
	concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
