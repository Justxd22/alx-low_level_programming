#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: dlistint_t
 *
 * no Return
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head->next != NULL)
	{
		next = head;
		free(head);
		head = next;
	}
}
