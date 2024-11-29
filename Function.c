#include "main.h"

/**
 * print_int - print number
 * @args: argument list of numbers to print
 * Return: numbers of number to print
 */

int print_int(va_list args)
{
int a = va_arg(args, int);
int count = 0;
if (a < 0)
{
count += _putchar('-');
a = -a;
}
count += print_num(a);
return (count);
}

/**
 * print_num - print number with recursive
 * @num: number to print
 * Return: numbers of number to print
 */

int print_num(unsigned int num)
{
int count = 0;
if (num / 10)
count += print_num(num / 10);
return (count + _putchar(num % 10 + '0'));
count += _putchar(num % 10 + '0');
return (count);
}

int _putchar(char c)
{
return (write(1, &c, 1));
}
