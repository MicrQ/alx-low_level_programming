#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _numcheck(char *s);

/**
 * main - entry
 * @argc: number of arguments
 * @argv: vector arguments
 * Return: 0 for success, 1 for error(invalid input)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
