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
        unsigned int x, y, size = 0, size1 = 0;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (x = 0; s1[x] != '\0'; x++)
        {
                size++;
        }

        for (x = 0; s2[x] != '\0'; x++)
        {
                size1++;
        }

	if (!(size1 <= n))
		size1 = n;

        a = malloc((size + size1 + 1) * sizeof(char));
        if (a == NULL)
        {
                return (NULL);
        }

        for (x = 0; x < size; x++)
        {

                a[x] = s1[x];
        }
        for (y = 0; y < size1; y++)
        {
                a[y + x] = s2[y];
        }

	a[y + x] = '\0';
	return (a);
}
