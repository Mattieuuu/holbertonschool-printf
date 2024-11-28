#include <stdarg.h> 
#include "main.h"


int print_num(va_list args) 
{
int a = va_arg(args, int);
int count = 0;
if (a < 0)
{
    count += _putchar('-');
    a = -a;
}
count += print_number(a);
return (count);
}

int print_number(unsigned int n)
{
    int count = 0;
    if (n / 10)
    {
        count += print_number(n / 10);
    }
    return (count + _putchar(n % 10 + '0'));
    count += _putchar(n % 10 + '0');
    return (count);
}
