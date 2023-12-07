#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    struct stat files;
    int i;

    if (argc < 2)
    {
        printf("Usage: %s filename ...\n", argv[0]);
        return (1);
    }
    for (i = 1; argv[i] != NULL; i++)
    {
        if (stat(argv[i], &files) == 0)
        {
            printf("File is Found\n");
        }
        else
            printf("File is Not Found\n");
    }
    return (0);
}