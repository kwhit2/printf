#ifndef _PRINTF_FUNCTION
#define _PRINTF_FUNCTION
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

typedef struct print
{
	char *op;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char a);
int print_string(char b);
int print_formatS(char c);
int print_digit(char d);
int print_integer(int e);


#endif
