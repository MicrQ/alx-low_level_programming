#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	const int PASS_LENG = 8;
	char pass[8];
	char comb[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890abcdefghijklmnopqrstuvwxyz`~!@#$%^&*()-_=+[]{}';:/?.>,<";
	int combSize = sizeof(comb) - 1;
	int i, n;

	srand(time(NULL));
	for (i = 0; i < PASS_LENG; i++)
	{
		n = rand() % combSize;
		pass[i] = comb[n];
	}
	pass[PASS_LENG] = '\0';
	printf("%s\n", pass);
	return (0);
}
