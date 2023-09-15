#include "main.h"

/**
 * _isdigit - check if c is digit
 * @c: will be checked
 * Return: 1 if c is digit, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
