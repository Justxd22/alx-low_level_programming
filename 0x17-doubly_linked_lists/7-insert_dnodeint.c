#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t list
 * @idx: index to put node at
 * @n: int for new node
 *
 * Return: address of the new node/NULL
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len = 0;
	dlistint_t *temp = *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n, new->next = NULL, new->prev = NULL;

	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		else
			return (NULL);
	}
	if (idx == 0)
	{
		new->next = *h, (*h)->prev = new, *h = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (len == idx)
		{
			new->next = temp->next, new->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		len++, temp = temp->next;
	}
	free(new);
	return (NULL);
}
