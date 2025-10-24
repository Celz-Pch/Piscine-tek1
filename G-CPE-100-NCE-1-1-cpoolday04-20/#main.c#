
/*
** EPITECH PROJECT, 2025
** fubdfbioeub
** File description:
** dfbueob
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1,&c,1);
}

int is_digits(int x)
{
    int i = 0;
    char digits[] = "0123456789";
    while (i <= 9) {
        if (x == digits[i]) {
            i++;
            printf("is number %d \n", x);
            return (1);
        } else {
            printf("not number %c \n", x);
            i++;
        }
    }
    i = 0;
    return (0);
}

int main()
{
    char test[] = "+-+--+155";
    for (int i = 0; test[i] != '\0'; i++) {
        is_digits(test[i]);
    }
}
