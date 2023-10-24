#include "lists.h"

/**
 * pop_listint - deletes the head element
 * @head: a pointer to the linked list
 * Return: the deleted node data or 0 if the head is empty
 */

int pop_listint(listint_t **head)
{
	int tmp = (*head)->n;
	listint_t *ptr = (*head)->next;

	if (head == NULL || *head == NULL)
		return (0);

	free(*head);
	*head = ptr;
	return (tmp);
}
