/*
** EPITECH PROJECT, 2025
** my_strncpy.c
** File description:
** my_strncpy
*/

int get_len_ncpy(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
    }
    return (i);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int len = get_len_ncpy(src);

    for (i = 0; i <= n; i++) {
        dest[i] = src[i];
    }
    if (n > len) {
        dest[i] = '\0';
    }
    return (dest);
}
