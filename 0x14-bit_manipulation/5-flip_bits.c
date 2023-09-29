#include "main.h"

/**
 * flip_bits - number of bits you would need to
 * flip to get from one number to another
 * @n: int1
 * @m: int2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;

	unsigned int long s = n ^ m;

	while (s)
	{
		x += s & 1;
		s >>= 1;
	}
	return (x);
}
