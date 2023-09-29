/**
 * _strlen_recursion - works like the built-in function 'strlen'
 * @s: gitven string
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	i = 1;
	return (i + _strlen_recursion(s + 1));
}
