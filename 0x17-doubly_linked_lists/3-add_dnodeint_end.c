#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @h: dlistint_t
 *
 * Return: address of the new element/ NULL
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

        while (temp->next != NULL)
                temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
