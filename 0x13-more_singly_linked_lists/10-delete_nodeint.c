#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: a pointer to the pointer to the head node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *current;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
	}
	prev = NULL;
	current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
	prev = current;
	current = current->next;
	}
	if (current == NULL)
	return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}
