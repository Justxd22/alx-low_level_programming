#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - del node head of a linked list
 * @head: the head node in a list
 * Return: address of the new element
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *t;

	if (*head == NULL)
		return (0);

	t = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(t);
	return (n);
}
