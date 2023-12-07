#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char *args[] = {"/bin/ls","-l", NULL};
	execve("/bin/ls", args, NULL);
	printf("Error: ");
	return (0);
}
