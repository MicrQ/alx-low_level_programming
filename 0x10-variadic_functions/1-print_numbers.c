#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers passed as optional argument
 * @separator: character used to separate the printed numbers
 * @n: number of optional elements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ags;
	unsigned int i;

	va_start(ags, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ags, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ags);
}
