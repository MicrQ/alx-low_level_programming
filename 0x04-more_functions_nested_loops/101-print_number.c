#include "main.h"

/**
 * print_number - prints given number
 * @n: will be printed only using putchar
 */

void print_number(long int n)
{
	int tmp;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n < 10)
		_putchar('0' + n);
	else
	{
		tmp = n % 10;
		print_number(n / 10);
		_putchar('0' + tmp);
	}
}
