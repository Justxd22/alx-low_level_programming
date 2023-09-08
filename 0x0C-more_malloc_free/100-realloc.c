#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @old_size: from
 * @new_size: to
 * Return: NULL/pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *a;
	int x, size = 0;

	if (min > max)
		return (NULL);

	size = max - min;
	a = malloc((size + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0; x <= max - min; x++)
	{
		a[x] = min + x;
	}
	return (a);
}
