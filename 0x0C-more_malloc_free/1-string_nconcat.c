#include <stdlib.h>

/**
 * _strlen - returns the length of the given string
 * @s: is the string passed
 * Return: length of the string
 */

unsigned int _strlen(char *s)
{
        int i = 0;

        while (*(s + i) != '\0')
                i++;
        return (i);
}

/**
 * string_nconcat - concatenates n bytes of s2 on s1
 *		    if n is less than s2's length, all s2 will be concatenated
 * @s1: string one
 * @s2: string two
 * @n: bytes of s2 to concat
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= _strlen(s2))
		len = _strlen(s1) + _strlen(s2);
	else
		len = _strlen(s1) + n;
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		new[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		new[i] = s2[j];
		i++;
	}
	new[i] = '\0';

	return (new);
}
