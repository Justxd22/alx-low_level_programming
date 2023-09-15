#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  prints anything
 * @format: string for args format
 * no Return
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s, c;
	unsigned int x = 0;

	va_start(args, format);

	while (format && format[x] != '\0')
	{
		c = format[x];
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			printf("%s", ((s) ? s : "(nil)"));
			break;
		}

		if ((format[x + 1] != '\0') &&
		((c == 'c') || (c == 'i') || (c == 'f') || (c == 's')))
			printf(", ");
		x++;
	}
	va_end(args);
	printf("\n");
}
