#include "lists.h"

/**
 * free_listint_safe - frees linked list
 * @h: ptr
 * Return: number of data
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int d;
listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
