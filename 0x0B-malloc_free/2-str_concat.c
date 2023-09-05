#include "main.h"
#include <stdlib.h>

/**
 * str_concat - alloc new mem + fill it with str + str
 * @s1: string to fill mem
 * @s2: string to fill mem
 * Return: NULL/pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int x, size = 0, size1 = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
	{
		size++;
	}
	size++;

	for (x = 0; s2[x] != '\0'; x++)
	{
		size1++;
	}
	size1++;

	a = malloc((size + size1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		a[x] = s1[x];
	}
	for (x = 0; x < size1; x++)
	{
		a[x] = s2[x];
	}

	return (a);
}
