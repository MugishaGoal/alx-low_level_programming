#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 * Return: duplicate
 */

char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[length] != '\0')
	{
	length++;
	}
	duplicate = malloc(sizeof(char) * length + 1);
	if (duplicate == NULL)
	{
	return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
	duplicate[i] = str[i];
	}
	return (duplicate);
}
