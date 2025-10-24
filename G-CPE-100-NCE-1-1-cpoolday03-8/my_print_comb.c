/*
** EPITECH PROJECT, 2025
** my_print_comb.C
** File description:
** a function that return 3 digits but never the same
*/

void my_putchar(char c);

void putchar_all_comb(int a, int b, int c)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(c);
    if (!((a == 55) && (b == 56) && (c == 57))) {
        my_putchar(44);
        my_putchar(32);
    } else {
        my_putchar('\n');
    }
}

void boucle_c(int a, int b)
{
    int c = 0;

    for (c = b + 1; c < 58; c++) {
        putchar_all_comb(a, b, c);
    }
}

void boucle_b(int a)
{
    int b = 0;

    for (b = a + 1; b < 57; b++) {
        boucle_c(a, b);
    }
}

void boucle_a(void)
{
    int a = 0;

    for (a = 48; a < 56; a++) {
        boucle_b(a);
    }
}

int my_print_comb(void)
{
    boucle_a();
    return (0);
}
