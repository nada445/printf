#include "main.h"
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
