#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes = 0;

	while (*h != NULL)
	{
		nodes++;
		if ((*h)->next >= *h)
		{
			free(*h);
			*h = NULL;
			break;
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	return (nodes);
}
