#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character should be print
 */

void print_line(int n)

{

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int x;

	for (x = 1; x <= n; n++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
