/*
** EPITECH PROJECT, 2025
** btree
** File description:
** create_node
*/

#include "include/btree.h"
#include <stdlib.h>

btree_t *btree_create_node(void *item)
{
    btree_t *new_node = malloc(sizeof(btree_t));

    new_node->item = item;
    new_node->left = new_node->right;
    new_node->right = NULL;
    return new_node;
}
