#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  prints strings
 * @separator: string to be printed between args
 * @n: number of strings passed
 * no Return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int x;

	va_start(ar, n);
	for (x = 0; x < n - 1; x++)
	{
		if (va_arg(ar, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(ar, char *));
		if (separator)
			printf("%s", separator);
	}
	printf("%s\n", va_arg(ar, char *));
	va_end(ar);
}
