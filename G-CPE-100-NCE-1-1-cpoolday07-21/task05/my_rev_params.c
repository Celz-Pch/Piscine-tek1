/*
** EPITECH PROJECT, 2025
** my_rev_params.c
** File description:
** my_rev_params.c
*/

int my_putstr(char const *str);

int main(int argc, char **argv)
{
    int i;

    for (i = argc - 1; i >= 0; i--) {
        my_putstr(argv[i]);
        my_putstr("\n");
    }
}
