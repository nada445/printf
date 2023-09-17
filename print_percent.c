#include "main.h"

/**
 * print_percent - does something
 * @ptr: variable
 * @charcountp: variable
 */
void print_percent(va_list ptr, int *charcountp)
{
(void)ptr;
_putchar('%');
(*charcountp) += 1;
}
