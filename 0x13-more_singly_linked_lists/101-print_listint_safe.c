#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints linked list in a safe way
 *
 * @head: pointer to the head of the linked list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0, i;
	const listint_t *node = head, *seen[1024] = {NULL};

	while (node != NULL)
	{
		for (i = 0; i < len; i++)
		{
			if (seen[i] == node)
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				return (-1);
			}
		}

		seen[len++] = node;
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;

	}

	return (len);
}
