#include "holberton.h"


/**
 *print_all -  function that prints anything.
 *@format: *format const pointer
 *
 *Description:  function that prints anything.
 *section header: Section description
 *Return: returns void
 */

int (*get_format_func(char *s))(va_list)
{
print_t print[] = {
{"c", print_char},
{"s", print_string},
{NULL, NULL}
};

unsigned int i;

for (i = 0; print[i].f != NULL; i++)
{
if (*(print[i]).prt == s[0])
;
}
return (print[i].f);
}
