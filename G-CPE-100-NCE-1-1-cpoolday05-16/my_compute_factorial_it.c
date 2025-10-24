/*
** EPITECH PROJECT, 2025
** my_factorial_it
** File description:
** fact it
*/

int my_compute_factorial_it(int nb)
{
    int x = nb;
    int fact = 1;

    if (x < 0 || x > 12) {
        return (0);
    }
    if (x == 0 || x == 1) {
        return (1);
    }
    while (x > 1) {
        fact *= x;
        x--;
    }
    return (fact);
}
