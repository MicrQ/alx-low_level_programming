#include "main.h"

/**
 * print_number - prints given numbers
 * @n: will be printed
 */

void  print_number(int n)
{
	int tmp, fact, digit, sign;
/*
*	if (n == 0)
*		_putchar('0');
*/
	if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}
	else
		sign = 1;
	tmp = n * sign;
	fact = 1;
	while (tmp > 9)
	{
		tmp /= 10;
		fact *= 10;
	}
	tmp = n * sign;
	while (fact > 0)
	{
		digit = tmp / fact;
		_putchar(digit + '0');
		tmp %= fact;
		fact /= 10;
	}
}
