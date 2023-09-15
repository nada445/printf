#include "main.h"
/**
 * _printf - printf function
 * @format: var
 * Return: int
 */
int _printf(const char *format, ...)
{
int charcount;
char *str;
va_list ptr;
va_start(ptr, format);
charcount = 0;
while (*format)
{
if (*format != '%')
{
putchar(*format);
charcount++;
}
else
{
format++;
if (!format)
break;
if (*format == 'c')
{
putchar(va_arg(ptr, int));
charcount++;
}
else if (*format == 's')
{
str = va_arg(ptr, char*);
while (*str)
{
putchar(*str);
charcount++;
str++; }}
else if (*format == '%')
{
putchar('%');
charcount++; }}
format++;
}
va_end(ptr);
return (charcount);
}
