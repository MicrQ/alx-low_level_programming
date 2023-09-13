#include "main.h"

/**
 * print_times_table - prints time table
 */
void print_times_table(int n)
{
	int i = 0, j, res, tmp;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				res =  i * j;
				if (j > 1 && res < 10)
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
				{
					tmp = res / 100;
					res = res % 100;
					_putchar('0' + tmp);
					_putchar('0' + (res / 10));
					_putchar('0' + (res % 10));
				}
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
