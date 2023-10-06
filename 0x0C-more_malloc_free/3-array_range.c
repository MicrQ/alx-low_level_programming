#include <stdlib.h>

/**
 * array_range - creates an array of integer elements starting from 
 *		 min(included) upto max(included)
 * @min: the lowest number in the elemets
 * @max: the largest number in the elements
 * Return: the created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		j++;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
