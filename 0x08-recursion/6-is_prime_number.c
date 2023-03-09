#include "main.h"
#include <stdio.h>

/**
 * is_prime_number -  returns if the input integer is a prime number
 * @n: the number to be checked
 * @i: input value
 * Return: integer value
 */

int check_prime(int n, int i);

int is_prime_number(int n)

{
	if (n <= 1)
	{
	return (0);
	}
	return (check_prime(n, 2));
}

/**
 * check_prime - check if a number is prime
 * @n: the number to be checked
 * @i: input value
 *
 * Return: 1 for prime, otherwise 0
 */

int check_prime(int n, int i)

{
	if (n <= 1)
	return (0);
	if (n % i == 0 && i > 1)
	return (0);
	if ((n / i) < i)
	return (1);
	return (check_prime(n, i + 1));
}
