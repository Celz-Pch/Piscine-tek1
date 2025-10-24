/*
** EPITECH PROJECT, 2025
** my_evil_str.c
** File description:
** a function that reverse the string
*/

#include <stdio.h>

void my_putchar(char c);

int my_strlen2(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
    }
    return (i);
}

char *my_evil_str(char *str)
{
    int len = my_strlen2(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}
