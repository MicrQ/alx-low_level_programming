/**
 * _print_rev_recursion - prints a given string in reverse
 * @s: given string
 * @sp: revesed string
 */

void _print_rev_recursion(char *s, char *sp)
{
	if (*s == '\0')
		return;
        _print_rev_recursion(s + 1, sp);
        *sp = *s;
	sp++;
}

/**
 * is_palindrome - checks is the string is palindrome or not
 * @s: given string
 * Return: 1 if the string is palindrome. else returns 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	if (s == _print_rev_recursion(s, ' '))
		return (1);
	else
		return (0);
}
