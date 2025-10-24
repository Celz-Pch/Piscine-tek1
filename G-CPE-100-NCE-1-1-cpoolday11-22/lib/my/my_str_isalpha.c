/*
** EPITECH PROJECT, 2025
** my_str_isalpha.c
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int i;
    int is_alpha = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] < 91 && str[i] > 64 || str[i] > 96 && str[i] < 123) {
            is_alpha = 1;
        } else {
            return (0);
        }
    }
    if (is_alpha == 1) {
        return (1);
    }
    return (1);
}
