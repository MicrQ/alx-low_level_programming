#include "main.h"

/**
 * main - entry point
 * Return: 0 on success and 1 in failure
 *
 */

int main(void)
{
	int status;
	pid_t pid;
	size_t len = 0;
	char *command = NULL, *argv[2], *envp[] = { NULL };

	while (1)
	{
		printf("#cisfun$ ");
		if (getline(&command, &len, stdin) == -1)
		{
			printf("\n"); /* handle Ctrl + D */
			break;
		}
		if (command[strlen(command) - 1] == '\n')
			command[strlen(command) - 1] = '\0';
		/* removin spaces, assuming 1 word  */
		argv[0] = strtok(command, " "), argv[1] = NULL;
		pid = fork();
		if (pid == -1)
		{
			perror("fork");
			free(command);
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			execve(argv[0], argv, envp);
			perror("execve");

			exit(EXIT_FAILURE);
		}
		else
			wait(&status);
		free(command);
	}
	free(command);
	return (0);
}

























