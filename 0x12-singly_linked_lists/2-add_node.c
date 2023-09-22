#include "lists.h"
#include <stdio.h>

/**
 * add_node - add new node to a linked list
 * @head: the head node in a list
 * @str: str of the new node
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0, slen = 0;
	list_t *n;
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
	n->next = *head;
	*head = n;

	return (n);
}
