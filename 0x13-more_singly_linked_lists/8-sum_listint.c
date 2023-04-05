#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a list
 * @head: a pointer to the head node
 *
 * Retun: the sum of all the data (n), or 0 if 6he list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	sum += head->n;
	head = head->next;
	return (sum);
}
