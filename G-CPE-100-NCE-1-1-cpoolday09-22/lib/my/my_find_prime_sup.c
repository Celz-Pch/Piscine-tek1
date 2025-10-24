/*
** EPITECH PROJECT, 2025
** my_find_prime_sup.c
** File description:
** give a prime numnber if the number give is not prime add 1
*/

int my_find_prime_sup(int nb)
{
    int is_prime = 0;
    int i = 0;

    for (i = 1; i <= nb; i++) {
        if (nb % i == 0) {
            is_prime++;
        }
    }
    if (is_prime == 2) {
        return nb;
    } else {
        return my_find_prime_sup(nb + 1);
    }
}
