/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** my.h
*/

#include <stdarg.h>

#ifndef LIB_H
    #define LIB_H

int my_putchar(char c);

int my_putstr(char const *str);

int my_put_nbr(int n);

int my_isneg(int nb);

void my_swap(int a, int b);

int my_strlen(char const *str);

int my_getnbr(char const *str);

void my_sort_int_array(int tab, int size);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char my_strcpy(char dest, char const src);

char my_strncpy(char dest, char const src, int n);

char my_revstr(char str);

char my_strstr(char str, char const to_find);

int my_strcmp(char const s1, char const s2);

int my_strncmp(char const s1, char const s2, int n);

char my_strupcase(char str);

char my_strlowcase(char str);

char my_strcapitalize(char str);

int my_str_isalpha(char const str);

int my_str_isnum(char const str);

int my_str_islower(char const str);

int my_str_isupper(char const str);

int my_str_isprintable(char const str);

int my_showstr(char const str);

int my_showmem(char conststr, int size);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

int my_putfloat(double f);

int print_i(va_list args, const char *p);

int print_c(va_list args, const char *p);

int print_s(va_list args, const char *p);

int print_p(va_list args, const char *p);

int my_printf(const char *format, ...);

int print_fl(va_list args, const char *p);

int print_o(va_list args, const char *p);

int print_u(va_list args, const char *p);

int my_print_p(va_list args, const char *p);

int print_x(va_list args, const char *p);

int print_majx(va_list args, const char *p);

int print_maje(va_list args, const char *p);

int print_e(va_list args, const char *p);

int guess_format(va_list args, const char *format);

int print_b(va_list args, const char *p);

int h_flag(va_list args, const char *p);

int print_mathis(va_list args, const char *p);

int my_print_hx(va_list args, const char *p);

int my_print_hu(va_list args, const char *p);

int my_print_hd(va_list args, const char *p);

int my_print_hmajx(va_list args, const char *p);

int my_print_ho(va_list args, const char *p);

int print_majfl(va_list args, const char *p);

int print_g(va_list args, const char *p);

void printf_e_pos(double e);

int hh_flag(va_list args, const char *p);

int my_print_hhd(va_list args, const char *p);

int my_print_hhmajx(va_list args, const char *p);

int my_print_hho(va_list args, const char *p);

int my_print_hhu(va_list args, const char *p);

int my_print_hhx(va_list args, const char *p);

#endif
