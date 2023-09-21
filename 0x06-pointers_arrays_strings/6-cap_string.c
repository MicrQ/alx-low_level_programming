#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @c: a given string
 * Return: modified string
 */

char *cap_string(char *c)
{
	int j, i = 0, flag = 1;
	char arr[] = "\t\n, ;.!?\"(){}";

	while (c[i] != '\0')
	{
		j = 0;
		while (arr[j] != '\0')
		{
			if (flag == 1)
			{
				if (c[i] >= 'a' && c[i] <= 'z')
				{
					c[i] = c[i] - 32;
					flag = 0;
					break;
				}
				flag = 0;
			}
			else
			{
				if (c[i] == arr[j])
				{
					flag = 1;
					break;
				}
				else
					flag = 0;
			}
			j++;
		}
		i++;
	}
	return (c);
}

