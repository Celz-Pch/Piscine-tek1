/*
** EPITECH PROJECT, 2025
** rush1.c
** File description:
** rush square
*/

#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return (0);
}

static int verif_number(int longueur, int hauteur)
{
    if (longueur <= 0 || hauteur <= 0) {
        my_putstr("Invalid size");
        return 1;
    }
    return 0;
}

static void display_top(int i, int j, int l, int h)
{
    if ((i == 1 && j == 1 && l != 1) || (i == h && j == 1 && l != 1)) {
        my_putchar('o');
    } else if ((i == h && j == l) || (i == 1 && j == l)) {
        my_putchar('o');
        my_putchar('\n');
    } else {
        my_putchar('-');
    }
}

static void display_middle(int i, int j, int longueur)
{
    if (j == 1 && i != 1 && longueur != 1) {
        my_putchar('|');
    } else if (j == longueur && i != 1) {
        my_putchar('|');
        my_putchar('\n');
    } else {
        my_putchar(' ');
    }
}

static void choose_display(int i, int j, int longueur, int hauteur)
{
    if (i == 1 || i == hauteur) {
        display_top(i, j, longueur, hauteur);
    }
    if (i != 1 && i != hauteur) {
        display_middle(i, j, longueur);
    }
}

int rush(int longueur, int hauteur)
{
    if (verif_number(longueur, hauteur) == 1) {
        return 0;
    }
    for (int i = 1; i <= hauteur; i++) {
        for (int j = 1; j <= longueur; j++) {
            choose_display(i, j, longueur, hauteur);
        }
    }
    return 0;
}

int main(void) {
    rush(10000,10000);
}
