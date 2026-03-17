#!/bin/bash
cc -Wall -Wextra -Werror -c *.c
ar rc libft.a
ranlib libft.a
rm -f *.o
