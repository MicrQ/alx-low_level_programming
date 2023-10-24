#include "lists.h"

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

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	for (i = 0; Head && i < idx; i++)
	{
		if (i == idx - 1)
		{
			ptr->next = Head->next;
			Head->next = ptr;
			return (ptr);
		}
		Head = Head->next;
	}
	return (NULL);
}
