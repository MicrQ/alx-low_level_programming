#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *item;

	item = malloc(b);
	if (item == NULL)
		exit(98);
	return (item);
}
