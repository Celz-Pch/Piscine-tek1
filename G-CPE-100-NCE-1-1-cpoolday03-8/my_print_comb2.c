/*
** EPITECH PROJECT, 2025
** my_print_comb2.c
** File description:
** a function that send 2 digits of 2 digits
*/

void my_putchar(char c);

void putchar_all(int a, int b)
{
    my_putchar((a / 10) + '0');
    my_putchar((a % 10) + '0');
    my_putchar(' ');
    my_putchar((b / 10) + '0');
    my_putchar((b % 10) + '0');
    if (!(a == 98 && b == 99)) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb2(void)
{
    int a;
    int b;

    for (a = 0; a <= 98; a++) {
        for (b = a + 1; b <= 99; b++) {
            putchar_all(a, b);
        }
    }
    my_putchar('\n');
    return 0;
}
