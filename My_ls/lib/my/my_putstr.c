/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-maellie.brient-bert
** File description:
** my_putstr
*/

void my_putchar(char c);

int my_putstr(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
