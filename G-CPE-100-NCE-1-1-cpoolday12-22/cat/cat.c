/*
** EPITECH PROJECT, 2025
** cat
** File description:
** cat
*/

#include <fcntl.h>
#include <unistd.h>
#include "cat.h"

int main(int argc, char **argv)
{
    int ret = 0;
    int i;

    if (argc == 1)
        return cat_stdin();
    i = 1;
    while (i < argc) {
        if (cat(argv[i]) == 84)
            ret = 84;
        i++;
    }
    return ret;
}
