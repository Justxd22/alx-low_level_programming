#include "main.h"
#include <stdlib.h>

/**
 * free_array - free array of size x 
 * @grif: array to free
 * @c: array height
 * NO Return
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
}
