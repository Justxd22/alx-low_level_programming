#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size x init with c
 * @size: size of array to create
 * @c: init char
 * Return: NULL/pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int x;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		a[x] = c;
	}
	return (a);
}
