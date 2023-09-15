#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum args
 * @n: arg1
 * Return: 0/sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int sum, x;

	if (n == 0)
		return (0);

	va_start(ar, n);
	for (x = 0; x < n; x++)
		sum += va_arg(ar, int);
	va_end(ar);

	return (sum);
}
