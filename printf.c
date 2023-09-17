#include "main.h"
/**
 * _printf - printf function
 * @format: var
 * Return: int
 */
int _printf(const char *format, ...)
{
ops_t print[] = {
{"c", print_char},
{"s", print_str},
{"i", print_int},
{"d", print_int},
{"%", print_percent},
{NULL, NULL}};
int charcount = 0, i;
va_list ptr;
va_start(ptr, format);
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
if (format[0] == '%' && format[1] == ' ')
{
i = 1;
while (format[i] == ' ')
i++;
if (format[i] == '\0')
return (-1); }
while (*format)
{
i = 0;
if (*format != '%')
{
_putchar(*format);
charcount++; }
else
{
format++;
if (*format == '\0')
return (-1);
while (*format == ' ')
format++;
while (print[i].sp)
{
if (*format == print[i].sp[0])
{
print[i].f(ptr, &charcount);
break; }
i++; }
!print[i].sp ? (_putchar('%'), _putchar(*format), charcount += 2)
: 0; }
format++; }
va_end(ptr);
return (charcount); }
