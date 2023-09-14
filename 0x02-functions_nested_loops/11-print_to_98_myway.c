#include "main.h"

/**
 * print_to_98 - prints numbers upto 98 from given number
 * @n: will be statrting point
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		int tmp, tmp1;

		if (n < 0)
		{
			_putchar('-');
			tmp = (-1 * n);
			if (tmp < 10)
				_putchar('0' + tmp);
			else if (tmp < 100)
			{
				_putchar('0' + (tmp / 10));
				_putchar('0' + (tmp % 10));
			}
			else
			{
				tmp1 = tmp % 10;
				tmp = tmp / 10;
				if (tmp > 10 && tmp < 100)
				{
					_putchar('0' + (tmp / 10));
					_putchar('0' + (tmp % 10));
					_putchar('0' + tmp1);
				}
			}
		}
		else
		{
			if (n >= 10)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else
				_putchar('0' + n);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
