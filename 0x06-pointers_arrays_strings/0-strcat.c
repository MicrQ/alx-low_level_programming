#include "main.h"
#include <stdio.h>
/**
 * _strlen - checks the length of given string
 * @str: passed string
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}

/**
 * _strcat - concats string src to dest
 * @dest: src will be appended on dest
 * @src: string to be concatenated with dest
 * Return: dest will be returned;
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return (dest);
}















