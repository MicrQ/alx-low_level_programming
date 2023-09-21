#include "main.h"

/**
 * leet - encodes a string to 1337
 * @c: strint to be encoded
 * Return: c will be returned.
 */

char *leet(char *c)
{
  int i = 0;
  char ch;

  while (c[i] != '\0')
  {
		ch = c[i];
		if (ch == 'a' || ch == 'A')
			c[i] = '0' + 4;
		else if (ch == 'e' || ch == 'E')
			c[i] = '0' + 3;
		else if (ch == 'o' || ch == 'O')
			c[i] = '0';
		else if (ch == 't' || ch == 'T')
			c[i] = '0' + 7;
		else if (ch == 'l' || ch == 'L')
			c[i] = '0' + 1;

		i++;
	}
	return (c);
}
