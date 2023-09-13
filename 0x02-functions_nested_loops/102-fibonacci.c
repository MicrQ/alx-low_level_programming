#include <stdio.h>

/**
 * main - entry
 * Return: succuss 0
 */
int main(void)
{
	long int a = 1, b = 2, c;
	int count = 1;

	while (count <= 50)
	{
		printf("%ld", a);
		c = a + b;
		a = b;
		b = c;
		if (count != 50)
			printf(", ");
		count++;
	}
	printf("\n");
	return (0);
}
