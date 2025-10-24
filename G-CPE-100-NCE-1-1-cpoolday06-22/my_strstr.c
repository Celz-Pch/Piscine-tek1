/*
11;rgb:3030/0a0a/242461;7600;1c** EPITECH PROJECT, 2025
** my_strstr.c
** File description:
** my_strstr
*/

char *my_strstr(char *str, char *to_f)
{
    int i = 0;
    int k = 0;

    if (*to_f == '\0')
        return (str);
    while (str[i] != '\0') {
        k = 0;
        while (str[i + k] != '\0' && to_f[k] != '\0' && str[i + k] == to_f[k]) {
            k++;
        }
        if (to_f[k] == '\0')
            return (&str[i]);
        i++;
    }
    return 0;
}
