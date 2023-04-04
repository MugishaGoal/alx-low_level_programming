#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: a pointer to the header of a function
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
	h = h->next;
	c++;
	}
	return (c);
}
