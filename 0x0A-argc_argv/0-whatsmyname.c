#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: argument counter - the size of argv
 * @argv: array of pointers
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("%s\n", argv[0]);
	return (0);
}
