#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t
 * @head: dlistint_t
 *
 * Return: Sum
**/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
