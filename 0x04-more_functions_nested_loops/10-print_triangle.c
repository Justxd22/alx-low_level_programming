#include "main.h"


/**
 * print_triangle - print a triangle
 * @s: tri size
 * No Return
**/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (s <= 0)
	{
		_putchar('\n');
	} else
	{

		for (i = 1; i <= s; i++)
		{
			for (j = s - i ; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
