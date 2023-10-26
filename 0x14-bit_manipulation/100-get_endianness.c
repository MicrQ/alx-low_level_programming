#include "main.h"

/**
 * get_endianness - checks endianness of a computer
 * Return: 0 for big endian. 1 for small endian
 *
 */

int get_endianness(void)
{
	char bt = 1;
	char *ptr;

	ptr = &bt;

	return (*ptr);
}
