#include "main.h"

/**
 * print_triangle - printing hash triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = size - 1; j >= i; j--)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
