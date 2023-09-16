#include "main.h"
/**
 * _printf - printf function
 * @format: var
 * Return: int
 */
int _printf(const char *format, ...)
{
char *str;
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
return (-1)
if (*format == 'c')
{
_putchar(*format);
charcount++; }
if (*format == 's')
{
str = va_arg(ptr, char *);
if (!str)
str = "(null)";
while (*str)
{
_putchar(*str);
charcount++;
str++; }}
if (*format == '%')
{
_putchar('%');
charcount++; }
else
{
_putchar('%');
_putchar(*format);
charcount += 2; }}
format++; }
va_end(ptr);
return (charcount); }
