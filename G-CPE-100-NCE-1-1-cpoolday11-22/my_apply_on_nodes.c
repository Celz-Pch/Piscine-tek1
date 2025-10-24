/*
** EPITECH PROJECT, 2025
** apply_on_nodes
** File description:
** apply_on_node
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/mylist.h"

int my_list_size_apply(linked_list_t const *begin)
{
    int i = 0;

    while (begin != NULL) {
        begin = begin->next;
        i++;
    }
    return i;
}

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    linked_list_t *list = begin;

    for (int i = 0; i < my_list_size_apply(begin); i++) {
        (*f)(list->data);
        list = list->next;
    }
    return 0;
}
