#include "main.h"
/**
 * print_int - does something
 * @ptr: variable
 * @charcountp: variable
 * Return: void
 */
void print_int(va_list ptr, int *charcountp)
{
if (charcountp == NULL)
return;
int divisor, i;
int num = va_arg(ptr, int);
int num_digits = 0;
int num_copy = num;

do {
num_copy /= 10;
num_digits++;
} while (num_copy != 0);

if (num < 0)
{
_putchar('-');
(*charcountp) += 1;
num *= -1;
}
if (num == 0)
{
_putchar('0');
(*charcountp) += 1;
return;
}
divisor = 1;
for (i = 1; i < num_digits; i++)
{
divisor *= 10;
}

while (divisor > 0)
{
int digit = num / divisor;
_putchar(digit + '0');
(*charcountp) += 1;
num %= divisor;
divisor /= 10;
}
}
