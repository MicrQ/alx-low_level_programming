#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    extern char **environ;
    char *var_value = getenv("SHELL");

    printf("%s\n", var_value);
    return (0);
}