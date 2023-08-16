#include "main.h"

/**
 * print_last_digit - main function
 *
 * @n: number to print last
 *
 * Return: last digit
 *
 */
int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
