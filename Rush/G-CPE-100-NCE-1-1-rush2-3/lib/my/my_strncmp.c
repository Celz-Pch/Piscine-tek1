/*
** EPITECH PROJECT, 2025
** my_strncmp
** File description:
** s1 s2 with n
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i <= n) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return (0);
}
