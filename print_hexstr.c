#include "main.h"
/**
 * print_hexa - prints an unsigned int in hexa format
 * @n: va_list pointer
 */

void print_hexa(int n)
{
int i, j;
int hexa[32];
unsigned int num = n;
for (i = 0; i < 32; i++)
hexa[i] = 0;
if (num == 0)
{
_putchar('0');
return;
}
for (i = 0; num > 0; i++)
{
if ((num % 16) < 10)
hexa[i] = (num % 16) + 48;
else
hexa[i] = (num % 16) % 10 + 65;
num /= 16;
}
for (j = 1; j >= 0; j--)
{
if (hexa[j] >= 0 && hexa[j] <= 9)
_putchar(hexa[j] + '0');
else
_putchar(hexa[j]);
}
}
/**
 * print_hexstr - does something
 * @ptr: variable
 * @charcountp: variable
 */
void print_hexstr(va_list ptr, int *charcountp)
{
char *str = va_arg(ptr, char *);
if (!str)
str = "(null)";
while (*str)
{
if (*str < 32 || *str >= 127)
{
_putchar('\\');
_putchar('x');
print_hexa(*str);
(*charcountp) += 4;
}
else
{
_putchar(*str);
(*charcountp) += 1;
}
str++;
}
}
