/*
11;rgb:1e1e/1e1e/1e1e** EPITECH PROJECT, 2025
** header
** File description:
** header
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/mylist.h"

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *list = NULL;
    linked_list_t *stock;

    for (int i = 0; i < ac; i++) {
        stock = malloc(sizeof(linked_list_t));
        stock->data = av[i];
        stock->next = list;
        list = stock;
    }
    return list;
}
