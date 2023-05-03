#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @new_size: the new size, in bytes of the new memory block
 * @old_size: the size for the allocated space
 * @ptr: is a pointer
 * Return: pointer allocate  the new size, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *n_ptr;

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	if (ptr == NULL)
	{
	return (malloc(new_size));
	}
	if (new_size == old_size)
	{
	return (ptr);
	}
	n_ptr = malloc(new_size);
	if (n_ptr == NULL)
	{
	return (NULL);
	}
	if (new_size < old_size)
	{
	memcpy(n_ptr, ptr, new_size);
	}
	else
	{
	memcpy(n_ptr, ptr, old_size);
	}
	free(ptr);
	return (n_ptr);
}
