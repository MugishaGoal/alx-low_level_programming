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
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (0);
	}
	else
	{
	while (i * i <= n)
	{
	if (i * i == n)
	{
	return (i);
	}
	i++;
	}
	return (-1);
	}
}
