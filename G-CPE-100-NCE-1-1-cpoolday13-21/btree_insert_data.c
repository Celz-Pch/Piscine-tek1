/*
** EPITECH PROJECT, 2025
** btree
** File description:
** insert data
*/

#include <stdlib.h>
#include "include/btree.h"

void btree_insert_data(btree_t **root, void *item, int (*cmpf)())
{
    if (root == NULL || item == NULL) {
        return;
    }
    if (*root == NULL) {
        *root = btree_create_node(item);
    }
    if (cmpf(item, (*root)->item) < 0) {
        btree_insert_data(&(*root)->left, item, cmpf);
    } else {
        btree_insert_data(&(*root)->right, item, cmpf);
    }
}
