#include "lists.h"
#include <stdio.h>


/**
 * sslength - mesure str len
 * @ss:
 * Return: length
*/
int sslength(char *ss)
{
	int len = 0;

	if (ss == NULL)
		return (0);
	while (*ss++)
	len++;

	return (len);
}


/**
 * print_list -  print linked lists
 * @h: the list
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", sslength(h->str), h->str);
		h = h->next;
		len++;
	}

	return (len);
}
