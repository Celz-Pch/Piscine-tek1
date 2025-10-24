/*
** EPITECH PROJECT, 2025
** my_isneg
** File description:
** a function that return N if its negative and P if its positive
*/

#include "../../include/my.h"

int my_isneg(int x)
{
    if (x >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    my_putchar('\n');
    return 0;
}
