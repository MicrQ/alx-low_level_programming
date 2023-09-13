#include "main.h"

/**
 * _isalpha - check if the arg is alphabet or not
 * @c:  will be checked
 * Return: returns 1 if c is alphabet. else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
