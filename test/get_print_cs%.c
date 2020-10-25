#include "holberton.h"
#include <stdarg.h>

/**
 *print_char - print char
 *
 * @a: char a
 * Return: int
 */

int print_char(va_list a)
{
char chars = (char)va_arg(a, int);
_putchar(chars);
return (1);
}

/**
 *print_string - print strings
 *
 * @b: char a
 * Return: int
 */

int print_string(va_list b)
{
unsigned int i;
char *S = va_arg(b, char *);

for (i = 0; S[i]; i++)
{
_putchar (S[i]);
}
return (i);
}
