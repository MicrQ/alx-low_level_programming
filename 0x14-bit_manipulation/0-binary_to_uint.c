#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: a pointer of type char
 * Return: the unsigned int value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num *= 2;
		if (b[i] == '1')
			num++;
	}
	return (num);
}
