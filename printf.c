#include "main.h"

/**
 * print_char - does something
 * @ptr: variable
 * @charcountp: variable
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
 * print_int - does something
 * @ptr: variable
 * @charcountp: variable
 * Return: void
 */
void print_int(va_list ptr, int *charcountp)
{
int divisor, i;
int num = va_arg(ptr, int);

if (num < 0)
{
_putchar('-');
(*charcountp)++;
num = -num;
}
if (num == 0)
{
_putchar('0');
(*charcountp)++;
}

divisor = 1;
for (i = 1; i < num; i *= 10)
{
divisor *= 10;
}

while (divisor > 0)
{
int digit = num / divisor + '0';
_putchar(digit);
(*charcountp) += 1;
num %= divisor;
divisor /= 10;
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
{"i", print_int},
{"d", print_int},
{NULL, NULL}};
int charcount = 0, i;
va_list ptr;
va_start(ptr, format);
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
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
while (print[i].sp)
{
if (*format == print[i].sp[0])
{
print[i].f(ptr, &charcount);
break; }
i++; }
*format == '%' ? (_putchar('%'), charcount++)
: !print[i].sp ? (_putchar('%'), _putchar(*format), charcount += 2)
: 0; }
format++; }
va_end(ptr);
return (charcount); }
