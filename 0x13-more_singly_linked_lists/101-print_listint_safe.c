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
	const listint_t *current, *prev;
	size_t c = 0;

	if (head == NULL)
		exit(98);
	current = head;
	prev = NULL;
	while (current != NULL)
	{
		c++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (current < prev)
			break;
		prev = current;
		current = current->next;
	}
	if (current != NULL)
		printf("-> [%p] %d\n", (void *)current, current->n);
	return (c);
}
