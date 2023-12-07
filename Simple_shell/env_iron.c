#include <stdio.h>

int main(int argc, char **argv, char **env)
{
    extern char **environ;
    (void) argc;
    (void) argv;

    printf("Address of env = %p\n", env);
    printf("Address of environ = %p\n", environ);
    return (0);
}