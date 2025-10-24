/*
** EPITECH PROJECT, 2025
** func
** File description:
** func
*/

#include <fcntl.h>
#include <unistd.h>

int cat(char const *filename)
{
    char buf[30000];
    int fd = open(filename, O_RDONLY);
    int nb_read;

    if (fd == -1)
        return 84;
    nb_read = read(fd, buf, 30000);
    while (nb_read > 0) {
        if (write(1, buf, nb_read) == -1) {
            close(fd);
            return 84;
        }
        nb_read = read(fd, buf, 30000);
    }
    if (nb_read == -1)
        return 84;
    close(fd);
    return 0;
}

int cat_stdin(void)
{
    char buf[30000];
    int nb_read;

    nb_read = read(0, buf, 30000);
    while (nb_read > 0) {
        if (write(1, buf, nb_read) == -1) {
            return 84;
        }
        nb_read = read(0, buf, 30000);
    }
    if (nb_read == -1)
        return 84;
    return 0;
}
