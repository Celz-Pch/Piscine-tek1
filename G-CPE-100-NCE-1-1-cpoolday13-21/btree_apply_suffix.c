/*
** EPITECH PROJECT, 2025
** btree
** File description:
** suffix
*/

#include "include/btree.h"
#include <stdlib.h>

void btree_apply_suffix(btree_t *root, int (*applyf)(void *))
{
    if (root->left != NULL) {
        btree_apply_suffix(root->left, applyf);
    }
    if (root->right != NULL) {
        btree_apply_suffix(root->right, applyf);
    }
    (*applyf)(root->item);
}
