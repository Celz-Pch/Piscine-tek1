/*
** EPITECH PROJECT, 2025
** my_compute_square_root.c
** File description:
** this is a function that return square root
*/

int my_compute_square_root(int nb)
{
    int x = 0;

    if (nb < 0 || nb == 0) {
        return (0);
    }
    while (x * x != nb) {
        x = x + 1;
        if (x > nb) {
            return (0);
        }
    }
    return (x);
}
