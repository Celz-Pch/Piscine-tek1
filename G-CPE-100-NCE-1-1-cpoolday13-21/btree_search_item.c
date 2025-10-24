/*
** EPITECH PROJECT, 2025
** btree
** File description:
** search item
*/

#include <stdlib.h>
#include "include/btree.h"

void *btree_search_item(btree_t const *root, void const *data_ref,
                        int (*cmpf)())
{
    if (root == NULL)
        return (0);
    if ((*cmpf)(root->item, data_ref) == 0)
        return (root->item);
    if ((*cmpf)(root->item, data_ref) < 0)
        return (btree_search_item(root->left, data_ref, cmpf));
    return (btree_search_item(root->right, data_ref, cmpf));
}
