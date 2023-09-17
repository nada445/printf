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
