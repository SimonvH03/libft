#!/bin/bash
make -C .. -s all clean
mv ../libft.a ./
cc testmain.c libft.a -o test.a
./test.a
rm test.a