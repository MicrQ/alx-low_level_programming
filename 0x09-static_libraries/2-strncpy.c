#include "main.h"

/**
 * _strlen - checks the length of given string
 * @str: passed string.
 * Return: the length of the string!
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}

/**
 * _strncpy - copies string. works like built in function strncpy of C.
 * @dest: will be edited
 * @src: will be copied to dest
 * @n: number of characters to be copied on dest
 * Return: dest will be returned.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;/*, len = _strlen(dest);*/

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

/*	dest[i] = '\0';*/

	return (dest);
}















