#include "lists.h"

/**
 * print_listint - prints the all the nodes
 * @h: a pointer to a struct listint_s type
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
