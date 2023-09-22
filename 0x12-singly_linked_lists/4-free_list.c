#include "lists.h"
#include <stdio.h>

/**
 * free_list - free a whole linked list
 * @head: the head node in a list
 * No Return
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
