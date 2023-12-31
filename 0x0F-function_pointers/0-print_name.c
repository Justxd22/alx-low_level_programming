#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name
 * @f: function
 * NO Return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	(*f)(name);
}
