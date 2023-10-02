#! /bin/bash
gcc -Wall -Werror -Wextra -pendantic -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
