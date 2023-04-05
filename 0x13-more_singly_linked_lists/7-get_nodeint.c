#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head : a pointer to a head
 * @index: the index of the node, starting at 0
 * Return: the nth node of a list, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = head;

	for (i = 0; i < index; i++)
	if (ptr == NULL)
	return (NULL);
	ptr = ptr->next;
	return (ptr);
}
