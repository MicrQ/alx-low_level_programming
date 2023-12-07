#include "main.h"

/**
 * main - entry point of the program
 * Return: 0 on success and 1 on failure
 */

int main(int argc, char *argv[])
{
	char *args[2], *command = NULL;
	size_t len = 0;
	pid_t pid;

	if (argc < 2)
		(void) argv;

	while (1)
	{
		if (getline(&command, &len, stdin) == -1)
		{
			perror("getline");
			free(command);
			exit(EXIT_FAILURE);
		}
		else
		{
			if (command[strlen(command) - 1] == '\n')
				command[strlen(command) - 1] = '\0';
			args[0] = strtok(command, " "), args[1] = NULL;
			pid = fork();
			if (pid == -1)
			{
				free(command);
				perror("fork");
				exit(EXIT_FAILURE);
			}
			else if (pid == 0)
			{
				execve(args[0], args, NULL);
				perror(argv[0]);
				free(command);
				exit(EXIT_FAILURE);
			}
			else
				wait(NULL);
		}
		free(command);
	}
	return (0);
}



















