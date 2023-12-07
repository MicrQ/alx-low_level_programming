#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void)
{
	char *command = NULL, *argv[2];
	int status;
	pid_t pid;
	size_t len = 0;
	ssize_t n_read;

	while(1)
	{
		printf("#cisfun$ ");
		n_read = getline(&command, &len, stdin);//storing the length of the command
		if (n_read == -1){
			perror("getline: ");
			break;
		}
		if (command[n_read - 1] == '\n')//removing the newline terminator
			command[n_read - 1] = '\0';
		if (strcmp(command, "exit") == 0)//checking if the command is exit and termiating the program
			break;
		pid = fork();//creating a child process to excute the command
		if (pid == -1)
		{
			perror("fork : ");
			break;
		}
		else if (pid == 0)
		{
			/*
			* storing the given command to the argv and executing it in the child process
			*/
			argv[0] = command;
			argv[1] = NULL;
			execve(argv[0], argv, NULL);
			perror(argv[0]);
			free(command);
			exit(EXIT_FAILURE);
		}
		else
			wait(&status);//waiting for the child process to terminate
	}
	free(command);
	return (0);
}
