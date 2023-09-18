#include "main.h"

/**
 * rev_string - returns the length of the given string
 * @s: is the string
 */

void rev_string(char *s)
{
	int j, i = 0;
	char *tp;
	char tmp;

	tp = s;
	while (*(s + i) != '\0')
		i++;
	i -= 1;
	j = 0;
	while (i >= 0)
	{
		tmp = *(tp + j);
		*(tp + j) = *(tp + i);
		*(tp + i) = tmp;
		i--;
		j++;
	}
	s = tp;
}
