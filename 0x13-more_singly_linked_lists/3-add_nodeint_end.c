#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add new node to a linked list at the end
 * @head: the head node in a list
 * @n: int of the new node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	size_t len = 0;
	listint_t *new, *l;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	l = *head;
	while (l->next != NULL)
		l = l->next;
	l->next = new;
	return (new);
}
