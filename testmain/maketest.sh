#!/bin/bash
make -C .. -s all clean
cp ../libft.a ./
cc testmain.c libft.a -o test.a
./test.a
rm test.a