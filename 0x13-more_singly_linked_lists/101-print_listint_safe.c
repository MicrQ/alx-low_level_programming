#include "lists.h"

/**
 * loop_list - Counts the number of unique nodes
 * @head: A pointer
 * Return: If the list is not looped - 0.
 */
size_t loop_list(const listint_t *head)
{
	const listint_t *tor, *har;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	har = (head->next)->next;
	while (har)
	{
		if (tor == har)
		{
			tor = head;
			while (tor != har)
			{
				node++;
				tor = tor->next;
				har = har->next;
			}

			tor = tor->next;
			while (tor != har)
			{
				node++;
				tor = tor->next;
			}
			return (node);
		}
		tor = tor->next;
		har = (har->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: A pointer
 * Return: The number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = loop_list(head);
	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
