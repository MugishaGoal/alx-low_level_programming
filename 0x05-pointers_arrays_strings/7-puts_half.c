#include "main.h"

#include <string.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 *
 * Description: If the length of the string is odd, it prints the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2.
 * Otherwise, it prints the last half of the string.
 */

void puts_half(char *str)

{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
	i++;
	}
	if (i % 2 == 1)
	{
	j = (i - 1) / 2;
	j += 1;
	}
	else
	{
	j = i / 2;
	}

	for (; j < i; j++)
	{
	_putchar(str[j]);
	}
	_putchar('\n');
}
