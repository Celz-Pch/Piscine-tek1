/*
** EPITECH PROJECT, 2025
** my_strcapitalize.c
** File description:
** capi
*/

static int is_uppercase(char c)
{
    return (c > 64 && c < 91);
}

static int is_lowercase(char c)
{
    return (c > 96 && c < 123);
}

static int is_digits(char c)
{
    return (is_uppercase(c) || is_lowercase(c) || (c >= '0' && c <= '9'));
}

char to_uppercase(char c)
{
    if (is_lowercase(c))
        return c - 32;
    return c;
}

char to_lowercase(char c)
{
    if (is_uppercase(c))
        return c + 32;
    return c;
}

char process_char(char c, int is_word_start)
{
    if (is_word_start)
        return to_uppercase(c);
    return to_lowercase(c);
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    int is_word_start = 1;

    for (i = 0; str[i] != '\0'; i++) {
        if (is_uppercase(str[i]) || is_lowercase(str[i])) {
            str[i] = process_char(str[i], is_word_start);
            is_word_start = 0;
        } else {
            is_word_start = !is_digits(str[i]);
        }
    }
    return str;
}
