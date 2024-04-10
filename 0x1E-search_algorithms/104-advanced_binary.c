#include "search_algos.h"


int help_binarySearch(int *array, int value, size_t low, size_t high);

/**
 * advanced_binary - a binary search that returns the first occurrece of target
 *
 * @array: an array to look for the target from.
 * @size: the size of the array.
 * @value: the target.
 *
 * Return: the index of the first occurrence of the target.
 *		or -1 if not found or if array is NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (help_binarySearch(array, value, 0, size - 1));
}

/**
 * print_arr - prints a given array elements.
 * @arr: the array to be printed.
 * @low: the lower bound.(inclusive)
 * @high: the higher bound.(inclusive)
 */
void print_arr(int *arr, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low < high)
	{
		printf("%d, ", arr[low]);
		low++;
	}
	printf("%d\n", arr[low]);
}


/**
 * help_binarySearch - a function that finds the a target in a given array.
 * @array: the array to find a target from.
 * @value: target value.
 * @low: the lower bound.
 * @high: the higher bound.
 *
 * Return: -1 if not found. the index if found.
 */

int help_binarySearch(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	if (high < low)
		return (-1);

	mid = low + (high - low) / 2;
	print_arr(array, low, high);
	if (array[mid] > value)
		return (help_binarySearch(array, value, low, mid - 1));
	else if (array[mid] < value)
		return (help_binarySearch(array, value, mid + 1, high));

	else
	{
		if (mid > 0 && array[mid - 1] == value)
			return (help_binarySearch(array, value, low, mid));
		return (mid);
	}
}
