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
	char *s;

	va_start(ar, n);
	for (x = 0; x < n - 1; x++)
	{
		s = va_arg(ar, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator)
			printf("%s", separator);
	}
	s = va_arg(ar, char *);
	printf("%s\n", ((s) ? s : "(nil)"));
	va_end(ar);
}
