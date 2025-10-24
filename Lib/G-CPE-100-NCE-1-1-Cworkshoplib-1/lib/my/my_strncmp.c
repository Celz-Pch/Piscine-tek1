/*
** EPITECH PROJECT, 2025
** my_strncmp
** File description:
** s1 s2 with n
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int result = 0;

    while (s1[i] != '\0' && s2[2] != '\0' && i < n) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (n > i) {
        return (s1[i] - s2[i]);
    } else {
        return 0;
    }
    return (0);
}
