#include "main.h"

/**
 * clear_bit - sets a specific bit to 0
 * @n: a pointer to the number
 * @index: position of bit
 * Return: 1 for success. -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int lsh;

	if (index >= sizeof(n) * 8)
		return (-1);

	lsh = ~(1 << index);
	*n = *n & lsh;

	return (1);
}
