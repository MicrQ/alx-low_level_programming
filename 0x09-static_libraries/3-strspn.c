/**
* _strspn - gets the length of substring same as
* made with charachters in @accept
* @s: given string
* @accept: characters to check in @s
* Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				bytes++;
		}
		if (s[i] == ' ')
			break;
	}
	return (bytes);
}
