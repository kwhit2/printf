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

unsigned int x = 0, b;
char *str;
while (format)
{
va_start(arg, format);
while (format[x] != '\0')
{
b = 1;
switch (format[x])
{
case 'c':
printf("%c", va_arg(arg, int));
break;
case 'i':
printf("%d", va_arg(arg, int));
break;
case 'f':
printf("%f", va_arg(arg, double));
break;
case 's':
str = va_arg(arg, char *);
if (!str)
str = "(nil)";
printf("%s", str);
break;
default:
b = 0;
break;
}
if (format[x + 1] && b)
printf(", ");
x++;
}
va_end(arg);
break;
}
printf("\n");
}
