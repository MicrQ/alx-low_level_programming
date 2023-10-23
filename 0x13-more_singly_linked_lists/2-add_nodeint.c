#include "lists.h"

/**
 * add_nodeint - a function that adds new node at the beginning
 * @head: a pointer to linked list
 * @n: the data to be stored(integer)
 *
 * Return: the address of the new node or null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(int));

	ptr->n = n;
	ptr->next = (*head);

	(*head) = ptr;

	return (*head);
}
