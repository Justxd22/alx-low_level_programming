#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: dlistint_t head
 * @n: node new int
 * Return: number of nodes
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;


	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Error: Can't malloc\n");
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
