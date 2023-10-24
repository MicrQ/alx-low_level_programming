#include "lists.h"

/**
 * reverse_listint - reverses a linked list data
 * @head: a pointer to the linked list
 * Return: a pointer to the reversed node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL, *new = NULL;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = ptr;
	}
	*head = new;
	return (*head);
}
