#include "main.h"

/**
 * three_digits - printing three digits
 * @n: argument
 *
 */
void three_digits(int n)
{
	int tmp = n / 100;

	n = n % 100;
	_putchar('0' + tmp);
	_putchar('0' + (n / 10));
	 _putchar('0' + (n % 10));
}
/**
 * print_times_table - prints time table
 * @n: argument
 */
void print_times_table(int n)
{
	int i = 0, j, res;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				res =  i * j;
				if (j > 0 && res < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (res < 10)
					_putchar('0' + res);
				else if (res < 100)
				{
					_putchar(' ');
					_putchar('0' + res / 10);
					_putchar('0' + res % 10);
				}
				else
					three_digits(res);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

