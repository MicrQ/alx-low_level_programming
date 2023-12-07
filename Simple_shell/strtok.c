#include <stdio.h>
#include <string.h>

int main(void)
{
	char *tok_str, *str = "Today is the day";

	tok_str = strtok(str, " ");
	printf("%s\n", tok_str);
	tok_str = strtok(NULL, " ");
        printf("%s\n", tok_str);
	
	return (0);
}


