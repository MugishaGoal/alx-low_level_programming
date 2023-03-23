#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters
 * @n: the number of parameters passed to the function
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
