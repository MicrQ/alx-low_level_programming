#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *path = getenv("PATH");
    char *token;

    if (path == NULL)
    {
        printf("Environment Not Found!\n");
        return (1);
    }
    token = strtok(path, ":");
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ":");
    }
    return (0);
}