#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a keyy.
 * @size: size of the table.
 * @key: the key.
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int pair;

	if (!key || !size)
		return (0);
	pair = hash_djb2(key);
	return (pair % size);
}
