#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - 2D array creator
 * @width: of the 2D array
 * @height: of the 2D array
 * Return: NULL if the function fails and
 *         width or height is equal to 0 or less
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}

	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
		_putchar('\n');
	}
	return (arr);
}
