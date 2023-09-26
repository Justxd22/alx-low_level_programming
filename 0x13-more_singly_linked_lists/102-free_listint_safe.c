#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - free linked list in a safe way
 *
 * @h: pointer to the head of the linked list
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *node = *h, *next = NULL;

	while (node != NULL)
	{
		if (node->next >= node)
		{
			next = node->next;
			*h = NULL;
			free(node);
			break;
		}
		len++;
		next = node;
		node = node->next;
		free(next);
	}

	*h = NULL;
	return (len);
}
