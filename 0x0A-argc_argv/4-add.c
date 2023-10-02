#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: vector arguments
 * Return: 0 for success, 1 for error(invalid input)
 */

int main(int argc, char *argv[])
{
	int i, tmp, sum = 0;

	for (i = 1; i < argc; i++)
	{
		tmp = atoi(argv[i]);
		if (isdigit(tmp))
			sum += tmp;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
