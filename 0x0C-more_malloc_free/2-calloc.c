#include <stdlib.h>

/**
 * _calloc - works like the built-in function of C(calloc)
 * @nmemb: number of array elements
 * @size: size of array elements
 * Return: a pointer to newly allocated memory or
 *	   NULL if nmemb or size is 0 or the function fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return (arr);
}
