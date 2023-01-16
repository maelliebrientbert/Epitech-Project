/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_l_flag
*/

#include <sys/types.h>
#include <dirent.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <sys/stat.h>

int my_printf(const char *format, ...);
int my_ls(int ac, char **av);
int stat(const char *restrict pathname, struct stat *restrict statbuf);

int my_l_flag(DIR *d)
{
    struct dirent *dir;
    struct stat n;
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_name[0] != '.') {
            stat(dir->d_name, &n);
            my_printf("%d ", n.st_nlink);
            my_printf("%d ", n.st_size);
            my_printf("%s \n", dir->d_name);
        }
    }
}
