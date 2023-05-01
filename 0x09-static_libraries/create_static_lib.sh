#!/bin/bash

gcc -c -Wall -Werror -Wextra *.c
ar -rc libmy.a *.o
ranlib libmy.a
ar -rcs libmy.a *.o
