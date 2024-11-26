#include "main.h" 
#include <stddef.h>
#include <stdarg.h> 
#include <unistd.h> 
#include "main.h"
int _printf(const char *format, ...) 
{
va_list args; 
int count = 0; 
char *str; 
char character; 
int num = 0; 
int i = 0;
if (format == NULL)
{ 
return(-1); 
} 
va_start(args,format); 
while (format[i] != '\0') 
{ 
if (format[i] == '%') 
{ 
i++; 
if (format[i] == 'd' || format[i] == 'i') 
{ 
num = va_arg(args,int); 
count += print_number(num); 
} 
else if (format[i] == 's')
{
str = va_arg(args,char *);
if (str == NULL)
{
str = "(null)";
}
count += print_string(str);
}
else if (format[i] == 'c')
{
character = (char) va_arg(args,int);
count += print_char(character);
}
else if (format[i] == '%')
{
count += write(1, "%",1);
}
else
{
count += write(1 ,&format[i-1], 1);
}
}
else
{
count += write(1, &format[i], 1);
}
i++;
}
va_end(args);
return (count);
}


