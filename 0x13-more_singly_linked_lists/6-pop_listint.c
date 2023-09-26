#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - add new node to a linked list
 * @head: the head node in a list
 * Return: address of the new element
 */
int pop_listint(listint_t **head)
{
	int n;

	if (head == NULL)
		return (0);

	n = (*head)->n;
	*head = (*head)->next;

	return (n);
}
