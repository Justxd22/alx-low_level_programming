#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: dlistint_t list
 * @index: index to del node at
 *
 * Return: 1/-1
**/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len = 0;
	dlistint_t *temp = *head;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			temp->next->prev = NULL;
			temp = (*head)->next;
			free(*head);
			*head = temp;
			return (1);
		}
		if ((*head) != NULL)
			free(*head);
		(*head) = NULL;
		return (1);
	}

        while (temp != NULL)
	{
                if (len == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			
			return (1);
		}
		len++;
                temp = temp->next;
	}
	return (-1);
}
