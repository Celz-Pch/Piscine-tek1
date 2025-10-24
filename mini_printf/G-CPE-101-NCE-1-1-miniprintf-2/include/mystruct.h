/*
** EPITECH PROJECT, 2025
** mystruct
** File description:
** struct
*/

#include <stdarg.h>

#ifndef MY_STRUCT
    #define MY_STRUCT

typedef struct mini_printf {
    char key;
    int (*func)(va_list args);
} mini_printf_t;

#endif
