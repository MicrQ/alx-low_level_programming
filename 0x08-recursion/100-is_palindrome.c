/**
 * pal - check palindrome
 * @s: string to be check
 * @i: iterat
 * @l: length of s
 * Return: 1 if palindrome, else 0
 */

int pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (pal(s, i + 1,l - 1));
}

/**
 * stl_rec - length of a s
 * @ss: string
 * Return: length
 */

int stl_rec(char *ss)
{
	if (*ss == '\0')
		return (0);
	return (1 + stl_rec(ss + 1));
}

/**
 * is_palindrome - palindrome checker, checks if s is palindrome
 * @s: given string
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (pal(s, 0, stl_rec(s)));
}
