/**
* _strpbrk - searches a string of any byte
* @s: given string
* @accept: set of characters
* Return: a pointer to the byte that matches @s
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return ('\0');
}
