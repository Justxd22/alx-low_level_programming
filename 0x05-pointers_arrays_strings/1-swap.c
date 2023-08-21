#include "main.h"

/**
 * swap_int - swap two vars
 * @a: int1
 * @b: int2
 * No Return
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
