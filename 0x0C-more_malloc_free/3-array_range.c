#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: from
 * @max: to
 * Return: NULL/pointer
 */
int *array_range(int min, int max)
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
