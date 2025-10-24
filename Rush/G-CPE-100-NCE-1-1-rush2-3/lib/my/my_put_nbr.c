/*
** EPITECH PROJECT, 2025
** my_put_nbr
** File description:
** put nbr
*/

#include "../../include/my.h"

void my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
    }
    my_putchar('0' + (n % 10));
}
