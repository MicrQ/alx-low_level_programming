#include <stdlib.h>

/**
 * _strlen - returns the length of the given string
 * @s: is the string passed
 * Return: length
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * wordc - this function counts words separated by whitespace
 * @s: given string
 * Return: number of words
 */
int wordc(char *s)
{
	unsigned int i, flag = 0, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
	}
	return (count);
}

/**
 * strtow - splites given string into words
 * @str: passed string
 * Return: array of splited string(words)
 */

char **strtow(char *str)
{
	char **s, *sin;
	unsigned int i, j = 0, cnt, slen, flag = 0, fst, lst;

	slen = _strlen(str);
	cnt = wordc(str);
	if (cnt == 0)
		return (NULL);

	s = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < slen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (flag)
			{
				lst = i;
				sin = (char *)malloc(sizeof(char) * (flag + 1));
				if (sin == NULL)
					return (NULL);
				while (fst < lst)
					*sin++ = str[fst++];
				*sin = '\0';
				s[j] = sin - flag;
				j++;
				flag = 0;
			}
		}
		else if (flag++ == 0)
			fst = i;
	}
	s[j] = NULL;
	return (s);
}
