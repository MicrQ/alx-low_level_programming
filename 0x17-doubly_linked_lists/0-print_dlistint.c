#include "lists.h"

/**
 * print_dlistint - a function that prints all elements of a doubly linkedlist
 *
 * @h: a head pointer to the doubly linkedlist
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
