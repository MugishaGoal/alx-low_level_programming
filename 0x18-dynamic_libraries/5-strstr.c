#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @needle: input substring
 * @haystack: input substring
 *
 * Return: a pointer to the beginning of the located substring,
 * otherwise NULL
 *
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
