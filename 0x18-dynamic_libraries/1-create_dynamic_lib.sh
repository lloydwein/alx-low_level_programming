#!/usr/bin/bash
gcc -Wall -c -fPIC *.c 
cc -shared -o liball.so *.o
