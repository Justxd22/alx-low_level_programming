#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the array of the hash table
 * Return: newly created hash table / NULL
**/
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int x;
	shash_table_t *nTable;

	if (size > 0)
	{
		nTable = malloc(sizeof(shash_table_t));
		if (!nTable)
			return (NULL);
		nTable->size = size;
		nTable->array = malloc(sizeof(shash_node_t *) * size);
		nTable->shead = NULL;
		nTable->stail = NULL;
		if (!nTable->array)
		{
			free(nTable);
			return (NULL);
		}
		for (x = 0; x < size; x++)
			nTable->array[x] = NULL;
		return (nTable);
	}
	return (NULL);
}


/**
 * shash_table_set - return index of a key
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: address of the new element/ NULL
**/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *check, *n;
	unsigned long int index;

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
	n = malloc(sizeof(shash_node_t));
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
	n->snext = NULL;
	n->sprev = NULL;
	ht->array[index] = n;
	return (sortList(ht, n));
}


/**
 * sortList - get key val from ht
 * @ht: hash table
 * @new: shash node
 * Return: 0/1
**/
int sortList(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *s;

	if (!ht->shead)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	if (strcmp(new->key, ht->shead->key) < 0)
	{
		ht->shead->sprev = new;
		new->snext = ht->shead;
		ht->shead = new;
		return (1);
	}
	else
	{
		s = ht->shead->snext;
		while (s && strcmp(new->key, s->key) > 0)
			s = s->snext;
		if (!s)
		{
			new->sprev = ht->stail;
			ht->stail->snext = new;
			ht->stail = new;
			return (1);
		}
		new->sprev = s->sprev;
		s->sprev->snext = new;
		s->sprev = new;
		new->snext = s;
	}
	return (1);
}


/**
 * shash_table_get - get key val from ht
 * @ht: hash table
 * @key: key
 * Return: val
**/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *check;
	unsigned long int index;

	if (!strlen(key) || !ht || !ht->size)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	check = ht->array[index];

	while (check)
	{
		if (!strcmp(check->key, key))
			return (check->value);
		check = check->next;
	}
	return (NULL);
}


/**
 * shash_table_print - print ht
 * @ht: hash table
 * NO Return
**/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *phead;

	if (ht == NULL)
		return;
	phead = ht->shead;

	printf("{");
	while (phead)
	{
		printf("'%s': '%s'", phead->key, phead->value);
		if (ht->stail != phead)
			printf(", ");
		phead = phead->snext;
	}
	printf("}\n");
}



/**
 * shash_table_print_rev - print ht
 * @ht: hash table
 * NO Return
**/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *t;

	if (!ht)
		return;
	t = ht->stail;
	printf("{");
	while (t)
	{
		printf("'%s': '%s'", t->key, t->value);
		if (t != ht->shead)
			printf(", ");
		t = t->sprev;
	}
	printf("}\n");
}



/**
 * shash_table_delete - delete ht
 * @ht: hash table
 * NO Return
**/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *t, *f;
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
