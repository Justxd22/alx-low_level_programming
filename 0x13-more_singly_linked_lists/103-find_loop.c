#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - find loop in a linked list
 *
 * @head: pointer to the head of the linked list
 * Return: loop address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head, *y = head;

	while (x && y && y->next)
	{
		x = x->next;
		y = y->next->next;
		if (x == y)
			return (x);
	}

	return (NULL);
}
