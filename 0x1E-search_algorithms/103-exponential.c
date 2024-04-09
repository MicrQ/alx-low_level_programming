#include "search_algos.h"

int binarySearch(int *array, int value, size_t low, size_t high);
void print_array(int *array, size_t low, size_t high);

/**
 * exponential_search - a function that performs exponential search on
 *			a given sorted array.
 *
 * @array: the array to perfom the search on.
 * @size: the size of the array.
 * @value: the target vale to look for.
 *
 * Return: -1 if not found or if the given array is NULL,
 *		or the index of the value in the array.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, right;

	if (!array)
		return (-1);

	while (bound < size && value > array[bound - 1])
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	right = bound < size ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, right);

	return binarySearch(array, value, bound / 2, bound);
}

/**
 * binarySearch - a function that performs a binary search in a given array.
 *
 * @array: the array to look for a given target.
 * @value: the target value to search in a given array.
 * @low: the lower bound of the given array.(inclusive)
 * @high: the higher bound of the given array.
 *
 * Return: -1 if target not found or the index of the target in the array.
 */

int binarySearch(int *array, int value, size_t low, size_t high)
{
	size_t i = low, j = high - 1, mid;

	while (i <= j && array)
	{
		print_array(array, i, j);
		mid = (j  + i) / 2;
		if (array[mid] > value)
			j = mid - 1;
		else if (array[mid] < value)
			i = mid + 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * print_array - a function that print a given array.
 *
 * @array: the array to be printed.
 * @low: index of the array to start printing from.
 * @high: index of the array to stop printing(included).
 */

void print_array(int *array, size_t low, size_t high)
{
	size_t i = low;

	printf("Searching in array: ");
	while (i < high)
		printf("%d, ", array[i++]);
	printf("%d\n", array[i]);
}
