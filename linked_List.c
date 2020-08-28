#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add node at the beginning of the list
 * @head: head of the list
 * @n: assigned value
 * Return: head of the list
 */
list_t *add_node(list_t **head, void *v)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->value = v;
	node->next = *head;
	*head = node;

	return (node);
}

/**
 * free_listint2 - free linked list
 * @head: head of the list
 */
void free_list(list_t **head)
{
	list_t *next;

	if (head)
	{
		while (*head)
		{
			next = (*head)->next;

			if ((*head)->value)
				free((*head)->value);
			free(*head);

			*head = next;
		}
		*head = NULL;
	}
}
