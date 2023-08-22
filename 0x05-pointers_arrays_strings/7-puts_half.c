#include "main.h"
#include <string.h>

/**
 * puts_half - prints half string
 * @str: str to print
 * No Return
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);


	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (i = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
