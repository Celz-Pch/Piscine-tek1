/*
** EPITECH PROJECT, 2025
** do-op
** File description:
** do-op
*/

#include <stdio.h>

int verifnumber(char const *str)
{
    int x;
    int is_int = 0;

    for (x = 0; str[x] != '\0'; x++) {
        if (str[x] > 47 && str[x] < 59) {
            is_int++;
        }
    }
    if (is_int >= 10) {
        return 1;
    }
    return 0;
}

int getnbr(char const *str)
{
    int i;
    int stock = 0;
    int negative = 0;
    int first = 0;

    if (verifnumber(str) == 1) {
        return 0;
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 45) {
            negative = 1;
            i++;
        }
        if (str[i] > 47 && str[i] < 59) {
            stock = (stock * 10) + (str[i] - 48);
            first = 1;
        }
        if (str[i] < 48 && str[i] > 58 && first == 1) {
            printf("in");
            return stock;
        }
    }
    if (negative == 1) {
        stock = stock * (-1);
    }
    return stock;
}

int calcul_doop(int nbm1, char ope, int nbm2)
{
    printf("%d\n%d", nbm1, nbm2);
    if (ope == '+') {
        printf("ok");
        return (nbm1 + nbm2);
    }
    if (ope == '-') {
        printf("%d \n %d", nbm1, nbm2);
        return (nbm1 - nbm2);
    }
    if (ope == '*') {
        printf("hello");
	return (nbm1 * nbm2);
    }
    if (ope == '/') {
	return (nbm1 / nbm2);
    }
    return 0;
}

int doop(int ac, char **av)
{
    int i;
    int nbm1;
    int nbm2;
    char ope;
    int result;

    if (ac < 3) {
        return 84;
    }
    for (i = 1; i < ac; i++) {
        if (i == 1) {
            nbm1 = getnbr(av[i]);
        }
        if (i == 2) {
            ope = *av[i];
        }
        if (i == 3) {
            nbm2 = getnbr(av[i]);
        }
    }

    return calcul_doop(nbm1, ope, nbm2);
}

int main(int argc, char **argv)
{
    doop(argc, argv);
}
