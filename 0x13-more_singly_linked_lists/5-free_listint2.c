#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - free a whole linked list
 * @head: the head node in a list
 * No Return
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
