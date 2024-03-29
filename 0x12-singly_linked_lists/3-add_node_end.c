#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: a pointer to the pointer of the list
 * @str: a string to be added in a list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;
	unsigned int len = 0;

	if (str == NULL)
	return (NULL);
	while (str[len])
	len++;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	while (last_node->next)
	last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
