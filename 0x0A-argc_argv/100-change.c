#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: arg counter
 * @argv: vectors
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int i, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins < 0)
		printf("%d\n", 0);
	else
	{
		for (i = 0; coins > 0; i++)
		{
			if (coins >= 25)
				coins -= 25;
			else if (coins >= 10)
				coins -= 10;
			else if (coins >= 5)
				coins -= 5;
			else if (coins >= 2)
				coins -= 2;
			else
				coins -= 1;
		}
		printf("%d\n", i);
	}
	return (0);
}

