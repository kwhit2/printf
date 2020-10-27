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

int print_integer(va_list n)
{
int count = 0;
int x = va_arg(n, char *);
if (x < 0)
{
putchar('-');
x = -x;
}
if (x / 10)
{
print_integer(x / 10);
count++;
}
putchar((x % 10) + '0');
return (count);
}
