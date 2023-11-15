#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string to find
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(s + x) == *(accept + y))
			{
				break;
			}
		}
		if (*(accept + y) == '\0')
		{
			break;
		}
	}
	return (x);
}
