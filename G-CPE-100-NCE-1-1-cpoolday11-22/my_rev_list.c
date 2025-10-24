/*
** EPITECH PROJECT, 2025
** rev
** File description:
** rev
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/mylist.h"

int my_rev_list(linked_list_t **begin)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = *begin;
    linked_list_t *next = NULL;

    if (begin == NULL || *begin == NULL)
        return 0;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *begin = prev;
    return 0;
}
