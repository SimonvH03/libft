#!/bin/bash
make -C .. -s all clean
cp ../libft.a ./
cc testmain.c libft.a -o test.a -g
valgrind ./test.a
rm test.a