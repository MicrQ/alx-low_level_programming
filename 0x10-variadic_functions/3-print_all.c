#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything passed to it
 * @format: the variable arguments format
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *str;
	va_list ags;

	va_start(ags, format);
	while (format[i] != '\0' && format != NULL)
	{
		flag = 1;
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ags, int));
				break;
			case 'c':
				printf("%c", va_arg(ags, int));
				break;
			case 'f':
				printf("%f", va_arg(ags, double));
				break;
			case 's':
				str = va_arg(ags, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				flag = 0;
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && flag == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ags);
}
