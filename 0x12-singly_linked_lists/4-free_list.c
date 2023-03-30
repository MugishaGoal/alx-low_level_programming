#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: a pointer to the node of the list
 */
void free_list(list_t *head)
{
	list_t *previous = head;
	list_t *next;

	while (previous != NULL)
	{
	next = previous->next;
	free(previous->str);
	free(previous);
	previous = next;
	}
}
