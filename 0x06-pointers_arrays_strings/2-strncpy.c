#include "main.h"

/**
 * _strncpy - copy two strings with X n
 * @dest: string to add to
 * @src: string to copy from
 * @n: n of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; (src[k] != '\0') && k < n; k++)
	{
		dest[k] = src[k];
	}
	for (; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
