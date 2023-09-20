#include "main.h"

/**
 * reverse_array - this function reverses a given array
 * @a: the given array
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
