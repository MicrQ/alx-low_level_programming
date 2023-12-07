#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the doubly linked
 *			list data(n).
 * @head: a pointer to the doubly linked list
 *
 * Return: the sum or 0 if the linked list is NULL
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
