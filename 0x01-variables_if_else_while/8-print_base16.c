#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex = 0;

	while (hex < 16)
	{
		if (hex < 10)
			putchar(hex + '0');
		else
			putchar(hex - 10 + 'a');
		hex++;
	}
	putchar('\n');
	return (0);
}
