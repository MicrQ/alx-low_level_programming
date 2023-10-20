#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that helps to know the number of elements
 * @h: a pointer to list_t
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
