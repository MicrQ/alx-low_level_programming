#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a', Ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (Ch <= 'Z')
	{
		putchar(Ch);
		Ch++;
	}
	putchar('\n');
	return (0);
}
