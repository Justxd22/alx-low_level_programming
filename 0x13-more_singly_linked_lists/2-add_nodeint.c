#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add new node to a linked list
 * @head: the head node in a list
 * @n: int of the new node
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	size_t len = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
