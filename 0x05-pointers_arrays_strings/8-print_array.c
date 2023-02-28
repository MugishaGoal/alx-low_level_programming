#include "main.h"

#include <stdio.h>

/*
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: Number of elements of the array to be printed
 * Description: This function prints the elements of the array @a, up to a
 * maximum of @n elements. Each element is separated by a comma, followed by
 * a space, and the entire array is enclosed in square brackets.
 *
 * Return: void
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
