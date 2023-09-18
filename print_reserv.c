#include "main.h"

/**
 * print_reversed - prints a reversed string
 * @ptr: va_list pointer
 * @charcountp: pointer to character count
 */
void print_reversed(va_list ptr, int *charcountp)
{
char *s = va_arg(ptr, char *);
int len, i;

if (!s)
{
s = "(null)";
}

len = 0;

while (s[len] != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
(*charcountp) += 1;
}
}
