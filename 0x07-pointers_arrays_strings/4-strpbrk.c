#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: character to find
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	if (s[x] == c)
	{
		return (s + x);
	}
	return (0);
}
