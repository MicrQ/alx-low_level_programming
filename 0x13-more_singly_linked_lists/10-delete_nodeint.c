#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a specified node of the list
 * @head: a pointer to the linked list
 * @index: the index of the node to be deleted
 * Return:  1 for success and -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL, *Head = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(Head);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (Head == NULL || Head->next == NULL)
			return (-1);
		if (i == index - 1)
		{
			ptr = Head->next->next;
			free(Head->next);
			Head->next = ptr;
			return (1);
		}
		Head = Head->next;
	}
	return (-1);
}
