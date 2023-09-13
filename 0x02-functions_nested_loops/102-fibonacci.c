#include <stdio.h>

/**
 * main - entry
 * Return: succuss 0
 */
int main(void)
{
	int a = 1, b = 2, c, count = 0;

	while(count < 50)
	{
		printf("%d, ", a);
		c = a + b;
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
