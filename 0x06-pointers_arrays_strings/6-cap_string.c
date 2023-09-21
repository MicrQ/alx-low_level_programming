#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @c: a given string
 * Return: modified string
 */

char *cap_string(char *c)
{
	int j, i = 0;
	char prv = '\n';
	char arr[] = "\t\n, ;.!?\"(){}";

	while (c[i] != '\0')
	{
		j = 0;
		while (arr[j] != '\0')
		{
			if (prv == arr[j])
			{
				if (c[i] >= 'a' && c[i] <= 'z')
					c[i] -= 32;
			}
			prv = c[i];
			j++;
		}
		i++;
	}
	return (c);
}
