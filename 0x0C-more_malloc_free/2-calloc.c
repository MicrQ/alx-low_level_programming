#include <stdlib.h>

/**
 * _calloc - works like the built-in function of C(calloc)
 * @nmemb: number of array elements
 * @size: size of array elements
 * Return: a pointer to newly allocated memory or
 * 	   NULL if nmemb or size is 0 or the function fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
