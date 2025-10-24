/*
** EPITECH PROJECT, 2025
** my_compute_power_it.c
** File description:
** functions that do power
*/

int my_compute_power_it(int nb, int p)
{
    int nb1 = nb;
    
    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    for (int i = 0; i < p - 1; i++) {
        nb1 = nb1 * nb;
    }
    return nb1;
}
