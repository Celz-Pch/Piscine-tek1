/*
** EPITECH PROJECT, 2025
** step2
** File description:
** step2
*/

#include <unistd.h>
#include <stdio.h>
#include "include/my.h"

char my_charlowcase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

static float my_putfloat(float number)
{
    int nbm = number;
    float nbm2 = number - nbm;
    int nbm3 = nbm2 * 100;

    my_put_nbr(nbm);
    my_putchar('.');
    my_put_nbr(nbm3);
    return 0;
}

static float get_pourcentage(int word_count, char **av)
{
    int i;
    int number_of_letter = 0;

    for (i = 0; av[1][i] != '\0'; i++) {
        if ((av[1][i] >= 65 && av[1][i] <= 90)
            || (av[1][i] >= 97 && av[1][i] <= 122))
            number_of_letter++;
    }
    return (float)word_count * 100 / number_of_letter;
}

void afficher_info(char **av, int word_count, float pourcentage, int j)
{
    my_putchar(av[j][0]);
    my_putchar(':');
    my_put_nbr(word_count);
    my_putchar('(');
    my_putfloat(pourcentage);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

int calcul_number(int ac, char **av, int j)
{
    int i;
    int x = j;
    int word_count = 0;
    float pourcentage;

    if (j == ac) {
        return 0;
    }
    for (i = 0; av[1][i] != '\0'; i++) {
        if (my_charlowcase(av[1][i]) == my_charlowcase(av[j][0])) {
            word_count++;
        }
    }
    pourcentage = get_pourcentage(word_count, av);
    afficher_info(av, word_count, pourcentage, x);
    return calcul_number(ac, av, j + 1);
}

int step(int ac, char **av)
{
    int j = 2;

    if (ac < 3) {
        write(2, "84", 22);
        return 84;
    }
    calcul_number(ac, av, j);
    return 0;
}

int main(int argc, char **argv)
{
    step(argc, argv);
}
