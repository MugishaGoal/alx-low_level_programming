#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 * @size: ...
 * @array: ...
 * @cmp: ...
 *
 * Return: index of the first element for which cmp function
 * does not return 0, -1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
	while (i < size)
	{
	if (cmp(array[i]))
	return (i);
	i++;
	}
	}
	}
	return (-1);
}
