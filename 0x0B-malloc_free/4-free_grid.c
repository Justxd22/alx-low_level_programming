#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free array of size x
 * @grid: array to free
 * @height: array height
 * NO Return
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
