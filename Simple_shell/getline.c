#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *command = NULL;
	size_t command_length = 0;

	printf("$ ");
	if ((getline(&command, &command_length, stdin)) != -1)
		printf("%s\n", command);
	else
		perror("Error: ");
	free(command);
	return (0);
}
