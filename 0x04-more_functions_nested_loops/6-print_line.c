#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the length of the line
 *
 * Return: void
 *
 */

void print_line(int n)

{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}
	for (x = 0; x <= n; n++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
