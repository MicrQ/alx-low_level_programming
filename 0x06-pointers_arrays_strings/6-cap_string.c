#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @c: a given string
 * Return: modified string
 */

char *cap_string(char *c)
{
	int j, i = 0, flag = 1;
	char t;
	char arr[] = " \t\n,;.!?\"(){}";

	while (c[i] != '\0')
	{
		t = c[i];
		j = 0;
		while (arr[j] != '\0')
		{
			if (t == arr[j])
				flag = 1;
			if (flag && t >= 'a' && t <= 'z')
			{
				c[i] = t - 32;
				flag = 0;
			}
			j++;
		}
		i++;
	}
	return (c);
}
