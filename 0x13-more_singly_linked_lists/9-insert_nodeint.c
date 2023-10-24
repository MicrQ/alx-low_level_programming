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
 * insert_nodeint_at_index - inserts new node at a given index
 * @head: a pointer to a linked list
 * @idx: the index of the new node
 * @n: data for the new node
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *Head = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx >= listint_len(Head))
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	for (i = 0; i < idx; i++)
		Head = Head->next;
	if (i == 0)
	{
		ptr->next = Head;
		Head = ptr;
	}
	else
	{
		ptr->next = Head->next;
		Head->next = ptr;
	}

	return (ptr);
}
