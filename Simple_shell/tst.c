#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(void){
	int status;
	pid_t child_pid;
    for (int i = 0; i < 5; ++i) {
        child_pid = fork();

        if (child_pid == 0) {
            // Child process
            printf("Child %d executing ls -l /tmp:\n", i + 1);
            execl("/bin/ls", "ls", "-l", (char *)NULL);
            perror("Error executing ls");
            exit(EXIT_FAILURE);
        } else if (child_pid > 0) {
            // Parent process
            wait(&status); // Wait for the child to exit
	    printf("finally");
        } else {
            perror("Error forking");
            exit(EXIT_FAILURE);
        }
    }

    printf("All child processes have completed.\n");
    return 0;
}
