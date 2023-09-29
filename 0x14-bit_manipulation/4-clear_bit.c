#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: int
 * @index: bit location
 * Return: 1/-1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
