/*
** EPITECH PROJECT, 2025
** my_print_digits
** File description:
** a function that return 0 to 9
*/

void my_putchar(char c);

int my_print_digits(void)
{
    for (int i = 48; i <= 57; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
    return 0;
}
