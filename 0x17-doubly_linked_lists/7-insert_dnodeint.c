#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that adds a new node at a given index
 *
 * @h: a pointer to the list
 * @idx: the position where the new node should be placed
 * @n: the data to be added in the new node
 *
 * Return: the new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!head)
	{
		if (idx == 0)
		{
			head = new;
			return (head);
		}
		else
			return (NULL);
	}
	while (i <= idx)
	{
		if (i == idx)
		{
			new->next = head;
			new->prev = head->prev;
			head->prev->next = new;
			head->prev = new;
			return (new);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
