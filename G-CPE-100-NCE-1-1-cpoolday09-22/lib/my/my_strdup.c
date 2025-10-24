/*
** EPITECH PROJECT, 2025
** my_strdup.c
** File description:
** strdup
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen_strdup(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
    }
    return (i);
}

char *my_strcpy_strdup(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *my_strdup(char const *src)
{
    char *new_malloc_char;
    int len = my_strlen_strdup(src);

    new_malloc_char = malloc(sizeof(char) * len + 1);
    my_strcpy_strdup(new_malloc_char, src);
    return new_malloc_char;
}
