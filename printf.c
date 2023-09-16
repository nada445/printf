#include "main.h"

/**
 * print_char - does something
 * @ptr: variable
 * @charcountp: variable
 * Return: void
 */
void print_char(va_list ptr, int *charcountp)
{
_putchar(va_arg(ptr, int));
(*charcountp) += 1;
}
/**
 * print_str - does something
 * @ptr: variable
 * @charcountp: variable
 * Return: void
 */
void print_str(va_list ptr, int *charcountp)
{
char *str = va_arg(ptr, char *);
if (!str)
str = "(null)";
while (*str)
{
_putchar(*str);
(*charcountp) += 1;
str++;
}
}

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
{NULL, NULL}};
int charcount = 0, i = 0;
va_list ptr;
va_start(ptr, format);
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
while (*format)
{
if (*format != '%')
{
_putchar(*format);
charcount++; }
else
{
format++;
if (*format == '\0')
break;
while (print[i].sp)
{
if (*format == print[i].sp[0])
{
print[i].f(ptr, &charcount);
break; }
i++; }
if (*format == '%' && !print[i].sp)
{
_putchar('%');
charcount++; }
else if (!print[i].sp)
{
_putchar('%');
_putchar(*format);
charcount += 2; }}
format++; }
va_end(ptr);
return (charcount); }
