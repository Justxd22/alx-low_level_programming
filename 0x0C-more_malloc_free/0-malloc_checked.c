#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory
 * @b: int how much mem
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	return (malloc(b));
}
