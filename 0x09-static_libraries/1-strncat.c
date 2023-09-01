#include "main.h"

/**
 * _strncat - append two strings with X n
 * @dest: string to add to
 * @src: string to copy from
 * @n: n of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, k;

	for (j = 0; dest[j] != '\0'; j++)
	{ /* get null byte index */
	}
	for (k = 0; (src[k] != '\0') && k < n; k++)
	{
		dest[j + k] = src[k];
	}
	dest[j + k] = '\0';
	return (dest);
}
