/*
** EPITECH PROJECT, 2025
** btree_apply
** File description:
** infix
*/

#include "include/btree.h"
#include <stdlib.h>

void btree_apply_infix(btree_t *root, int (*applyf)(void *))
{
    if (root->left != NULL) {
        btree_apply_infix(root->left, applyf);
    }
    (*applyf)(root->item);
    if (root->right != NULL) {
        btree_apply_infix(root->right, applyf);
    }
}
