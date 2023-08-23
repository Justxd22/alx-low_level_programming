#include "main.h"

/**
 * cap_string - uppercase every word
 * @string: string to uppercase every word
 * Return: result
 */
char *cap_string(char *string)
{
	int x, z;
	int skipp = 0;
	int index = -1;
	char skip[13] = {'\n', '\t', '.', ' ', ',', ';',
',', '!', '?', '(', ')', '{', '}'};

	for (x = 0; string[x] != '\0'; x++)
	{
		for (z = 0; z < 13; z++)
		{
			if (string[x] == skip[z])
			{
				skipp = 1;
			}
		}
		if (!skipp)
		{
			if (string[x] >= 'a' && string[x] <= 'z' && index == -1)
			{
				index = x;
				string[x] = string[x] - 32;
			}
			else if (string[x] >= 'A' && string[x] <= 'Z' && index == -1)
			{
				index = x;
			}
			else
			{
				index = 0;
			}
		}
		else if (skipp)
		{
			index = -1;
			skipp = 0;
		}
	}
	return (string);
}
