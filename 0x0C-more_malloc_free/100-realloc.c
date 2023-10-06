#include <stdlib.h>

/**
 * _realloc - reallocates memory for a given pointer.
 *		works as the C built-in realloc().
 * @ptr: void pointer to  reallocate memory
 * @old_size: old size of the pointer
 * @new_size: new size to reallocate
 * Return:
 *	# NULL - if function fails or new_size is 0 and ptr is not NULL
 *	# the new allocated memory
 *	# ptr - if old_size == new_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		s[i] = ((char *)ptr)[i];
	free(ptr);

	return (s);
}
