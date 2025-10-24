/*
** EPITECH PROJECT, 2025
** my_print_alpha.c
** File description:
** this is a function that return alphabet lowecase
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    for (int i = 97; i <= 122; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
    return 0;
}
