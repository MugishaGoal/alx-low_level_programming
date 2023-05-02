#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *temp;
	size_t nodes = 0;

	current = head;
	while (current != NULL)
	{
		nodes++;
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;
		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (nodes);
}
