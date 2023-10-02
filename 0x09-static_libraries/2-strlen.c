#include "main.h"

/**
 * _strlen - returns the length of the given string
 * @s: is the string passed
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
