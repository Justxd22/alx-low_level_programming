#include "main.h"

/**
 * _strcat - append two strings
 * @dest: string to add to
 * @src: string to copy from
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int j, k;

	for (j = 0; dest[j] != '\0'; j++)
	{ /* get null byte index */
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[j + k] = src[k];
	}
	dest[j + k] = '\0';
	return (dest);
}
