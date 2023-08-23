#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array to reverse
 * @n: number of elements of the array
 * no Return
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[x];
		a[x] = a[(n - 1) - x];
		a[(n - 1) - x] = y;
	}
}
