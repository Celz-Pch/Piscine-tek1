/*
** EPITECH PROJECT, 2025
** rush5.c
** File description:
** rush5 squares
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return (0);
}

static int verif_number(int l, int h)
{
    if (l <= 0 || h <= 0) {
        write(2, "Invalid size\n", 13);
    }
    return 0;
}

static void display_star(int i, int j, int l, int h)
{
    if (l == 1) {
        my_putstr("B\n");
    } else {
        my_putstr("B");
    }
}

static void display_top_slash(int i, int j, int l, int h)
{
    if (i == h && j == l && l != 1 && h != 1) {
        my_putstr("A\n");
    } else if (i == 1 && j == 1 && l != 1 && h != 1) {
        my_putstr("A");
    } else {
        display_star(i, j, l, h);
    }
}

static void display_top_antislash(int i, int j, int l, int h)
{
    if (i == 1 && j == l && l != 1 && h != 1) {
        my_putstr("C\n");
    } else if (i == h && j == 1 && l != 1 && h != 1) {
        my_putstr("C");
    } else {
        display_star(i, j, l, h);
    }
}

static void display_top(int i, int j, int l, int h)
{
    if ((i == 1 && j == 1) || (i == h && j == l && l != 1 && h != 1)) {
        display_top_slash(i, j, l, h);
    } else if ((i == h && j == 1) || (i == 1 && j == l)) {
        display_top_antislash(i, j, l, h);
    } else {
        display_star(i, j, l, h);
    }
}

static void display_middle(int i, int j, int longueur, int hauteur)
{
    if (j == 1) {
        display_star(i, j, longueur, hauteur);
    } else if (j == longueur) {
        my_putstr("B\n");
    } else {
        my_putstr(" ");
    }
}

static void choose_display(int i, int j, int longueur, int hauteur)
{
    if (i == 1 || i == hauteur) {
        display_top(i, j, longueur, hauteur);
    }
    if (i != 1 && i != hauteur) {
        display_middle(i, j, longueur, hauteur);
    }
}

int rush(int longueur, int hauteur)
{
    verif_number(longueur, hauteur) == 1
    for (int i = 1; i <= hauteur; i++) {
        for (int j = 1; j <= longueur; j++) {
            choose_display(i, j, longueur, hauteur);
        }
    }
    return 0;
}
