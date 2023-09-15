#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * no Return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int x;

	va_start(ar, n);
	for (x = 0; x < n - 1; x++)
	{
		printf("%d", va_arg(ar, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ar, int));
	va_end(ar);
}
