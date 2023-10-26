#include "main.h"

/**
 * print_binary_rec - converts given unsigned int to binary
 * @n: number to be converted
 */

void print_binary_rec(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_rec(n >> 1);

	_putchar('0' + (n & 1));
}

/**
 * print_binary - a function that calls print_binary_rev
 * @n: given number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_binary_rec(n);
}
