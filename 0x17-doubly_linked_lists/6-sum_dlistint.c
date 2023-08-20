#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data value
 * @head: Pointer to the head of the linked list
 * Return: Sum of all data values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
