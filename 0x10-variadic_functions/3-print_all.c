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
	const char *p;
	char c;
	char *s;

	va_start(args, format);
	p = format;

	while ((c = *p++) != '\0')
	{

		if (c != 'c' && c != 'i' && c != 'f' && c != 's')
			continue;

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
			if (s == NULL)
				printf("(nil)\t");
			else
				printf("%s\t", s);
			break;
		}

		if (*p != '\0')
			printf(", ");
	}
	va_end(args);

	printf("\n");
}
