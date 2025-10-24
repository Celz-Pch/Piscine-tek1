/*
** EPITECH PROJECT, 2025
** my_strupcase.C
** File description:
** the functions put all letter in upper case
*/

char *my_strupcase(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] - 32;
    }
    return str;
}
