/*
** EPITECH PROJECT, 2025
** my_isneg
** File description:
** a function that return N if its negative and P if its positive
*/

void my_putchar(char c);

int my_isneg(int x)
{
    if (x >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    my_putchar('\n');
    return 0;
}
