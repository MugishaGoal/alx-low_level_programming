#include "search_algos.h"

/**
 * linear_search - Search for a value in an array
 *
 * @array: Pointer to the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to look for.
 *
 * Return:
 * - The index of the first occurrence of 'value' in 'array'.
 * - (-1) if 'value' is not present in 'array'.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		if (*(array + i) == value)
		{
			return (i);
		}
	}
	return (-1);
}
