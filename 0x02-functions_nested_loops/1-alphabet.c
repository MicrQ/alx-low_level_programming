#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
