#include "lists.h"
/**
 * free_node - a function that frees a single node
 * @node: a given node
 * Return: NULL
 */
dlistint_t *free_node(dlistint_t *node)
{
	free(node);
	return (NULL);
}

/**
 * _len - a function that counts number of nodes
 *
 * @h: a head pointer to the linked list
 * Return: number of nodes
 */
size_t _len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

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
	unsigned int len = _len(*h), i = 0;

	if (!new)
		return (NULL);
	if (idx >= len)
		return (free_node(new));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*h)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
	}
	else if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	else
		while (head)
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
	return (free_node(new));
}
