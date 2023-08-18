#include "main.h"


/**
 * print_most_numbers - print all numbers
 *
 * No Return
**/
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
			continue;
		_putchar(n);
	}
	_putchar('\n');
}
