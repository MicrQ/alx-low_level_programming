/**
 * _strchr - locates a given character and returns a pointer to that character
 * @s: given string
 * @c: character to locate
 * Return: s from the located character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	
	return (0);
}
