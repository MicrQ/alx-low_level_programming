#include "main.h"

/**
 * flip_bits - countes the number of bits needed to get one number to another
 * @n: number1
 * @m: number2
 * Return: the number of flip needed
 */

int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while ((n != 0) || (m != 0))
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
