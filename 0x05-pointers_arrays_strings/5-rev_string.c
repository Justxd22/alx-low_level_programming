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
        char j;
        int i;

        if (strlen(s) != 0)
        {
        for (i = strlen(s) - 1; i >= 0; i--)
        {
		j = s[i];
                strcat(ss, j);
        }
	*s = ss;
        }

}
