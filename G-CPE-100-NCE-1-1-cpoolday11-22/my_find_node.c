/*
** EPITECH PROJECT, 2025
** my
** File description:
** find node
*/

#include "include/mylist.h"
#include <stdlib.h>
#include <stdio.h>

linked_list_t *my_find_node(linked_list_t const *begin,
    void const *data_ref, int (*cmp)())
{
    linked_list_t *tmp = (linked_list_t *)begin;

    while (tmp != NULL) {
        if ((*cmp)(tmp->data, data_ref) == 0) {
            return tmp;
        }
        tmp = tmp->next;
    }
    return 0;
}
