/*
** EPITECH PROJECT, 2025
** my_put_nbr
** File description:
** put nbr
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
    }
    my_putchar('0' + (n % 10));
}

int main(void)
{
    my_put_nbr(-2147483648);
}
