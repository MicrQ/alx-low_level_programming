#include "main.h"

/**
 * _strcpy - copies string to another variable
 * @dest: destination of string
 * @src: source of string
 * Return: the pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (*(src + i) != '\0')
		i++;

	j = 0;
	while (j <= i)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	return (dest);
}
