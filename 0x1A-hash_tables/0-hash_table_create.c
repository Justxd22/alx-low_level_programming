#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size: size of the array of the hash table
 * Return: newly created hash table / NULL
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ntable;
	unsigned int x;

	if (size > 0)
	{
		ntable = malloc(sizeof(hash_table_t));
		if (!ntable)
			return (NULL);

		ntable->size = size;
		ntable->array = malloc(sizeof(hash_table_t *) * size);
		if (!ntable->array)
		{
			free(ntable);
			return (NULL);
		}

		for (x = 0; x < size; x++)
			ntable->array[x] = NULL;
		return (ntable);
	}
	return (NULL);
}
