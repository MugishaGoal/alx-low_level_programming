#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */

void times_table(void)

{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	res = i * j;
	printf(" %d, ", res);
	}
	printf("\n");
	}
}