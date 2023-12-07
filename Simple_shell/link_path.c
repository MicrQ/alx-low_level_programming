#include <stdio.h>
#include <stdlib.h>
#include "str.h"
#include <string.h>

path_s *list_path(char *PATH)
{
    char *path = getenv(PATH);
    char *token;
    path_s *head = NULL, *ptr;
    
    if (path == NULL)
    {
        printf("Environment Failed\n");
        return (NULL);
    }

    token = strtok(path, ":");
    while (token != NULL)
    {
        ptr = malloc(sizeof(path_s));
        if (ptr == NULL)
            return (NULL);
        ptr->str = token;
        ptr->next = head;
        head = ptr;

        token = strtok(NULL, ":");
    }
    return (head);
}

int main(void)
{
    path_s *head = list_path("PATH");
    path_s *ptr;

    if (head == NULL)
        return 1;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%s\n", ptr->str);
        ptr = ptr->next;
    }

    return (0);
}