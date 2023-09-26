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
	size_t len = 0, i;
	listint_t *node = *h, *seen[1024] = {NULL}, *next;

	while (node != NULL)
	{
		for (i = 0; i < len; i++)
		{
			if (seen[i] == node)
			{
				while (node != NULL)
				{
					next = node->next;
					free(node);
					node = next;
				}
				return (len);
			}
		}

		seen[len++] = node;
		next = node->next;
		free(node);
		node = next;

	}

	*h = NULL;
	return (len);
}
