#ifndef _PRINTF_FUNCTION
#define _PRINTF_FUNCTION
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

typedef struct print
{
char *prt;
int (*f)(va_list);
} print_t;

int _putchar(char c);
int print_char(va_list a);
int print_string(va_list b);
int print_integer(va_list cc);

int _printf(const char *format, ...);
int (*get_format_func(const char *s))(va_list);


#endif