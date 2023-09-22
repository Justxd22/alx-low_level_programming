#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - add new node to a linked list at the end
 * @head: the head node in a list
 * @str: str of the new node
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *n, *l;
	char *ss;

	n = malloc(sizeof(list_t));
	ss = strdup(str);
	if (n == NULL || ss == NULL)
	{
		if (n != NULL)
			free(n);
		return (NULL);
	}

	for (len = 0; ss[len]; len++)
		;

	n->len = len;
	n->str = ss;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (*head);
	}
	l = *head;
	while (l->next != NULL)
		l = l->next;
	l->next = n;
	return (n);
}
