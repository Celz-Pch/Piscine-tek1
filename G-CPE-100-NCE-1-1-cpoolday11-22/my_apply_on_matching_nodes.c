/*
** EPITECH PROJECT, 2025
** my_apply_on_matching_nodes
** File description:
** my_apply_on_matching
*/

#include "include/mylist.h"
#include <stdlib.h>

int my_list_size_matching(linked_list_t const *begin)
{
    int i = 0;

    while (begin != NULL) {
        begin = begin->next;
        i++;
    }
    return i;
}

int my_apply_on_matching_nodes(linked_list_t *begin, int (*f)(),
    void const *data_ref, int (*cmp)())
{
    linked_list_t *temp = begin;

    for (int i = 0; i < my_list_size_matching(begin); i++) {
        if ((*cmp)(temp->data, data_ref) == 0) {
            (*f)(temp->data);
        }
        temp = temp->next;
    }
    return 0;
}
