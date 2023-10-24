#include "lists.h"

/**
 * sum_listint - computes addition on all the data of listint_t
 * @head: a pointer to the linked list
 * Return: the sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
