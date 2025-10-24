/*
** EPITECH PROJECT, 2025
** delete_nodes
** File description:
** delete_nodes
*/

#include "include/mylist.h"
#include <stdlib.h>
#include <stdio.h>

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *prev = *begin;
    linked_list_t *current = prev->next;

    if (begin == NULL || *begin == NULL)
        return 0;
    while (current) {
        if ((*cmp)(current->data, data_ref) == 0) {
            prev->next = current->next;
            free(current->data);
            free(current);
            current = prev->next;
        } else {
            prev = current;
            current = current->next;
        }
    }
    return 0;
}
