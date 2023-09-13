#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: will be the number to be checked
 * Return: returns the last number
 */
int print_last_digit(int x)
{
	int ld;

	if (x < 0)
		x = -1 * x;
	else
		x =x;
	ld = x % 10;
	_putchar('0' + ld);
	return (ld);
}
