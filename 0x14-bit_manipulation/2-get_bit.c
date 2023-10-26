#include "main.h"

/**
 * get_bit - check if the given index value of the binary is 1 or 0
 * @index: place to check the value
 * @n: decimal number
 * Return: the bit value or -1 for failure
 */

int get_bit(unsigned long int n, unsigned long int index)
{
	unsigned long int lsh, result;

	if (index >= sizeof(n) * 8)
		return (-1);

	lsh = 1 << index;
	result = lsh & n;

	return (result >> index);
}
