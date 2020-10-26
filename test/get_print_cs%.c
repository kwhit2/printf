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

for (; S[i] != '\0'; i++)
{
_putchar (S[i]);
}
return (1);
}

/**
 *print_integer - print integers
 *
 * @c: va_list e
 * Return: int
 */
int print_integer(va_list cc)
{
int count = 0;
	if (cc < 0)
    {
		_putchar('-');
        cc = -cc;
    }
    if (cc / 10)
    {
        print_integer(cc / 10);
        count++;
    }
_putchar((cc % 10) + '0');
return (count);
}
