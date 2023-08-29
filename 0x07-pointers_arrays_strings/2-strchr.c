#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 * Return: c location as a pointer/ NULL if not
 */
char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] != "\0"; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return (NULL);
}
