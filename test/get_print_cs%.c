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
 *r_lens - print integer
 *
 * @n: va_list d
 * Return: int
 */
int r_len(int n)
{
int i, len;
if (n == 0)
return (0);
i = n % 10;
len = 1 + r_len(n / 10);
_putchar(i + '0');
return (len);
}
/**
 *print_ints - print integer
 *
 * @d: va_list d
 * Return: int
 */

int print_integer(va_list v)
{
int count = 0;
int b;
char a, c;
int x = va_arg(v, char *);

if (x < 0)
{
_putchar('-');
a = ('0' - (x % 10));
x /= -10;
}
else
{
a = ((x % 10) + '0');
x /= 10;
count = a;
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
b /= 10;
count = c;
}
_putchar(a);
return (count);
}
