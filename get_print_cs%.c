    #include "holberton.h"
#include <stdarg.h>

/**
 *print_char - print char
 *
 * @a: va_list a
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
 * @b: va_list b
 * Return: int
 */

int print_string(va_list b)
{
unsigned int i = 0;
char *S = va_arg(b, char *);

if (S == NULL)
S = "(null";

for (; S[i]; i++)
{
_putchar(S[i]);
}
return (i);
}
