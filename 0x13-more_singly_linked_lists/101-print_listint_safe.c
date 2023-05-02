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
	const listint_t *current = head, *previous = NULL;
	size_t nodes = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;
		if (current < previous)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		previous = current;
		current = current->next;
	}
	return (nodes);
}
