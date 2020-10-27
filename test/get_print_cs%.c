#include "holberton.h"
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
int i;
char *S = va_arg(b, char *);

if (S == NULL)
S = "(null)";

for (i = 0; S[i] != '\0'; i++)
{
_putchar(S[i]);
}
return (i);
}

/**
 *print_ints - print integer
 *
 * @d: va_list d
 * Return: int
 */

int print_i(va_list i)
{
unsigned int x = 0;
char *S = va_arg(i, char *);

for (x = 0; S[x] != '\0'; x++)

    if (S[x] < 0)
    {
    putchar('-');
    x = -x;
    }
putchar((S[x] % 10) + '0');
return (x);
}
