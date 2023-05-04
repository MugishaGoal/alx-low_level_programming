#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * get_endianness - it checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	uint16_t x = 1;
	char *a = (char *)&x;

	if (*a)
		return (1);
	else
		return (0);
}
