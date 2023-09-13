#include "main.h"

/**
 * print_sign - checks thr sign of its argument
 * @n: will be checked
 * Return: return 1 for +ve, -1 for -ve and 0 for 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
