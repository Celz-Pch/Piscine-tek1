/*
** EPITECH PROJECT, 2025
** my_revstr
** File description:
** reverse an str
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
    }
    return (i);
}

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}
