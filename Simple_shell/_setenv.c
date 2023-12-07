#include <stdio.h>
#include <stdlib.h>

int _setenv(const char *name, const char *value, int overwrite)
{
    char *env;

    if (name == NULL || value == NULL)
        return (-1);
    env = getenv(name);
    if (env == NULL)
    {
        printf
        return
    }
}


int main(void)
{
    
}