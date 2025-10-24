/*
** EPITECH PROJECT, 2025
** btree
** File description:
** prefix
*/

#include "include/btree.h"
#include <stdlib.h>

void btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
    (*applyf)(root->item);
    if (root->left != NULL) {
        btree_apply_prefix(root->left, applyf);
    }
    if (root->right != NULL) {
        btree_apply_prefix(root->right, applyf);
    }
}
