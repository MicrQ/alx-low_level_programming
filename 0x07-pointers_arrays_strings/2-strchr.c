/**
 * _strchr - locates a given character and returns a pointer to that character
 * @s: given string
 * @c: character to locate
 * Return: s from the located character c
 */

char *_strchr(char *s, char c)
{
	int flag = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			flag = 1;
			break;
		}
		s++;
	}
	if (flag == 1)
		return ((char *)s);
	else
		return ('\0');
}
