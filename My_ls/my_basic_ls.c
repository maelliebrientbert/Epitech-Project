/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_basic_ls
*/

#include <sys/types.h>
#include <dirent.h>
#include <sys/syscall.h>
#include <unistd.h>

int my_printf(const char *format, ...);

int my_basic_ls(DIR *d)
{
    struct dirent *dir;
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_name[0] != '.') {
            my_printf("%s \n", dir->d_name);
        }
    }
    return 0;
}
