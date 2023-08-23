#include "main.h"

/**
 * _strcmp - copy two strings with X n
 * @dest: string to compare
 * @src: string to compare
 * Return: dest
 */
char *_strcmp(char *dest, char *src)
{
	int j;

	while (dest[j] == src[j] && src[j] != '\0')
	{
		j++;
	}

	return (dest[j] - src[j]);
}
