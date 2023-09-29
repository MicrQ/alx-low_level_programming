#include "main.h"

/**
 * _puts_recursion - works like the built in function 'puts', recursivly
 * @s: given string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
