/*
** EPITECH PROJECT, 2025
** mini_printf
** File description:
** min_printf
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "include/mystruct.h"
#include "include/myimport.h"

const mini_printf_t all_func[] = {
    {'i', print_i}, {'d', print_i}, {'c', print_c}, {'s', print_s},
    {'%', print_p}
};

int get_flags(va_list args, const char *p)
{
    int i = 0;

    for (int i = 0; i < sizeof(all_func) / sizeof(all_func[0]); i++) {
        if (all_func[i].key == *p) {
            return all_func[i].func(args);
        }
    }
    return 0;
}

int mini_printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    int take = 0;

    va_start(args, format);
    for (const char *p = format; *p != '\0'; p++) {
        if (*p == '%') {
            p++;
            take = get_flags(args, p);
            count = count + take;
        } else {
            count++;
            my_putchar(*p);
        }
    }
    va_end(args);
    return count;
}
