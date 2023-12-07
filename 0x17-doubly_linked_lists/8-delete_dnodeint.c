#include "lists.h"


/**
 * delete_dnodeint_at_index - a function that deletes a node at a given index
 *
 * @head: a pointer to a pointer to the dlinked list
 * @index: a node index(posission)
 * Return: 1 on success, 0 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head, *tmp;
	size_t i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(h);
		return (1);
	}
	while (h) 
	{
		tmp = h;
		h = h->next;
		if (i == index)
		{
			tmp->prev->next = h;
			h->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		i++;
	}

	return (-1);
}
