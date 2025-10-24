#!/usr/bin/env bash
##
## EPITECH PROJECT, 2025
## build.sh
## File description:
## build.sh
##

clang -c *.c
ar rc libmy.a *.o
rm *.o
