#include "hash_tables.h"


/**
 * hash_table_get - get key val from ht
 * @ht: hash table
 * @key: key
 * Return: val
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *check;

	index = key_index((unsigned char *)key, ht->size);
	check = ht->array[index];

	while (check)
	{
		if (!strcmp(check->key, key))
			return (check->value);
		check = check->next;
	}
	return (NULL);
}
