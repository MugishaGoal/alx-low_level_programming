#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatentes two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to concatenated strings, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i])
	{
	i++;
	}
	while (s2[j])
	{
	j++;
	}
	l = i + j;
	s = malloc((sizeof(char) * l) + 1);
	if (s == NULL)
	{
	return (NULL);
	}
	k = 0;
	while (k < l)
	{
	if (k < l)
	{
	s[k] = s1[k];
	}
	else
	{
	s[k] = s2[k - i];
	}
	k++;
	}
	s[k] = '\0';
	return (s);
}
