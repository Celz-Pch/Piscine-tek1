/*
** EPITECH PROJECT, 2025
** all printf
** File description:
** func
*/

#include <stdarg.h>
#include "include/myimport.h"

int print_i(va_list args)
{
    int i = va_arg(args, int);

    return my_put_nbr(i);
}

int print_c(va_list args)
{
    char c = va_arg(args, int);

    return my_putchar(c);
}

int print_s(va_list args)
{
    char *s = va_arg(args, char*);

    return my_putstr(s);
}

int print_p(va_list args)
{
    return my_putchar('%');
}
