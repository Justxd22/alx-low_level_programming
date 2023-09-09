#include "main.h"
#include <stdlib.h>


/**
 * _memcpy - cp mem
 * @to: to
 * @from: from
 * @n: size
 * Return: res
 */
char *_memcpy(char *to, char *from, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		to[i] = from[i];
	return (to);
}


/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: from
 * @new_size: to
 * Return: NULL/pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr0;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr0 = malloc(new_size);
		if (ptr0 == 0)
			return (0);
		free(ptr);
		return (ptr0);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}

	ptr0 = malloc(new_size);
	if (ptr0 == 0)
		return (0);

	_memcpy(ptr0, ptr, old_size);
	free(ptr);
	return (ptr0);
}
