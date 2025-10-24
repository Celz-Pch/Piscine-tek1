/*
** EPITECH PROJECT, 2025
** concat
** File description:
** concat
*/

#include <stdio.h>
#include <stdlib.h>

int my_putstr(char const *str);

char *concat_params(int argc, char **argv)
{
    char *result;
    int total_len = 0;
    int pos = 0;

    for (int i = 0; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++)
            total_len++;
    }
    result = malloc(total_len + argc + 1);
    for (int i = 0; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            result[pos] = result[pos] + argv[i][j];
            pos++;
        }
        result[pos] = result[pos] + '\n';
        pos++;
    }
    result[pos] = '\0';
    return result;
}
