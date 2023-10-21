#include <stdio.h>

/**
 * bfMain - will be printed before main
 */
void bfMain(void) __attribute__((constructor));
void bfMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
