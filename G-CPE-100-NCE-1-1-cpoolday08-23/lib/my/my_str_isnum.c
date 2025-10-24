/*
** EPITECH PROJECT, 2025
** my_str_isnum
** File description:
** isnum
*/

int my_str_isnum(char const *str)
{
    int i;
    int is_num = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            is_num = 1;
        } else {
            return (0);
        }
    }
    if (is_num == 1) {
        return (1);
    }
    return (1);
}
