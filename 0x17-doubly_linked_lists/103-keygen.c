#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int len = 0, i, j = 0;
    char *keygen;

    if (argc == 2)
    {
        len = strlen(argv[1]);
        keygen = malloc(sizeof(char) * len + 1);
        if (!keygen)
            return (-1);
        for (i = len - 1; i >= 0; i--)
        {
            keygen[j] = argv[1][i] + i;
            j++;
        }
        keygen[j] = '\0';
        printf("%s\n", keygen);
    }
    return (0);
}