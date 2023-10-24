#include "lists.h"

/**
 * free_listint - a function that frees a listint_t(aka struct listint_s)
 * @head: a pointer to the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
