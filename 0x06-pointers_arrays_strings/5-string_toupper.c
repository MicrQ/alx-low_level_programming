#include "main.h"

/**
 * string_toupper - converts lowercase letters to uppercase
 * @c: given string.
 * Return: converted  string.
 */

char *string_toupper(char *c)
{
	int n, i = 0;

	while (c[i] != '\0')
	{
		n = c[i];
		if (n >= 97 && n <= 122)
			c[i] = 65 + (n - 97);
		i++;
	}
	return (c);
}
