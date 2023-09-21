#include "main.h"

/**
 * rot13 - encrypts and decrypts string
 * @s: string passed
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = ((s[i] - 'a' + 13) % 26) + 'a';
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = ((s[i] - 'A' + 13) % 26) + 'A';
		i++;
	}
	return (s);
}
