#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t i = getpid();
	printf("%u\n", i);
	return (0);
}
