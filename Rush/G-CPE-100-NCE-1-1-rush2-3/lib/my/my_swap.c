/*
** EPITECH PROJECT, 2025
** my_swap.c
** File description:
** this is a functions that get 2 pointers and swap the two digits 12 --> 21
*/

int my_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    return (0);
}
