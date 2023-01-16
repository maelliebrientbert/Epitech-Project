/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 == *s2) {
            return 0;
        }
        if (*s1 < s2) {
            return 1;
        }
        if (*s1 > s2) {
            return -1;
        }
        s1++;
        s2++;
    }
}
