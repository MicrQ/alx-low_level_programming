#include "search_algos.h"

/**
 * linear_search - a function that performs a linear(sequential) search.
 *
 * @array: an array to check if a given value is present in it.
 * @size: the size of the array.
 * @value: the value to be searched in the array.
 *
 * Return: -1 if the value is not present in the array,
 *		or the index of the first occurence of the value in the array.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; i < size && array; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
