#include "hash_tables.h"


/**
 * hash_table_delete - delete ht
 * @ht: hash table
 * NO Return
**/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *t, *f;
	unsigned int x;

	for (x = 0; x < ht->size; x++)
	{
		f = ht->array[x];
		while (f)
		{
			t = f->next;
			free(f->key);
			free(f->value);
			free(f);
			f = t;
		}
	}
	free(ht->array), free(ht);
}
