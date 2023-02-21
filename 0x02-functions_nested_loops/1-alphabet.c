#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabet followed by a new line
 *
 * Description: Prints the 26 lowercase letters of the alphabet
 *		in ascending order, followed by a newline character.
 *		Uses the _putchar function to print each character.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

}
