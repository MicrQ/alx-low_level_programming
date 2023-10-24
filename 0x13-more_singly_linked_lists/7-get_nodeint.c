#include "lists.h"

/**
 * listint_len - is a function that computes the number of elements
 * @h: a pointer to struct listint_s type
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}


/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: a pointer to the linked list
 * @index: the index of the node to be returned
 * Return: the node or NULL if the index doesn't exist or the pointer is NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (index >= listint_len(head))
		return (NULL);

	for (i = 0; i <= index; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
