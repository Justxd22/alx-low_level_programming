#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 * No Return
 */
void puts2(char *str)
{
	int l = strlen(str);

	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar("\n");
}
