#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverse a list
 * @head: the list
 * Return: node/NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next, *current = *head;


	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
