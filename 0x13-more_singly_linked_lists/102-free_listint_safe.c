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
			*h = NULL;
			break;
		}
		len++;
		next = node->next;
		free(node);
		node = next;
	}

	*h = NULL;
	return (len);
}
