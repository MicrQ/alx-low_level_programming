#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth(index) node
 *
 * @head: a pointer to the doubly linked list
 * @index: the nth node's location counting from head
 *
 * Return: the nth node or NULL node[index] doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
