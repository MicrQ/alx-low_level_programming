#include "lists.h"

/**
 * free_dlistint - frees a given doubly linked list
 * @head: a head pointer to the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
}
