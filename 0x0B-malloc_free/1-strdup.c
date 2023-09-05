#include "main.h"
#include <stdlib.h>

/**
 * _strdup - alloc new mem + fill it with str
 * @str: string to fill mem
 * Return: NULL/pointer
 */
char *_strdup(char *str)
{
	char *a;
	int x, size = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
	{
		size++;
	}
	size++;

	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		a[x] = str[x];
	}
	return (a);
}
