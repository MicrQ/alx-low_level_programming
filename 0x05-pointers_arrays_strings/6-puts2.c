#include "main.h"

/**
 * puts2 - prints every other character starting from the 1st 
 * @str: given string
 */

void puts2(char *str)
{
	int i = 0, j;

	while (*(str + i) != '\0')
		i++;
	j = 0;
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
