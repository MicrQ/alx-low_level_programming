#include "main.h"

/**
 * leet - encodes a string to 1337
 * @c: strint to be encoded
 * Return: c will be returned.
 */

char *leet(char *c)
{
	int i = 0, j;
	char *enc = "A4a4E3e3O0o0T7t7L1l1";

	while (c[i] != '\0')
	{
		j = 0;
		while (enc[j] != '\0')
		{
			if (c[i] == enc[j])
				c[i] = enc[j + 1];
			j += 2;
		}
		i++;
	}
	return (c);
}
