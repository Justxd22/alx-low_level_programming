#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  print linked lists
 * @h: the list
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
