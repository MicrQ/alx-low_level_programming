#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t p_pid = getppid(), mid = getpid();
	printf("%u --- %u", p_pid, mid);
	return (0);
}
