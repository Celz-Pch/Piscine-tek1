/*
** EPITECH PROJECT, 2025
** my_concat_list.c
** File description:
** my_concat_list.c
*/

#include <stdlib.h>
#include "include/mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *tmp = *begin1;

    if (begin1 == NULL)
        return;
    if (*begin1 == NULL) {
        *begin1 = begin2;
        return;
    }
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = begin2;
}
