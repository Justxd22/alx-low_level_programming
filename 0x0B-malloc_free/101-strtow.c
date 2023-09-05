#include "main.h"
#include <stdlib.h>

/**
 * strtow - string to array
 * @str: string
 * Return: NULL/Pointer
 */
char **strtow(char *str)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
