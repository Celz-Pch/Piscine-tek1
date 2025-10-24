/*
** EPITECH PROJECT, 2025
** test
** File description:
** cat
*/

#include <criterion/criterion.h>
#include <unistd.h>
#include <fcntl.h>
#include "../cat/cat.h"

Test(cat_func, read_ok) {
    int fd = open("tests/test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    int ret;
    write(fd, "Hello World", 11);
    close(fd);

    ret = cat("tests/test_file.txt");
    cr_assert_eq(ret, 0);
}

Test(cat_func, pas_de_file) {
    int ret = cat("tests/nofile.txt");
    cr_assert_eq(ret, 84);
}
