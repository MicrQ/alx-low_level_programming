#include <stdio.h>
#include "main.h"


void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

int main(void){
    char buf[98] = {0x00};
simple_print_buffer(buf,98);
    _memset(buf,0x01,95);
    simple_print_buffer(buf,98);
    return 0;
}