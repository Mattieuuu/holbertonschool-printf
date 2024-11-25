#include <stdio.h>
#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int i;
    unsigned char* str;
    char charactere;
    int count;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
        i++;
        if (format[i] == 'd' || format[i] == 'i')
        {
            int num = va_arg(args, int);
            while (num != 0)
                write(1,num,1);
                num++;
                count++;
        }

        
        else if (format[i] == 's')
        {
            char *str = va_arg(args, char*);
            while (*str != '\0')
            write(1,str, 1);
                str++;
                count++;
        }
    
        else if (format[i] == 'c')
        {
            char charactere = (char)va_arg(args, int);
            write(1,&charactere,1);
             count++;
        }

        }
        else
        {
            va_end(args);
        return(count);
        }
    }

   
}
