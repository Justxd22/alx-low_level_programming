#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - del node from index
 * @head: the list
 * @index: int index
 * Return: node/NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len = 0;
	listint_t *tmp, *prev;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	tmp = *head;
	while (head != NULL)
	{
		if (index == len)
		{
			prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		prev = tmp;
		tmp = tmp->next;
		len++;
	}

	if (index == len)
	{
		prev->next = tmp->next;
		free(tmp);
		return (1);
	}

	return (0);
}
