#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - structure for specifier of format
 * @type: character of specifier
 * @f: pointers of functions for specifier
 */

typedef struct format
{
char type;
int (*f)(va_list);
} format_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list args);
int print_char(va_list args);
int print_perc(va_list args);
int print_int(va_list args);
int print_num(unsigned int num);
int handle_spe(const char type, va_list args, format_t
handler[]);

#endif /* MAIN_H */
