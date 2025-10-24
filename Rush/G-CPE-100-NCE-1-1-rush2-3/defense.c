/*
** EPITECH PROJECT, 2025
** defense
** File description:
** defense recode
*/

#include <stdio.h>

void show_2d_array(char **str)
{
    int i;
    int j;

    for (i = 0; str[i] != NULL; i++) {
        printf("%s \n", str[i]);
    }
}

int main(void)
{
    char *str[] = {"Hello", "World", "test"};
    
    show_2d_array(str);
}
