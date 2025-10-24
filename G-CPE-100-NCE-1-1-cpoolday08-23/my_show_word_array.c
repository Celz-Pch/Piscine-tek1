/*
** EPITECH PROJECT, 2025
** my_show_word_array.c
** File description:
** show word array
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_show_word_array(char *const *tab)
{
    int i;

    for (i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putstr("\n");
    }
    return 0;
}
