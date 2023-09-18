#include "main.h"

/**
 * swap_int - swaps thr given parameters value
 * @a: number1 to be swaped
 * @b: number2 to be swaped
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
