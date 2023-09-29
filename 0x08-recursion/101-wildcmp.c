/**
 * wildcmp - checks if strings are identical
 * @s1: string to be checked
 * @s2: string to compare
 * Return: 1 if considered as identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (s1, s2 + 1);
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
