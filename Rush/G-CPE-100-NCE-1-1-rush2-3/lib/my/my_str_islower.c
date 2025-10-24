/*
** EPITECH PROJECT, 2025
** my_str_islower
** File description:
** islower
*/

int my_str_islower(char const *str)
{
    int i;
    int is_lower = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            is_lower = 1;
        } else {
            return (0);
        }
    }
    if (is_lower == 1) {
        return (1);
    }
    return (1);
}
