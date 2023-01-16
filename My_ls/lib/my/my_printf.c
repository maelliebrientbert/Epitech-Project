/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_printf
*/

#include <stdarg.h>

int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(const char *str);

int flags(const char *format, int index, va_list list)
{
    switch (format[index + 1]) {
    case 'd':
        my_put_nbr(va_arg(list, int));
        return 1;
    case 's':
        my_putstr(va_arg(list, char *));
        return 1;
    default:
        return 1;
    }
    return 1;
}

int my_printf(const char *format, ...)
{
    int count = 0;
    va_list list;
    va_start(list, format);
    for (int i = 0; format[i]; i++) {
        if (format[i] == '%') {
            i += flags(format, i, list);
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(list);
    return 0;
}
