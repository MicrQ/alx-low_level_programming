#include "main.h"
#include <stdio.h>
/**
 * print_binary - converts given unsigned int to binary and prints the binary
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary(n >> 1);

	_putchar('0' + (n & 1));
}
