#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * print_number - prints num
 */
void print_digit(int n)
{
	_putchar('0' + n);
}
void print_two_digits(int n)
{
	print_digit(n / 10);
	print_digit(n % 10);
}
void print_three_digits(int n)
{
	print_digit(n / 100);
	print_two_digits(n % 100);
}
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
		print_digit(n);
	else if (n < 100)
		print_two_digits(n);
	else
		print_three_digits(n);
}
void print_to_98(int n)
{
	while (n != 98)
	{
		print_number(n);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	print_number(98);
	_putchar('\n');
}
