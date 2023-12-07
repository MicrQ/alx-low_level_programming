#include <stdio.h>

int main(int argc, char **argv, char **env)
{
    unsigned int i = 0;
    (void) argc;
    (void) argv;
    while (env[i] != NULL)
    {
        printf("%s\n", env[i]);
        i++;
    }
    return (0);
}