#include "hash_tables.h"


/**
 * hash_table_set - return index of a key
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: address of the new element/ NULL
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *check, *n;

	if (!strlen(key) || !ht || !ht->size)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	check = ht->array[index];
	while (check)
	{
		if (!strcmp(check->key, key))
		{
			free(check->value);
			check->value = strdup((char *)value);
			if (!check->value)
				return (0);
			return (1);
		}
		check = check->next;
	}
	n = malloc(sizeof(hash_node_t));
	if (!n)
		return (0);
	n->key = strdup((char *)key);
	if (!n->key)
	{
		free(n);
		return (0);
	}
	n->value = strdup((char *)value);
	if (!n->value)
	{
		free(n->key), free(n);
		return (0);
	}
	n->next = ht->array[index];
	ht->array[index] = n;
	return (1);
}
