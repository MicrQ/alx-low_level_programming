#include <stdarg.h>

/**
 * sum_them_all - adds each variable argument passed to it
 * @n: variable arguments
 * Return: 0 for success 
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ags;
	unsigned int i;

	if (n != 0)
	{
		va_start(ags, n);
		for (i = ags; i < n; i++)

	}
	return (0);
}
