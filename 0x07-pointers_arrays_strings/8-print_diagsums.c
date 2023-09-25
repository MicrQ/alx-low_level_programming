#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints the sum of diagonal arrays
* @a: given array as pointer
* @size: size of the array
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	long int sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += *(a + i * size + j);
			if ((i + j) == (size - 1))
				sum1 += *(a + i * size + j);
		}
	}
	printf("%ld, %ld\n", sum, sum1);
}
