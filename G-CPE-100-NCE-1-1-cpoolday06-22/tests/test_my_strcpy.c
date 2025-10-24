/*
** EPITECH PROJECT, 2025
** test_my_strcpy.c
** File description:
** same
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, copy_string_in_empty_array)
{
    char my_dest [6] = {0};
    char dest [6] = {0};

    my_strcpy(my_dest, "Hello") ;
    strcpy(dest, "Hello") ;
    cr_assert_str_eq(my_dest, dest);
}
