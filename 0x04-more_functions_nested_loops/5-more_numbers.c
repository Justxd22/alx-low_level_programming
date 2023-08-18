#include "main.h"


/**
 * more_numbers - print all numbers
 *
 * No Return
**/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; h <= 9; h++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
