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
	int i;

	for (i = 0; i < strlen(s) / 2; i++)
	{
		ss = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = ss;
	}
}
