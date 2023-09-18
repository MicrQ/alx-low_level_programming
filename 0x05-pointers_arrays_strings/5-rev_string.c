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

/**
 * rev_string - reverses given string
 * @s: passed string
 */

void rev_string(char *s)
{
	int i = 0;
	int j = _strlen(s);
	char tmp;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
