/*
** EPITECH PROJECT, 2025
** my_prime_is.c
** File description:
** a functions that return prime number
*/

int my_is_prime(int nb)
{
    int is_prime = 0;
    int i = 0;

    for (i = 1; i <= nb; i++) {
        if (nb % i == 0) {
            is_prime++;
        }
    }
    if (is_prime == 2) {
        return (1);
    } else {
        return (0);
    }
}
