#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * No Return
 */
void rev_string(char *s)
{
	char *ss;
	int i, j;
	int len = strlen(s);

	if (len != 0)
	{
		for (i = len - 1, j = 0; i >= 0; i--, j++)
		{
			ss[j] = s[i];
		}
		ss[j] = '\0';  // Null-terminate the reversed string
		strcpy(s, ss);  // Copy the reversed string back to s
	}
}
