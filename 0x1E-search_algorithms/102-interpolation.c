#include "search_algos.h"

/**
 * interpolation_search - a function that performs an interpolation search
 *				on a given sorted array.
 *
 * @array: an array to search a value from.
 * @size: size of the array(number of elements in the array).
 * @value: a value to be searched.
 *
 * Return: the index of the value in the array.
 *		or -1 if not found or if the array is NULL.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t probe = probe = low + (double)(value - array[low]) /
		(array[high] - array[low]) * (high - low);

	while (array && probe < size && low <= high)
	{
		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (array[probe] > value)
			high = probe - 1;
		else if (array[probe] < value)
			low = probe + 1;
		else
			return (probe);
		probe = low + (double)(value - array[low]) /
			(array[high] - array[low]) * (high - low);
	}
	printf("Value checked array[%ld] is out of range\n", probe);
	return (-1);
}
