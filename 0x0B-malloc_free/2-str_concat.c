#include <stdlib.h>

/**
 * str_concat - concats passed strings
 * @s1: string one
 * @s2: string two
 * Return: Null if function fails or the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
	{
		s[i] = s2[k];
		i++;
	}
	s[i] = '\0';
	return (s);
}
