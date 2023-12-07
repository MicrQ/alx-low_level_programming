#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	int id;
	
	id = fork();
	if (id != 0)
		fork();


	printf("Fork test\n");
	return (0);
}
