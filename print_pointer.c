#include "main.h"

/**
 * print_pointer - prints a pointer address
 * @ptr: va_list pointer
 * @charcountp: pointer to character count
 */
void print_pointer(va_list ptr, int *charcountp)
{
void *address = va_arg(ptr, void *);
unsigned long addr, temp;
int num_digits, i;
char hex_address[16];

if (address == NULL)
{
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
(*charcountp) += 5; }
else
{
_putchar('0');
_putchar('x');
(*charcountp) += 2;

addr = (unsigned long)address;

num_digits = 0;
temp = addr;

do {
temp /= 16;
num_digits++;
} while (temp > 0);
for (i = num_digits - 1; i >= 0; i--)
{
hex_address[i] = "0123456789abcdef"[addr % 16];
addr /= 16; }
for (i = 0; i < num_digits; i++)
{
_putchar(hex_address[i]);
(*charcountp) += 1; }}
}
