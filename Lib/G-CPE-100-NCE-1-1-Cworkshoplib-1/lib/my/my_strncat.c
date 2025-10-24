/*
** EPITECH PROJECT, 2025
** my_strncat
** File description:
** strncat
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;
    char *result;

    result = dest;
    while (dest[i] != '\0') {
        i++;
    }
    while (j < nb && src[j] != '\0') {
        result[i] = src[j];
        i++;
        j++;
    }
    result[i] = '\0';
    return (result);
}
