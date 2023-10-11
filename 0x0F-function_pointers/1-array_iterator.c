#include <stdlib.h>

/**
 * array_iterator - iterates through the array elements and prints each
 * @array: array of integer to be printed
 * @size: the size of the array
 * @action: a function pointer to print array elments
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
