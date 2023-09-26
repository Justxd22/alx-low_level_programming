#include "lists.h"
#include <stdio.h>

/**
 * listint_len - mesure linked lists
 * @h: the list
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
