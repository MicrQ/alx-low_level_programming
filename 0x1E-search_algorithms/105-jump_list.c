#include "search_algos.h"

/**
 * found - a message to print when the value is found.
 * @low: a pointer to lower bound node,
 * @high: a pointer to higher bound node.
 */

void found(listint_t *low, listint_t *high)
{
	printf("Value found between indexes [%ld] and [%ld]\n",
			low->index, high->index);
}

/**
 * msg - a message to print when comparing value with node value.
 * @node: a pointer to a linked list node.
 */
void msg(listint_t *node)
{
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
}

/**
 * jump_list - a function that performs a jump search in a singly linked list.
 *
 * @list: a head to the linked list.
 * @size: the number of nodes in the list.
 * @value: target to look for.
 *
 * Return: NULL if target not found or if list is NULL,
 *		or address to the node.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i;
	listint_t *low = list, *high = list;

	if (list)
	{
		while (high)
		{
			i = step;
			low = high;
			while (i-- > 0 && high && high->next)
				high = high->next;

			msg(high);
			if (!high->next || high->n >= value)
				break;
		}
		found(low, high);
		while (low && low->index <= high->index)
		{
			msg(low);
			if (low->n == value)
				return (low);
			low = low->next;
		}
	}

	return (NULL);
}
