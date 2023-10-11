#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry of the program
 * @ac: arg counter
 * @av: vector
 * Return: 0 for success
 */
int main(int ac, char *av[])
{
	char *address;
	int byte, i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(av[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	byte = atoi(av[1]);
	address = (char *)main;

	for (i = 0; i < byte; i++)
	{
		printf("%02hhx", address[i]);
		if (i < byte - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
