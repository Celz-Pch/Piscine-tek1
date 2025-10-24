/*
** EPITECH PROJECT, 2025
** my_print_params
** File description:
** params test
*/

int my_putstr(char const *str);

int main(int argc, char **argv)
{
    int i = 0;

    for (i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putstr("\n");
    }
}
