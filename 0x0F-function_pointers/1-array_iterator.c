#include <stdio.h>

/**
 * array_iterator - executes function given as parameter on each element array.
 * @array: array
 * @size: array size
 * @action: function
 * NO Return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	for (x = 0; x < size; x++)
	{
		(*action)(array[x]);
	}
}
