/*
** EPITECH PROJECT, 2025
** params to array
** File description:
** params to array
*/

#include <stdio.h>
#include "include/my.h"
#include <stdlib.h>

struct info_param
{
    int length;
    char *str;
    char *copy;
    char **word_array;
};

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *save;
    int i;

    save = malloc(sizeof(struct info_param) * ac);
    for (i = 0; i < ac; i++) {
        save[i].length = my_strlen(av[i]);
        save[i].str = av[i];
        save[i].copy = my_strdup(av[i]);
        save[i].word_array = my_str_to_word_array(concat_params(ac, av));
    }
    return (save);
}


int main(int argc, char **argv)
{
    my_params_to_array(argc, argv);
}
