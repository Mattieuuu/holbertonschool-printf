#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_t - structure for specifier of format
 * @type: character of specifier
 * @f: pointers of functions for specifier
 */

typedef struct format_t
{
char type;
int (*f)(va_list);
} list_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list args);
int print_char(va_list args);
int print_perc(va_list args);
int print_int(va_list args);
int print_num(unsigned int num);
int handle_spe(const char type, va_list args, list_t
handler[]);
#endif /* MAIN_H */
