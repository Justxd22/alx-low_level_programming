#include "main.h"


/**
 * print_square - print square
 * @s: size of square
 * No Return
**/
void print_square(int s)
{
	int i;
	int j;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < s; i++)
		{
			for (j = 0; j < s; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
