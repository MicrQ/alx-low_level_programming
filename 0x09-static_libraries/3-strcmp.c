#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if the stirngs are equal, -ve value if s1 is less and +ve
 * value if s1 is greater
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, str1, str2, cmp;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		str1 = s1[i];
		str2 = s2[i];
		if (str1 > str2)
		{
			cmp = str1 - str2;
			break;
		}
		else if (str2 > str1)
		{
			cmp = str1 - str2;
			break;
		}
		else
		{
			cmp = 0;
			i++;
		}
	}
	return (cmp);
}
