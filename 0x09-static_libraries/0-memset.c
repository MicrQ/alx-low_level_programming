#include "main.h"

/**
 * _memset - fills memory with constant byte b
 * @b: byte to be filled
 * @s: passed pointer
 * @n: size of s
 * Return: modified version of s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
