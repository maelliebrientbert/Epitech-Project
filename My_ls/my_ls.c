/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_ls
*/

#include <sys/types.h>
#include <dirent.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int closedir(DIR *dirp);
int my_printf(const char *format, ...);
int my_basic_ls(DIR *d);
int my_l_flag(DIR *d);
int my_strcmp(char const *s1, char const *s2);

int my_ls(int ac, char **av)
{
    struct dirent *dir;
    DIR *d;
    if (ac == 1) {
        d = opendir(".");
        my_basic_ls(d);
    } else if (ac == 2) {
        d = opendir(av[1]);
        my_basic_ls(d);
    }
    if (ac == 3) {
        if (strcmp("-l", av[1]) == 0) {
            d = opendir(av[2]);
            my_l_flag(d);
        }
    }
    if (d == NULL) {
        perror("my_ls: ");
        exit(84);
    }
    
    closedir(d);
    return 0;
}

int main(int ac, char **av)
{
    my_ls(ac, av);
    return 0;
}
