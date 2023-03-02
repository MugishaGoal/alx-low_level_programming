#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: str
 */

char *leet(char *str)

{
	char *s = str;
	char leet_dict[256] = {0};
	int i, j;
	const char *letters = "aAeEoOtTlL";
	const char *codes = "4433007711";

	for (i = 0; letters[i] != '\0'; i++)
	{
	leet_dict[(int)letters[i]] = codes[i];
	}
	while (*s)
	{
	j = (int)*s;
	if (leet_dict != 0)
	*s = leet_dict[j];
	}
	s++;
	return (str);
}
