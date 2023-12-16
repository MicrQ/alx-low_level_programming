#include "main.h"

/**
 * _strlen - checks the length of given string
 * @str: passed string.
 * Return: the length of the string!
 *
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}

**
 * _strncat - concats string src to dest
 * @dest: src will be appended on dest
 * @src: string to be concatenated with dest
 * @n: number of characters to be appended
 * Return: dest will be returned;
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = _strlen(dest);

	while (src[i] != '\0' && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	if (i == n)
		dest[len + i] = '\0';

	return (dest);
}















