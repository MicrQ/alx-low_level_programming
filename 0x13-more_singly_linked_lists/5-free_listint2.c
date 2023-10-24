#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets it pointer to NULL
 * @head: a pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while ((*head) != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
