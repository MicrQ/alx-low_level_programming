#include <stdlib.h>

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
 * argstostr - concatenates all arguments to one string
 *             print each arg in new line.
 * @ac: arg counter
 * @av: given arguments
 * Return: a pointer to a new string created
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		j += _strlen(av[i]);
	str = malloc(sizeof(char) * (j + ac + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
