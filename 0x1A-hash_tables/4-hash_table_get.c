#include "hash_tables.h"

/**
 * hash_table_get - a function that retrives a value.
 * @ht: hash table
 * @key: key to find
 * Return: NULL or the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *h;

	if (!key || !ht || !strcmp(key, ""))
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	h = (ht->array)[idx];

	while (h)
	{
		if (!strcmp(h->key, (char *)key))
			return (h->value);
		h = h->next;
	}
	return (NULL);
}
