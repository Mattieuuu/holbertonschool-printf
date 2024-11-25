#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source
 * Return: Always 0 (Success)
 */

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int i;
    unsigned char* str;
    char character;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
        i++;
        if (format[i] == 'd')
        {
            int num = va_arg(args, int);
            printf("%d", num);
        }

        else if (format[i] == 'i')
        {
            int num = va_arg(args, int);
            printf("%i", num);
        }
        
        else if (format[i] == 's')
        {
            char str = va_arg(args, char*);
            printf("%s", str);
        }

        else if (format[i] == 'c')
        {
            char c = (char)va_arg(args, char*);
            printf("%c", character);
        }

        }
        else
        {
        return(format);
        }
    }

}