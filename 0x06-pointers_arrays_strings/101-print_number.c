#include "main.h"

/**
 * print_number - prints given integer
 * @n: given integer
 */

void print_number(int n)
{
	int dig, div = 1;

	if (n == 0)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= 10)
		div *= 10;
	while (div > 0)
	{
		dig = n / div;
		_putchar('0' + dig);
		n = n - (dig * div);
		div /= 10;
	}
}
