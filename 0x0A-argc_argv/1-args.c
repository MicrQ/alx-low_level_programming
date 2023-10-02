#include <stdio.h>

/**
 * main -entry for the program
 * @argc: argument counter or size of argv
 * @argv: argument vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	argv++;
	return (0);
}
