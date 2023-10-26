#include "main.h"

/**
 * set_bit - sets a given index place of number to 1
 * @n: a pointer to the number
 * @index: position of bit
 * Return: 1 if succeed -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int lsh;

	if (index >= sizeof(n) * 8)
		return (-1);

	lsh = 1 << index;
	*n = *n | lsh;
	return (1);
}
