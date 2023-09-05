#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - alloc mem for a hxw array
 * @width: size of array to create
 * @height: size of array to create
 * Return: NULL/pointer
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(height * sizeof(a));
	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(width * sizeof(int));
		if (a[x] == NULL)
		{
			for (x = 0; x < height; x++)
				free(a[x]);
			free(a);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			a[x][y] = 0;
	}
	return (a);
}
