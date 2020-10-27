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
 *recur_len - recursive len
 *
 * @s: int s
 * Return: int
 */

int recur_len(int s)
{
int i, len;
if (s == 0)
return (0);
i = s % 10;
len = 1 + r_len(s / 10);
_putchar(i + '0');
return (len);
}
/**
 *print_integer - print integer
 *
 * @n: va_list n
 * Return: int
 */

int print_integer(va_list n)
{
int sum = 0;
int x = va_arg(n, int);

sum = r_len(x);

return (sum);
}
