#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints string variable arguments
 * @separator: a string used to separate the strings printed
 * @n: number of variable argument strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ags;
	unsigned int i;
	char *tmp;

	va_start(ags, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ags, char *);
		if (tmp == NULL)
			tmp = "(nil)";
		printf("%s", tmp);
		if (separator != NULL && i < n -1)
			printf("%s", separator);
	}
	printf("\n");
}
