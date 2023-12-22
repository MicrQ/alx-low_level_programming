#include "hash_tables.h"

/**
 * _free - used to free a linked list
 * @h: head ptr
 */

void _free(hash_node_t *h)
{
	hash_node_t *tmp;

	while (h)
	{
		tmp = h->next;
		free(h->key);
		free(h->value);
		free(h);
		h = tmp;
	}
}

/**
 * hash_table_delete - frees a hash table
 * @ht: the table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
		_free(ht->array[i]);
	free(ht->array);
	free(ht);
}
