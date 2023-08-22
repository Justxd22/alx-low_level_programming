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
	int j;

	i = strlen(s);
	for (j = -2; j < i; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
