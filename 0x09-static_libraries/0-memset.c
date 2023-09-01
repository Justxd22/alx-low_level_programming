#include "main.h"

/**
 * _memset - fills mem with b for X n times at s
 * @s: address to be filled
 * @b: what to fill with
 * @n: for how much fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
