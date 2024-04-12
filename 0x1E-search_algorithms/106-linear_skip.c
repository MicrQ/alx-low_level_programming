#include "search_algos.h"

/**
 * msg - a message to print when comparing value with node value.
 * @node: a pointer to a linked list node.
 */
void msg(skiplist_t *node)
{
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
}

/**
 * found - a message to print when the value is found.
 * @low: a pointer to lower bound node,
 * @high: a pointer to higher bound node.
 */

void found(skiplist_t *low, skiplist_t *high)
{
	printf("Value found between indexes [%ld] and [%ld]\n",
			low->index, high->index);
}

/**
 * linear_skip - a function that performs a jump search on a singly linked list
 *			just in O(sqrt(n)) time complexity.
 * @list: a pointer to the linked list.
 * @value: a target to look for.
 *
 * Return: a pointer to the node with the target or NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *left = list, *high = list;

	if (!list)
		return (NULL);

	while (high->express)
	{
		high = high->express;
		msg(high);
		if (value <= high->n)
			break;
		left = high;
	}

	if (high == left)
		while (high->next)
			high = high->next;
	found(left, high);
	while (left && left->index < high->index)
	{
		msg(left);
		if (value == left->n)
			return (left);
		left = left->next;
	}
	msg(left);
	return ((value == left->n) ? left : NULL);
}
