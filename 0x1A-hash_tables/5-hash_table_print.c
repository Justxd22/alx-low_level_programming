#include "hash_tables.h"

/**
 * hash_table_print - print ht
 * @ht: hash table
 * NO Return
**/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int key, x;
	hash_node_t *p;

	if (ht == NULL)
		return;
	key = ht->size - 1;
	while (!ht->array[key] && key != 0)
		key--;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		p = ht->array[x];
		while (p)
		{
			printf("'%s': '%s'", p->key, p->value);
			if (x != key)
				printf(", ");
			p = p->next;
		}
	}
	printf("}\n");
}
