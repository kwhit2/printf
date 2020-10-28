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
 *print_integer - print integer
 *
 * @v: va_list v
 * Return: int
 */

int print_integer(va_list v)
{
int count = 0, z;
int b;
char a, c;
int x = va_arg(v, char *);

if (x < 0)
{
_putchar('-');
count++;
a = ('0' - (x % 10));
x /= -10;
}
else
{
a = ((x % 10) + '0');
x /= 10;
}
b = 0;
while (x > 0)
{
b = b * 10 + (x % 10);
x /= 10;
}
while (b > 0)
{
c = ((b % 10) + '0');
_putchar(c);
count++;
b /= 10;
}
for(; z!= 0; z--)
_putchar('0');
if (x % 10 == 0)
z++;

_putchar(a);
count++;
return (count);
}
