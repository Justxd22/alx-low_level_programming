#include "variadic_functions.h"
#include <stdio.h>

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
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ar, int));
		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
