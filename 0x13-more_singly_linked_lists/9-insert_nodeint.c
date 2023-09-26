#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert node at index
 * @head: the list
 * @idx: int index
 * @n: node int to add
 * Return: node/NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = 0;
	listint_t *tmp, *new, *prev;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp != NULL)
	{
		if (idx == len)
		{
			new->next = tmp;
			prev->next = new;
			return (new);
		}
		prev = tmp;
		tmp = tmp->next;
		len++;
	}

	if (idx == len)
	{
		prev->next = new;
		new->next = NULL;
		return (new);
	}

	free(new);
	return (NULL);
}
