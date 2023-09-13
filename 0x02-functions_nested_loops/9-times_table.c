#include "main.h"

/**
 * times_table - prints time table
 * 
 *
 */
void times_table(void)
{
	int i = 0, j, res;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			res = i*j;
			if (j > 0 && res < 10)
				_putchar(' ');
			if (res > 9)
			{
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}
			else
				_putchar('0' + res);
			if (j != 9)
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
