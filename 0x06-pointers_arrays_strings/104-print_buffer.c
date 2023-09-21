#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints the given string's buffer
 * @b: given string
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i, j, cnt = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x", b[j]);
				if (!(cnt % 2 == 0))
					printf(" ");
				cnt++;
			}
			else
				printf("  ");
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (isprint(b[j]))
					printf("%c", b[j]);
				else
					printf(".");
			}
			else
				break;
		}
		printf("\n");
	}
}
