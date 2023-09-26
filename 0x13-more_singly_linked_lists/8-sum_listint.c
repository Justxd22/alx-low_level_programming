#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - sum linked lists
 * @head: the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
