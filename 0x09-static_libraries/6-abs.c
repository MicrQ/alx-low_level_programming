#include "main.h"

/**
 * _abs - computes absolute value of arg
 *
 * @x: will be computed
 * Return: the computed value
 */
int _abs(int x)
{
	if (x < 0)
		return (x * (-1));
	else
		return (x);
}
