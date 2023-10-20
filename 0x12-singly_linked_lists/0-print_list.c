#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the lists in the linked list
 * @h: a pointer to a type struct list_s(typedef list_t)
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
