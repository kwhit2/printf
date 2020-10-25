#include "holberton.h"


/**
 *print_all -  function that prints anything.
 *@format: *format const pointer
 *
 *Description:  function that prints anything.
 *section header: Section description
 *Return: returns void
 */

int _printf(const char *format, ...)
{

va_list arg;

unsigned int x = 0;
char *str;
while (format)
{
va_start(arg, format);
while (format[x] != '\0')
{
switch (format[x])
{
case 'c':
_putchar(va_arg(arg, int));
break;

case 's':
str = va_arg(arg, char *);
if (!str)
str = "(nil)";
_putchar(*str);
break;
default:
break;
}
x++;
}
va_end(arg);
break;
}
return (0);
}
