#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0, y, z;

	while (x <= 7)
	{
		y = 1;
		while (y <= 8)
		{
			z = 2;
			while (z <= 9)
			{
				if (x < y && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x < 7 && y <= 8 && z <= 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
