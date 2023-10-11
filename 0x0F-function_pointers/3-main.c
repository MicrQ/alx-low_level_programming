#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - entry of the program
 * @ac: argument counter
 * @av: vector
 * Return: 0 for success
 */

int main(int ac, char *av[])
{
	int result;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(av[2]) == NULL || av[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%') && (atoi(av[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(av[2]))(atoi(av[1]), atoi(av[3]));
	printf("%d\n", result);
	return (0);
}
