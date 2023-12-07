#include "lists.h"
/**
 * _len - node counter
 * @head: ptr
 * Return: number of node
 */
size_t _len(dlistint_t *head)
{
	size_t i = 0;

	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

/**
 * insert_dnodeint_at_index - a function that inserts a node at idx place
 * @h: a pointer to the dlist
 * @idx: an index to insert a node
 * @n: data for the new node
 *
 * Return: NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *new = malloc(sizeof(dlistint_t));
	size_t i = 0;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	while (head)
	{
		if (idx == i + 1 && idx < _len(*h))
		{
			new->next = head->next;
			head->next->prev = new;
			new->prev = head;
			head->next = new;
			return (new);
		}
		head = head->next;
		i++;
	}
	free(new);
	return (NULL);
}
