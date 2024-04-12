#include "search_algos.h"

/**
 * jump_list - find val in jump list.
 * @list: pointer to the head of the list
 * @size: size of list
 * @value: int value we are looking for
 * Return: index
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *l, *r;
	size_t j = sqrt(size), i;

	if (list == NULL || size == 0)
		return (NULL);

	l = list;
	r = l;
	while (1)
	{

		for (i = 0; i < j && r; i++)
		{
			if (r->next)
				r = r->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", r->index, r->n);
		if (r->index == size - 1 || r->n >= value)
			break;
		else if (r->n < value)
			l = r;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", l->index, r->index);
	while (1)
	{
		printf("Value checked at index [%ld] = [%d]\n", l->index, l->n);
		if (l->n == value)
			return (l);
		if (r == l)
			break;
		if (l->next)
			l = l->next;
	}

	return (NULL);
}
