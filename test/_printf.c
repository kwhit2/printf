#include "holberton.h"

/**
 *print_all -  function that prints anything.
 *@format: *format const pointer
 *
 *Description:  function that prints anything.
 *section header: Section description
 *Return: returns void
 */

int (*get_format_func(const char *s))(va_list)
{
print_t print[] = {
{"c", print_char},
{"s", print_string},
{NULL, NULL}
};

unsigned int i;

for (i = 0; print[i].f != NULL; i++)
{
if (*(print[i]).prt == *s)
{
break;
}
}
return (print[i].f);
}


/**
 *_printf -  function that prints anything.
 *@format: *format const pointer
 *
 *Description:  function that prints anything.
 *section header: Section description
 *Return: returns void
 */

int _printf(const char *format, ...)
{

va_list argptr;
int (*f)(va_list);

unsigned int x = 0, count = 0;

va_start(argptr, format);

while (format[x])
{
    for (; format[x] != '%' && format[x]; x++)
    {
    _putchar(format[x]);
    count++;
    }
        if (!format[x])
        return (count);

        f = get_format_func(&format[x + 1]);

        if (f != NULL)
        {
        count += f(argptr);
        x += 2;
        continue;
        }
            if (format[x] == '%')
            {
            count++;
            _putchar('%');
            }
                if (!format[x + 1])
                {
                return (-1);
                _putchar(format[x]);
                count++;
                }
                    if (format[x + 1] == '%')
                    {
                    x += 2;
                    }
                        else
                        {
                        x++;
                        }
}
va_end(argptr);
return (count);
}


