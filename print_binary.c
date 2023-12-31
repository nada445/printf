#include "main.h"
/**
 * print_binary - prints an unsigned int in binary format
 * @ptr: va_list pointer
 * @charcountp: pointer to character count
 */

void print_binary(va_list ptr, int *charcountp)
{
int i, j;
int binary[32];
unsigned int num = va_arg(ptr, unsigned int);
if (num == 0)
{
_putchar('0');
(*charcountp) += 1;
return;
}
for (i = 0; num > 0; i++)
{
binary[i] = num % 2;
num /= 2;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(binary[j] + '0');
(*charcountp) += 1;
}
}
