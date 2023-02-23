#include "main.h"

#include <stdlib.h>

#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: the starting number
 *
 * Return: Void
 *
 */

void print_to_98(int n)

{
	int i;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
	printf("%d, ", i);
	}
	}
	else
	{
	for (i = n; i > 98; i--)
	{
	printf("%d, ", i);
	}
	}
	_putchar("98\n");
}
