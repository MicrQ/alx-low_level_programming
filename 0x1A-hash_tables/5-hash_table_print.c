#include "hash_tables.h"

/**
 * listPrint - linked list printer
 * @head: head pointer
 */
void listPrint(hash_node_t *head)
{
	while (head)
	{
		printf("'%s': '%s'", head->key, head->value);
		if (head->next)
			printf(", ");
		head = head->next;
	}
}



/**
 * hash_table_print - prints a hash table.
 * @ht: the table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	char *end;
	unsigned long int idx, i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			node = ht->array[i];
	}
	printf("{");
	if (node)
	{
		end = node->key;
		idx = key_index((const unsigned char *)end, ht->size);

		for (i = 0; i < ht->size; i++)
		{
			listPrint(ht->array[i]);
			if (ht->array[i] && i < idx)
				printf(", ");
		}
	}
	printf("}\n");
}
