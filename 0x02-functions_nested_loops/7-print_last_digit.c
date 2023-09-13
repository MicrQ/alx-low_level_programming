#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: will be the number to be checked
 * Return: returns the last number
 */
int print_last_digit(int x)
{
	int ld = x % 10;

	if (ld < 0)
	{
		ld *= -1;
		_putchar(ld + '0');
	}
	else
	{
		ld = ld;
		_putchar(ld + '0');
	}
	return (ld);
}
