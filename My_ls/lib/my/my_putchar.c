/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_putchar
*/

#include <unistd.h>

ssize_t write(int fd, const void *buf, size_t count);

void my_putchar(char c)
{
    write(1, &c, 1);
}
