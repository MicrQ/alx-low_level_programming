#include <stdlib.h>

/**
 * int_index - searches for an integer int the given array
 * @array: array of integers
 * @size: size of the array
 * @cmp: a function pinter that returns 1 if number is found in the array
 * Return: the index of the the number that is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
