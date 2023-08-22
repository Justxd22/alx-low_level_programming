#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * No Return
 */
void rev_string(char *s)
{
	char ss;
	int i, j;

	if (strlen(s) != 0)
	{
		for (i = strlen(s) - 1; i >= 0; i--)
		{
			ss = s[i];
			s[i] = s[j];
			s[j] = ss;
			j++;
		}
	}
}
