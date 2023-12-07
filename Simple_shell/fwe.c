#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include  <sys/wait.h>
#include <stdlib.h>

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int i, status;
	pid_t id;
	for (i = 0; i < 5; i++)
	{
		id = fork();
		if (id == 0)
		{
			printf("child %d",i + 1);
			execve(argv[0], argv, NULL);
			perror("execve failed: ");
			exit(1);
		}
		else if (id > 0)
		{
			printf("parent is here");
			wait(&status);
		}
		else
		{
			perror("failure of fork");
			exit(1);
		}

	}
	printf("Everything is done");

			
    return 0;
}
