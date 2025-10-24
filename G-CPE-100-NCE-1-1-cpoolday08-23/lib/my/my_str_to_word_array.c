/*
** EPITECH PROJECT, 2025
** my_str_to_word_array
** File description:
** str to word array
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

static int is_letter(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}

int is_digits(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int word_count(char const *str)
{
    int i;
    int count;

    for (i = 0; str[i] != '\0'; i++) {
        if (is_letter(str[i]) == 0 && is_digits(str[i]) == 0) {
            count++;
        }
    }
    return count;
}

int word_taille(char const *str, int i)
{
    int j;
    int taille = 0;

    for (j = 0; is_letter(str[j]) == 1 || is_digits(str[j]) == 1; j++) {
        taille++;
    }
    return taille;
}

static int my_show_word_array(char *const *tab)
{
    int i;

    for (i = 0; tab[i] != 0; i++) {
        printf("%s", (tab[i]));
        printf("\n");
    }
    return 0;
}

char **my_str_to_word_array(char const *str)
{
    char **word_array;
    char *word_save;
    int i;
    int j;
    int col = 0;

    word_array = malloc(sizeof(char *) * (my_strlen(str) + 1));
    for (i = 0; str[i] != '\0' && col < word_count(str); i++) {
        word_save = malloc(sizeof(char) * (word_taille(str, i) + 1));
        for (j = 0; is_letter(str[i]) == 1 || is_digits(str[i]) == 1; j++) {
            word_save[j] = str[i];
            i++;
        }
        if (j > 0) {
            word_save[j] = '\0';
            word_array[col] = word_save;
            col++;
        }
        j = 0;
    }
    return (word_array);
}
