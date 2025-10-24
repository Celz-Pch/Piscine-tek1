/*
** EPITECH PROJECT, 2025
** dd
** File description:
** dd
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

void my_putchar(char c)
{
    write( 1, &c, 1);
}

int my_put_nbr( int nb )
{
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb > 9)
    {
        my_putchar((nb / 10) + '0');
        my_putchar((nb % 10) + '0');
    }
    else
    {
        nb += '0';
        write(1, &nb, 1);
    }
    return (0);
}

int main()
{
    my_put_nbr(42);
    my_put_nbr(0);
    my_put_nbr(-2147483647);
}

