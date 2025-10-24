/*
** EPITECH PROJECT, 2025
** grep
** File description:
** grep
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void ft_putstr_fd(char *s, int fd)
{
    int i = 0;
    while (s[i])
        write(fd, &s[i++], 1);
}

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

int match(char *pattern, char *str)
{
    int i = 0;
    int j = 0;
    int plen = ft_strlen(pattern);
    int slen = ft_strlen(str);
    
    while (i <= slen - plen)
    {
        j = 0;
        while (j < plen && str[i + j] == pattern[j])
            j++;
        if (j == plen)
            return 1;
        i++;
    }
    return 0;
}

void grep_file(char *pattern, char *filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        ft_putstr_fd("grep: ", 2);
        ft_putstr_fd(filename, 2);
        ft_putstr_fd(": No such file or directory\n", 2);
        return;
    }
    
    char *line = malloc(10000);
    if (!line)
        return;
    
    int i = 0;
    char c;
    int r;
    
    while ((r = read(fd, &c, 1)) > 0)
    {
        if (c == '\n')
        {
            line[i] = '\0';
            if (match(pattern, line))
            {
                ft_putstr_fd(line, 1);
                write(1, "\n", 1);
            }
            i = 0;
        }
        else
        {
            line[i++] = c;
        }
    }
    
    if (i > 0)
    {
        line[i] = '\0';
        if (match(pattern, line))
        {
            ft_putstr_fd(line, 1);
            write(1, "\n", 1);
        }
    }
    
    free(line);
    close(fd);
}

int main(int ac, char **av)
{
    if (ac < 3)
        return 1;
    
    char *pattern = av[1];
    
    int i = 2;
    while (i < ac)
    {
        grep_file(pattern, av[i]);
        i++;
    }
    
    return 0;
}
