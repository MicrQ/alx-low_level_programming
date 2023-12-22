#include "hash_tables.h"

/**
 * varify - verifies if a key already exists
 * @arr: ptr
 * @key: key to check
 * Return: 0 if not found, 1 if found
 */
int verify(hash_node_t *arr, const char *key)
{
	while (arr)
	{
		if (!strcmp(arr->key, key))
			return (1);
		arr = arr->next;
	}
	return (0);
}

/**
 * modify - replaces the old value with new one.
 * @arr: ptr
 * @key: key to be modified
 * @value: the new value
 */

void modify(hash_node_t **arr, const char *key, const char *value)
{
	hash_node_t *tmp = *arr;

	while (tmp && strcmp(tmp->key, key))
		tmp = tmp->next;
	free(tmp->value);
	tmp->value = strdup(value);
}

/**
 * addNode - adds new node
 * @key: the new key
 * @value: the new value
 * @h: the ptr to ptr
 * Return: new node's address or NULL on failure
 */

hash_node_t *addNode(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);

	if (*h == NULL)
	{
		*h = new;
		new->next = NULL;
	}
	else
	{
		new->next = *h;
		*h = new;
	}
	return (*h);
}


/**
 * hash_table_set - adds element to the table.
 * @key: key of the new element.
 * @ht: the table
 * @value: the value
 *
 * Return: 0 for failure, 1 for success.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (!ht || !key || !strcmp(key, "") || !value)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (verify(ht->array[idx], key))
	{
		modify(&ht->array[idx], key, value);
		return (1);
	}
	addNode(&ht->array[idx], key, value);
	if (&ht->array[idx] == NULL)
		return (0);
	return (1);
}
