#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: array size
 * @cmp: function
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if ((*cmp)(array[x]))
			return (x);
	}
	return (-1);
}
