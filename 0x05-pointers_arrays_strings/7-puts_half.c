#include "main.h"

/**
 * puts_half - prints the 2nd half of a string
 * @str: passed string
 */

void puts_half(char *str) {
	int half, i = 0;

	while (*(str + i) != '\0')
		i++;

	i -= 1;
	half = (i / 2) + 1;
	while (half <= i) {
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
