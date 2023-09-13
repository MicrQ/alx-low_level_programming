#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0 for Success
 */
int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	return (0);
}
