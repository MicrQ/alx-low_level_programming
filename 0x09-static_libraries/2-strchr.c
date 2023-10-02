/**
 * _strchr - locates a given character and returns a pointer to that character
 * @s: given string
 * @c: character to locate
 * Return: s from the located character c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');
}
