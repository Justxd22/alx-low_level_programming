#include "main.h"

/**
 * _memcpy - copys mem from src to dest for X n
 * @dest: address to be filled
 * @src: address to copy from
 * @n: for how much to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
