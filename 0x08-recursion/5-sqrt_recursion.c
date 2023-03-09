#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: a number to search it's square root
 * Return: -1 if n does not have naturl square root
 */

int _sqrt_recursion(int n)

{
	int i;

	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (n);
	return (_sqrt_recursion(n, 1));
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1);
	return (find_sqrt(n, i + 1));
}
