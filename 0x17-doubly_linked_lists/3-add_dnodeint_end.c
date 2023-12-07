#include "lists.h"

/**
 * add_dnodeint_end - a function that adds new node at the end of a linked list
 *
 * @n: a data for the new node
 * @head: a pointer to the linkedlist
 *
 * Return: NULL on failure or the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head, *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		while (h->next)
			h = h->next;
		h->next = new;
		new->prev = h;
	}

	return (new);
}

