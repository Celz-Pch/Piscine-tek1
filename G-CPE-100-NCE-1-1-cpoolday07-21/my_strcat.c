/*
** EPITECH PROJECT, 2025
** my_strcat.c
** File description:
** strcat
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    char *result;

    result = dest;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        result[i] = src[j];
        i++;
        j++;
    }
    result[i] = '\0';
    return (result);
}
