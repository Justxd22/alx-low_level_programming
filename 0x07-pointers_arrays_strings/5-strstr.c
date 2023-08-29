#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: string to find
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
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
