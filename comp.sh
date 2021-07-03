#!/bin/env sh


gcc -std=c99 -c ./*.c

gcc -std=c99 ./*.o -o lc

rm -rf ./*.o
