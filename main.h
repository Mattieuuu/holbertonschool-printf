#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
void fonction();

typedef struct _format
{
    char type;

    int (*f)(va_list);
} list_t;

int _putchar(char c);

int _printf(const char *format, ...);
int print_num(va_list args);
int print_number(unsigned int n);
int print_int(va_list args);
int hand_spe(char spe, va_list args, list_t handler[]);
int print_str(va_list args);
int print_perc(va_list args);
int print_char(va_list args);

#endif
