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
	int l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		ss = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = ss;
	}
}
