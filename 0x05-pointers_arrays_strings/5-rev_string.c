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
        int i;

        if (strlen(s) != 0)
        {
        for (i = strlen(s) - 1; i >= 0; i--)
        {
                strcat(ss, s[i]);
        }
	s = ss
        }

}
