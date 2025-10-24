/*
** EPITECH PROJECT, 2025
** my_str_isprintable.c
** File description:
** my_str_isprintable.c
*/

int my_str_isprintable(char const *str)
{
    int i;
    int is_print = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] <= 126) {
            is_print = 1;
        } else {
            return (0);
        }
    }
    if (is_print == 1) {
        return (1);
    }
    return (1);
}
