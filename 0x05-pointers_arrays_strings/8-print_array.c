#include "main.h"

#include <stdio.h>

/*
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: Number of elements of the array to be printed
 *
 * This function takes an array of integers and the number of elements in the array,
 * and prints each element separated by a comma and a space
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
