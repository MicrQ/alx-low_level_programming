#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n array elements
 * @a: passed arrays
 * @n: n number of array elements will be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
