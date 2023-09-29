#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted number/0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0, x;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '1' && b[x] != '0')
			return (0);

		r = r * 2 + (b[x] - '0');
	}

	return (r);
}
