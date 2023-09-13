#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: will be the number to be checked
 * Return: returns the last number
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
		x *= -1;
		return (x % 10);
	}
	else
		return (x % 10);
}
