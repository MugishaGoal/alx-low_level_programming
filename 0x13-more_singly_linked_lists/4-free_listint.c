#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: a pointer to a head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
}
