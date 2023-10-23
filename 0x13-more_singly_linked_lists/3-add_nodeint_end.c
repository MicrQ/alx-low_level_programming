#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: a pointer to listint_t(aka struct listint_s)
 * @n: a data for the new node
 * Return: the address of the new node or NULL if the function fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *Head = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (Head->next != NULL)
		Head = Head->next;
	Head->next = ptr;

	return (ptr);
}
