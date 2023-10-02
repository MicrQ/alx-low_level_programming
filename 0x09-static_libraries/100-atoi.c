#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string to number
 * @s: string
 * Return: 0
 */

int _atoi(char *s)
{
	int num = 0, i = 0, pm = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			pm = -1;
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		if (pm > 0 && (num > INT_MAX / 10 ||
					(num == INT_MAX / 10 && s[i] - '0' > -(INT_MIN % 10))))
			return (INT_MIN);
		num = num * 10 + pm * (s[i] - '0');
		i++;
	}
	return (num);
}
