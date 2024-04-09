#include "search_algos.h"

/**
 * jump_search - a function that performs a jump search in a sorted array.
 *
 * @array: the array which the search to be performed.
 * @size: the size of the array.
 * @value: the value to be searched in the array.
 *
 * Return: -1 if not found or if the array is NULL,
 *		else, the index of the first occurence of the value.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, step = sqrt(size), high = 0;

	if (array)
	{
		while (high < size && array[high] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", high, array[high]);
			low = high;
			high += step;
		}
		printf("Value found between indexes [%ld] and [%ld]\n", low, high);
		if (high > size)
			high = size;

		while (low < high)
		{
			printf("Value checked array[%ld] = [%d]\n", low, array[low]);
			if (array[low] == value)
				return (low);
			low++;
		}
	}
	return (-1);
}
