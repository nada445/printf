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
 * print-int - does something
 * @ptr: variable
 * @charcountp: variable
 */
void print_int(va_list ptr, int *charcountp)
{
int divisor, i;
int num = va_arg(ptr, int);
int num_copy = num;
int num_digits = 0;

do {
num_copy /= 10;
num_digits++;
} while (num_copy != 0);

if (num == 0)
{
        _putchar('0');
        (*charcountp) += 1;
}
if (num < 0)
{
_putchar('-');
*(charcountp) += 1;
num = -num;
}

divisor = 1;
for (i = 1; i < num_digits; i++)
{
divisor *= 10;
}

while (divisor > 0)
{
int digit = num / divisor;
_putchar('0' + digit);
*(charcountp) += 1;
num %= divisor;
divisor /= 10;
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
if (*format == '%')
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
