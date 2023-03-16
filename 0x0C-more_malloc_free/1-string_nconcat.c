#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: input value
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1_len, s2_len, i;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
	n = s2_len;
	}
	concat = malloc(s1_len = n = 1);
	if (concat == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
	concat[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
	concat[s1_len + i] = s2[i];
	concat[s1_len + n] = '\0';
	}
	return (concat);
}
