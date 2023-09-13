#include "main.h"

/**
 * _islower - checks if the character is lower
 *
 * Return: 1 if it is lower, 0 if not
 * @c: will be checked
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
