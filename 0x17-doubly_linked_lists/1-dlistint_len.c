#include "lists.h"

/**
 * dlistint_len - a function that counts number of nodes
 *
 * @h: a head pointer to the linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
