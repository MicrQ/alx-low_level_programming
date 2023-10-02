#include <stdlib.h>

/**
 * create_array - creates array of characters
 * @size: the size of the array
 * @c: elements of the array
 * Return: a pointer to the array or
 *         NULL if size is zero or the function failed
 */

char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int i;

	if (size == 0)
		return ('\0');
	chr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		chr[i] = c;

	return (chr);
}
