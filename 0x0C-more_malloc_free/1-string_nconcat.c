#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to add
 * @s2: string to add x N of
 * @n: how much to copy from s2
 * Return: NULL/pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int x, size = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
	{
		size++;
	}


	a = malloc((size + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	size = 0;
	for (x = 0; s1[x]; x++)
	{
		a[size++] = s1[x];
	}
	for (x = 0; x < n && s2[x]; x++)
	{
		a[size++] = s2[x];
	}

	a[size] = '\0';
	return (a);
}
