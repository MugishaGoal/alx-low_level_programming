#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - that deletes the head node of a
 * @head: a pointer to the pointer to the head node
 *
 * Return: the head node’s data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
