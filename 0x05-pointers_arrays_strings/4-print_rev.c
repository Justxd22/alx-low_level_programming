#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print string in reverse
 * @s: char to print
 * No Return
 */
void print_rev(char *s)
{
	int i;

	if (strlen(s) != 0)
	{
	for (i = strlen(s); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	}
	printf("\n");
}
