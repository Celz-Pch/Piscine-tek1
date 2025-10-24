/*
** EPITECH PROJECT, 2025
** my_strlowcase.c
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 'Z' && str[i] >= 'A') {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
