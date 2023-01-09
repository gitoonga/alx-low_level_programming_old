#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -cr libmy.a *.o
ar -rc liball.a *.o
ranlib liball.a
