#include <stdio.h>
#include "main.h"

/**
 * main -entry
 *
 * Return: 0
 */
int main(void)
{
	char c = 'A';

	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
