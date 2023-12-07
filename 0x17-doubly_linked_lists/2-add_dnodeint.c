#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 *		  of a doubly linked list
 * @head: a head pointer to the doubly linked list
 * @n: a data for the new node
 *
 * Return: the address of the new node or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
