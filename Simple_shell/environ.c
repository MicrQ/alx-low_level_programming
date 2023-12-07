#include <stdio.h>

int main(void)
{
    extern char **environ;
    unsigned int i = 0;


    while (environ[i] != NULL)
    {
        printf("%s\n", environ[i]);
        i++;
    }
}