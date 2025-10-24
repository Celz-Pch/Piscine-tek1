/*
** EPITECH PROJECT, 2025
** show word array
** File description:
** word array
*/

#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

int my_show_word_array(char *const *tab)
{
    int i;

    for (i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putstr("\n");
    }
    return 0;
}
