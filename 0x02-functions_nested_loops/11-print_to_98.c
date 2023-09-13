#include "main.h"

/**
 * print_digit - for 1 digit
 * @n: will be calc
 */
void print_digit(int n)
{
	_putchar('0' + n);
}
/**
 * print_two_digits - for two digits
 * @n: will be calc
 */
void print_two_digits(int n)
{
	print_digit(n / 10);
	print_digit(n % 10);
}
/**
 * print_three_digits -for three digits
 * @n: will be checked
 */
void print_three_digits(int n)
{
	print_digit(n / 100);
	print_two_digits(n % 100);
}
/**
 * print_number - prints num
 * @n: will be calc
 */
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
/**
 * print_to_98 - prints to 98 all
 * @n: will be be calculated
 */
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
