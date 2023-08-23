#include "main.h"

/**
 * leet - string to leet
 * @ss: string to leet
 * Return: result
 */
char *leet(char *ss)
{
	char leet[5] = {'4', '3', '0', '7', '1'};
	char s[5]    = {'A', 'E', 'O', 'T', 'L'};
	int x, z;

	for (x = 0; ss[x] != '\0'; x++)
	{
		for (z = 0; z < 5; z++)
		{
			if (ss[x] == s[z] || (ss[x] - 32) == s[z])
			{
				ss[x] = leet[z];
			}
		}
	}
	return (ss);
}
