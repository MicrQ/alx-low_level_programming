#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int i = 0, j, sum = 0;
	int pass[64];

	srand(time(NULL));
	while (i < 64)
	{
		pass[i] = rand() % 78;
		sum += '0' + pass[i];
		putchar('0' + pass[i]);
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum = sum + j;
			putchar('0' + j);
			break;
		}
		i++;
	}
	return (0);
}
