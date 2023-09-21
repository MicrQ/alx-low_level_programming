#include "main.h"

/**
 * infinite_add - adds string numbers
 * @n1: number1 of string type
 * @n2: of string type
 * @r: result of the addition
 * @size_r: size of r.
 * Return: r(result) will be the return  value
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int  i = 0, j = 0, k = 0, carry = 0, sum = 0;
	int len1 = 0, len2 = 0, len3 = 0;
	char tmp;

	while (n1[i] != '\0')
	{
		len1++;
		i++;
	}
	while (n2[j] != '\0')
	{
		len2++;
		j++;
	}
	while (i > 0 || j > 0)
	{
		if (len3 + 1 >= size_r)
			return (0);
		sum = carry + (i > 0 ? n1[i - 1] - '0' : 0) + (j > 0 ? n2[j - 1] - '0' : 0);
		carry = sum / 10;
		r[len3] = sum % 10 + '0';
		len3++;
		i--;
		j--;
	}
	if (carry > 0)
	{
		if (len3 + 1 >= size_r)
			return (0);
		r[len3] = carry + '0';
		len3++;
	}
	for (k = 0; k < len3 / 2; k++)
	{
		tmp = r[k];
		r[k] = r[len3 - k - 1];
		r[len3 - k - 1] = tmp;
	}
	r[len3] = '\0';
	return (r);
}
