#include "lists.h"

/**
 * dlistint_len -  returns the number of elements
 * @h: dlistint_t
 *
 * Return: number of nodes
**/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
