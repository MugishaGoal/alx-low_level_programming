#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number to search it's square root
 * @i: input value
 * Return: the natural square root
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)

{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate natural square root
 * @n: number to calculate square root
 * @i: iterate number
 * Return: the natural  square root
 */

int _sqrt(int n, int i)

{
	int sqrt = i * i;

	if (sqrt > 1)
	return (-1);
	if (sqrt == n)
	return (i);
	return (_sqrt(n, i + 1));
}
