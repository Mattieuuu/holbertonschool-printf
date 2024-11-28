
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
    return write(1, &c, 1);
}

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    const char *i;

    list_t handler[] = {
        {'c', print_char},
        {'s', print_str},
        {'%', print_perc},
        {'d', print_num},
        {'i', print_num},
        {'\0', NULL}
    };
    if (format == NULL)
    return (-1);
    va_start(args, format);
    for (i = format; *i != '\0'; i++)
    {
        if (*i == '%')
        {
            i++;
            if (*i == '\0')
            {
                va_end(args);
                return (-1);
            }
            count += hand_spe(*i, args, handler);
        }
        else
        {
            count += _putchar(*i);
        }
    }
    va_end(args);
    return (count);
}

int hand_spe(char spe, va_list args, list_t handler[])
{
    int index;
    for (index = 0; handler[index].type != '\0'; index++)
    {
    if (handler[index].f(args))
    {
        return (handler[index].f(args));
    }
    }
    return (_putchar('%') + _putchar(spe));
}

int print_str(va_list args)
{
char *string = va_arg(args, char *);
int count = 0;
if (string == NULL)
{
    string = "(null)";
}
while (*string) 
{
    count += _putchar(*string++);
}
return (count);
}

int print_perc(va_list args)
{
    (void)args;
    return(_putchar('%'));
}

int print_char(va_list args)
{
    char c = va_arg(args, int);
    return (_putchar(c));
}
