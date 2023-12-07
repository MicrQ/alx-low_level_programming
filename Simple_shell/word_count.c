int word_count(char *str)
{
	int count = 1, i = 0, flag = 0;
	char last;

	if (str == NULL)
		return (-1);
		last = str[0];
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && last != ' ')
			flag = 1;
		else
			flag = 0;
		if (flag == 1){
			count++;
		}
		last = str[i]; 
		i++;
	}
	return (count);
}
