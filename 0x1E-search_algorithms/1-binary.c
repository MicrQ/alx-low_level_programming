#include "search_algos.h"

void print_array(int *array, size_t low, size_t high);

/**
 * binary_search - a function that performs a binary search in a sorted array.
 *
 * @array: a sorted array to search a value.
 * @size: the size of the array(the number of elements in the array).
 * @value: a value to be searched in the array.
 *
 * Return: -1 if the array is NULL or the value is not found.
 *		else the index of the value in the array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	while (low <= high && array)
	{
		print_array(array, low, high);
		mid = (high + low) / 2;
		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
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
