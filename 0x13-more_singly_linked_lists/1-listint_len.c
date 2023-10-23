#include "lists.h"

/**
 * listint_len - is a function that computes the number of elements
 * @h: a pointer to struct listint_s type
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
