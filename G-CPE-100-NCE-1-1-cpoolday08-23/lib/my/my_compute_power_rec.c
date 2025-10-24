/*
** EPITECH PROJECT, 2025
** my_compute_power_rec.c
** File description:
** power recursivité
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    } else {
        return nb * my_compute_power_rec(nb, p - 1);
    }
}
