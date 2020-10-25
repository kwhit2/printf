#include "holberton.h"

/**
 *print_char - print char
 *
 * @a: char a
 * Return: int
 */

int print_char(char a)
{
char ischar = va_arg(char a, int);
_putchar(ischar);
return (1);
}

int print_string(const char *b, ...)
{
va_list arg;
unsigned int i;
char *b;

va_start(arg, b);

for (i = 0; i != '\0'; i++)
{
b = (va_arg(arg, char *));
_putchar(b);
}
_putchar('\n');
va_end(arg);
}
