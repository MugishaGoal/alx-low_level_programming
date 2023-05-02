#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - it finds the loop in a linked list
 * @head: a pointer to the head
 *
 * Return: The adress of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head, *other = head;

	while (one && other && other->next)
	{
		one = one->next;
		other = other->next->next;
		if (one == other)
		{
			one = head;
			while (one != other)
			{
				one = one->next;
				other = other->next;
			}
			return (one);
		}
	}
	return (NULL);
}
