#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error - prints Error followed by new line
 */
void error(void)
{
	char err[] = "Error\n";
	unsigned int i;

	for (i = 0; err[i] != '\0'; i++)
	{
		_putchar(err[i]);
		exit(98);
	}
}
/**
 * _isdigit - check if c is digit
 * @c: will be checked
 * Return: 1 if c is digit, else 0
 */
int _isdigit(char *c)
{
	int k = 0;

	while (c[k] != '\0')
	{
		if (c[k] < '0' || c[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

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
 * main - entry of the program
 * @ac: arg counter
 * @av: array pointer of char
 * Return: 0
 */

int main(int ac, char *av[])
{
	int i, j, len1, len2, len, crr, num1, num2, *mul;
	char *n, *m;

	n = av[1], m = av[2];
	if (ac != 3 || !_isdigit(n) || !_isdigit(m))
		error();
	len1 = _strlen(n), len2 = _strlen(m), len = len1 + len2;
	mul = malloc(sizeof(int) * (len + 1));
	if (mul == NULL)
		return (1);
	len1--, len2--;
	for (i = 0; i < len; i++)
		mul[i] = 0;
	for (i = len2; i >= 0; i--)
	{
		crr = 0, num1 = n[i] - '0';
		for (j = len1; j >= 0; j--)
		{
			num2 = m[j] - '0', crr += mul[i + j + 1] + (num1  * num2);
			mul[i + j + 1] = crr % 10, crr /= 10;
		}
		if (crr > 0)
			mul[i + j + 1] += crr;
	}
	j = 0;
	for (i = 0; i < len; i++)
	{
		if (mul[i])
			j = 1;
		if (j)
			_putchar(mul[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n'), free(mul);
	return (0);
}
