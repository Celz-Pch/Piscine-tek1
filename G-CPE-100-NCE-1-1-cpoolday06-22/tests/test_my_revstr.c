/*
** EPITECH PROJECT, 2025
** revstr test
** File description:
** test rev str
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, copy_string_in_empty_array)
{
    char dest[5] = "hello";
    my_revstr(dest);
    cr_assert_str_eq(dest, "olleh");
}
