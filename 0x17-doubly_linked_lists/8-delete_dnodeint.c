#include "lists.h"


/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: pointer to the first node of the list
 * @index: index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head, *tmp = NULL;
	unsigned int i = 0, len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	if (!*head || index >= len)
		return (-1);

	h = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(h);
		return (1);
	}

	for (i = 0; i < index; i++)
		h = h->next;

	tmp = h->prev;
	tmp->next = h->next;

	if (h->next != NULL)
		h->next->prev = tmp;

	free(h);
	return (1);
}
