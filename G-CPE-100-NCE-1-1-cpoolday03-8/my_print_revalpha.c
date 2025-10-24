/*
** EPITECH PROJECT, 2025
** my_print_revalpha
** File description:
** a function that return alphabet in lowercase but start with z
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    for (int i = 122; i >= 97; i--) {
        my_putchar(i);
    }
    my_putchar('\n');
    return 0;
}
