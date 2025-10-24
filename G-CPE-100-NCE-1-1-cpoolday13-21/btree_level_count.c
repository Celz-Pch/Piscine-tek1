/*
** EPITECH PROJECT, 2025
** btree
** File description:
** level count
*/

#include <stdlib.h>
#include "include/btree.h"
#include <stddef.h>

int get_max_value(int a, int b)
{
    if (a > b)
        return (a);
    return (b);
}

size_t btree_level_count(btree_t const *root)
{
    int prof_gauche;
    int prof_droit;
    int prof_max;

    if (root == NULL)
        return (0);
    if (root->left) {
        prof_gauche = btree_level_count(root->left);
    } else {
        prof_gauche = 0;
    }
    if (root->right) {
        prof_droit = btree_level_count(root->right);
    } else {
        prof_droit = 0;
    }
    prof_max = get_max_value(prof_gauche, prof_droit);
    return (prof_max + 1);
}
