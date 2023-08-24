#include "main.h"

/**
 * rot13 - encode string to rot13
 * @s: string to rot13
 * Return: result
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			char base = (s[i] >= 'a') ? 'a' : 'A';

			s[i] = base + ((s[i] - base + 13) % 26);
		}
	}


	return (s);
}
