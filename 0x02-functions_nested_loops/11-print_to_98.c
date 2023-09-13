#include "main.h"

/**
 * print_to_98 - prints numbers upto 98 from given number
 * @n: will be statrting point
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
			if ((n / 10) != 0)
				print_to_98(n / 10);
			_putchar('0' + (n % 10));
		}
		else
		{
			if ((n / 10) != 0)
				print_to_98(n / 10);
			_putchar('0' + (n % 10));
		}
	}
}
