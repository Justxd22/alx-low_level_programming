#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer
 * @src: str for copy
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
