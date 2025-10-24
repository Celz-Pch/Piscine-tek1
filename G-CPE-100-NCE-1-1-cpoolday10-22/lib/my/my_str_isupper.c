/*
** EPITECH PROJECT, 2025
** my_str_isupper
** File description:
** upper
*/

int my_str_isupper(char const *str)
{
    int i;
    int is_upper = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            is_upper = 1;
        } else {
            return (0);
        }
    }
    if (is_upper == 1) {
        return (1);
    }
    return (1);
}
