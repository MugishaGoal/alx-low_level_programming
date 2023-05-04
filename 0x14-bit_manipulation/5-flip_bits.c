#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: the number to turn
 * @m: the number to be turned i nto
 *
 * Return: the number of bits needed to turn n into m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_output = n ^ m;
	unsigned int count = 0;

	while (xor_output)
	{
		if (xor_output & 1)
			count++;
		xor_output >>= 1;
	}
	return (count);
}
