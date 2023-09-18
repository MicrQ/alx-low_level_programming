#include "main.h"

/**
 * rev_string - returns the length of the given string
 * @s: is the string
 */

void rev_string(char *s)
{
	int j = 0, i;
	char tmp;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = tmp;
	}
}

