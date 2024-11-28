#include "main.h"

/**
 * _printf - printf functions and gestion of specifiers
 * @format: character chain for characters and specifiers
 * @...: va_ for arguments to search
 * Return: number of character to print
 */

int _printf(const char *format, ...)
{
va_list args;
int count = 0;
const char *i;

format_t handler[] = {
{'c', print_char},
{'s', print_str},
{'%', print_perc},
{'d', print_int},
{'i', print_int},
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
count += handle_spe(*i, args, handler);
}
else
{
count += _putchar(*i);
}
}
va_end(args);
return (count);
}

/**
 * handle_spe - treat specifiers and functions to call
 * @type: specifier
 * @args: argument list
 * @handler: specifier array
 * Return: number of character to print for specifier
 */

int handle_spe(char type, va_list args, format_t
handler[])
{
int i;
for (i = 0; handler[i].type != '\0'; i++)
{
if (handler[i].type == type)
{
return (handler[i].f(args));
}
}
return (_putchar('%') + _putchar(type));
}

/**
 * print_str - print a chain in output
 * @args: arguments to print
 * Return: number of characters to print
 */

int print_str(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
if (str == NULL)
str = "(null)";
while (*str)
{
count += _putchar(*str++);
}
return (count);
}

/**
 * print_perc - prints %
 * @args: arguments list
 * Return: 1 for success
 */

int print_perc(va_list args)
{
(void)args;
return (_putchar('%'));
}

/**
 * print_char - imprime un caractère sur la sortie standard.
 * @args: Liste d'arguments contenant le caractère à imprimer.
 * Return: 1 for success
 */

int print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}
