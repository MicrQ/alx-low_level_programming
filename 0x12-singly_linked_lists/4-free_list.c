#include <stdlib.h>
#include "lists.h"

/**
 * free_list - helps to free a memory of type list_t(aka struct list_s)
 * @head: a pointer to the first element
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
}
