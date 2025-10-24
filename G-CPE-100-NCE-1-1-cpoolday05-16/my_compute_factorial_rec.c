/*
** EPITECH PROJECT, 2025
** my_compute_factorial_rec.c
** File description:
** factoriel with rec
*/

int my_compute_factorial_rec(int n)
{
    if (n < 0 || n > 12) {
        return (0);
    }
    if (n == 0) {
        return (1);
    } else {
        return n * my_compute_factorial_rec(n - 1);
    }
}
