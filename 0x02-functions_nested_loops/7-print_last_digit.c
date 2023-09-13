#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: will be the number to be checked
 * Return: returns the last number
 */
int print_last_digit(int x)
{
	int n;

	if (x < 0)
	{
		n = (x * -1) % 10;
		return n;
	}
	else
	{
		n = x % 10;
		return (n);
	}
}
