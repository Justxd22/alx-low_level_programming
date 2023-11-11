#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint
 * @head: dlistint_t
 * @index: node index to get
 *
 * Return: node at index
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t len = 0;

	while (head != NULL)
	{
		if (len == index)
			return (head);
		len++;
		head = head->next;
	}
	return (NULL);
}
