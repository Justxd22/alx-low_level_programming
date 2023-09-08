#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory
 * @b: int how much mem
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *cc = malloc(b);

	if (cc == NULL)
		exit(98);

	return (cc);
}
