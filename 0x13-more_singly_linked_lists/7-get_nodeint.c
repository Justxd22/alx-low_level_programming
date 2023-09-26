#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - get node from index
 * @head: the list
 * @index: int index
 * Return: node/NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0;

	while (head != NULL)
	{
		if (index == len)
			return (head);
		head = head->next;
		len++;
	}

	return (NULL);
}
