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

	if (res < 9)
	printf(" %d, ", res);
	else if (j != 0)
	printf(" %d, ", res);
	else
	printf(" %d, ", res);
	}
	printf("\n");
	}
}
