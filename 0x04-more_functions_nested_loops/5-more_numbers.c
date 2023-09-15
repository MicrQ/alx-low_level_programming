#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 *
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
