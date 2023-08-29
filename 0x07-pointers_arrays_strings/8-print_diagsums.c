#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: array
 * @size: int size
 * No Return
 */
void print_diagsums(int *a, int size)
{
	int x, s1, s2;

	for (x = 0; x < size; x++)
	{
		s1 += a[(size * x) + x];
		s2 += a[(size - 1) + (x*(size - 1))];
	}
	printf("%d, %d", s1, s2);
}
