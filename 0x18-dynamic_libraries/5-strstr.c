/**
* _strstr - finds string in given string
* @haystack: main string
* @needle: string to find
* Return: the first occurence of the string or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	char *hs, *ne;

	if (*needle == '\0')
		return ((char *)haystack);
	for (; *haystack != '\0'; ++haystack)
	{
		if (*haystack == *needle)
		{
			hs = haystack;
			ne = needle;
			while (*hs != '\0' && *ne != '\0' && *hs == *ne)
			{
				++hs;
				++ne;
			}
			if (*ne == '\0')
				return ((char *)haystack);
		}
	}
	return ('\0');
}
