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
	int seen[1024] = {0};

	while (head != NULL)
	{
		if (seen[head->n] == 1)
			return (head);
		
		seen[head->n] = 1;
		head = head->next;
	}

	return (NULL);
}
