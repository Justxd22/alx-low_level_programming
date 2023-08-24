#include "main.h"

/**
 * print_number - print int using _putchar
 * @n: int to print
 * No Return
 */
void print_number(int n)
{
	if (n == 0)
	{
        	_putchar('0');
        	return;
	}

	int is_negative = 0;
	int reverse = 0;

	if (n < 0)
	{
        	is_negative = 1;
        	n = -n;
    	}

	while (n > 0)
	{
        	reverse = reverse * 10 + n % 10;
        	n /= 10;
	}

	if (is_negative)
       		_putchar('-');

	while (reverse > 0)
	{
		_putchar(reverse % 10 + '0');
		reverse /= 10;
	}

}
