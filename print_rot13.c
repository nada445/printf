#include "main.h"

/**
 * print_rot13 - prints the ROT13-encoded string
 * @ptr: va_list pointer
 * @charcountp: pointer to character count
 */
void print_rot13(va_list ptr, int *charcountp)
{
char *s = va_arg(ptr, char *);
if (!s)
{
s = "(null)";
}
for (int i = 0; s[i] != '\0'; i++)
{
char c = s[i];
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
_putchar(((c - base + 13) % 26) + base);
}
else
{
_putchar(c);
}
(*charcountp) += 1;
}
}
